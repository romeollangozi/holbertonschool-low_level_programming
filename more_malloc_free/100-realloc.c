#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *_realloc - reallocates a memory block
 *@ptr: pointer to the previous block
 *@old_size: size in bytes of the allocated space for ptr
 *@new_size: new size in bytes of the new memory block
 *Return: new memory block with previous data from old block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newbuffer;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		newbuffer = malloc(new_size);
		if (newbuffer == NULL)
			return (NULL);
		else
			return (newbuffer);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		newbuffer = malloc(new_size);
		if (newbuffer == NULL)
			return (NULL);

		memcpy(newbuffer, ptr, old_size);
		free(ptr);
		return (newbuffer);
	}
	free(ptr);
	return (NULL);
}
