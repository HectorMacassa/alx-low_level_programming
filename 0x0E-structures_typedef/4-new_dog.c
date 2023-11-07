#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *str);
dog_t *new_dog(char *name, float age, char *owner);
/**
 * _strlen - finds the length of a string
 * @str: String to be measured
 *
 * Return: Length of string
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}
/**
 * _strcopy - copies a string to by src
 * to a buffer pointed to be dest.
 * @dest: Buffer storing the string copy
 * @src: Source string
 *
 * Return: Pointer to dest
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];
	dest[index] = '\0';
	return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: Name of the dog
 * @age: Age of dog
 * @owner: Owner of dog
 *
 * Return: New struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggie;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	doggie = malloc(sizeof(dog_t));
	if (doggie == NULL)
		return (NULL);
	doggie->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (doggie->name == NULL)
	{
		free(doggie->name);
		free(doggie);
		return (NULL);
	}
	doggie->name = _strcopy(doggie->name, name);
	doggie->age = age;
	doggie->owner = _strcopy(doggie->owner, owner);

	return (doggie);
}
