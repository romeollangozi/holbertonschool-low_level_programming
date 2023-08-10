#ifndef MAIN_H
#define MAIN_H
/**
 * union type - s
 *@u8: s
 *@u16: s
 *@u32: s
 *@u64: s
 */
union  type
{
	uint8_t u8;
	uint16_t u16;
	uint32_t u32;
	uint64_t u64;
};
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int _putchar(char c);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);
#endif
