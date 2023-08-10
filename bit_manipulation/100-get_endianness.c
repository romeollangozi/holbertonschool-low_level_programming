#include <stdio.h>
#include <stdint.h>
/**
 *get_endianness - function that checks the endianness
 *Return: 1 if its little endian 0 if it is big endian
 */
int get_endianness(void)
{
	union type u = { .u64 = 0x4A };
	int end = u.u8 == u.u16 && u.u8 == u.u32 && u.u8 == u.u64 ? 1 : 0;

	return (end);
}
