#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - Counts the length of a string
 * @str: The string
 *
 * Return: An integer
 */

int _strlen(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}


/**
 * _strcpy - copies a string
 * @dest: The destination
 * @src: The source
 *
 * Return: The pointer to dest
 */

char *_strcpy(char *dest,char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * *new_dog - Craetes a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: A pointer to the newly created dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *puppy;
	int n_name = 0, n_owner = 0;

	if (name != NULL && owner != NULL)
	{
		n_name = _strlen(name) + 1;
		n_owner = _strlen(owner) + 1;
		puppy = malloc(sizeof(dog_t));

		if (puppy == NULL)
			return (NULL);

		puppy->name = malloc(sizeof(char) * n_name);

		if (puppy->name == NULL)
		{
			free(puppy);
			return (NULL);
		}

		puppy->owner = malloc(sizeof(char) * n_owner);

		if (puppy->owner == NULL)
		{
			free(puppy->name);
			free(puppy);
			return (NULL);
		}

		 _strcpy(puppy->name, name);
		puppy->age = age;
		_strcpy(puppy->owner, owner);
	}

	return (puppy);
}
