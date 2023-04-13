#include "main.h"
#include <stdlib.h>
/**
 *_realloc -  a function that reallocates a memory block using malloc and free.
 *@ptr:a pointer to the memory was allocated by the old_size.
 *@old_size:the size of allocated memory at first.
 *@new_size:the new size we should allocate to the memory.
 *Return: a pointer to new memory allocated otherwise NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		ptr = malloc(new_size);

	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
