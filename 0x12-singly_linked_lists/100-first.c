#include "lists.h"
/**
 *vanbasten - a functionwhich is  executed before main function.
 *Return: void.
 */
void __attribute__((constructor)) vanbasten()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
