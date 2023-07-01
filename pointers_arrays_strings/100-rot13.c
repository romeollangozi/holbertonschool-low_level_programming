#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rot13 - encodes a string using rot13
 * @s: string to be encoded
 * Return: the encoded string
 */

char *rot13(char *s)
{
	int i, j;
	char *cipher = "nopqrstuvwxyzNOPQRSTUVWXYZabcdefghijklmABCDEFGHIJKLM";
	char *alphabet = "abcdefghijklmABCDEFGHIJKLMnopqrstuvwxyzNOPQRSTUVWXYZ";

	for (i = 0; i < (int) strlen(s); i++)
	{
		for (j = 0; j < (int) strlen(cipher); j++)
		{
			if (s[i] == cipher[j])
			{
				s[i] = alphabet[j];
				break;
			}
		}
	}
	return (s);

}
