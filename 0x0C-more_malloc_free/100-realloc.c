#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to reallocate
 * @old_size: size of ptr
 * @new_size: size of ptr after reallocation
 * Return: reallocated ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		memcpy(new_ptr, ptr, old_size);
		free(ptr);
		return (new_ptr);
	}
	if (new_size < old_size)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		memcpy(new_ptr, ptr, new_size);
		free(ptr);
		return (new_ptr);
	}

	return (NULL);
}
