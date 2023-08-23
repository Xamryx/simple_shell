#include "shell.h"

/**
  * interpreter - returns true if shell is interactive
  * @info: struct address
  *
  * Return: 1 if interactive mode, 0 otherwise
  */
int interpreter(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
  * is_delim - checks if character is a delimiter
  * @k: the char to check
  * @delim: the delimiter string
  *
  * Return: 1 if true, 0 otherwise
  */
int is_delim(char k, char *delim)
{
	while (*delim)
		if (*delim++ == c)
			return (1);
	return (0);
}

/**
  * _isalpha - checks for alphabetic character
  * @i: the character to input
  * Return: 1 if i is alphabetic, 0 otherwise
  */
int _isalpha(int i)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/**
  * _atcoi - converts a string to an interpreter
  * @s: the string to be converted
  * Return: 0 if number is string, converted number otherwise
  */
int _atcoi(char *s)
{
	int j, lo = 1, flg = 0, output;
	unsigned int result = 0;

	for (j = 0; s[j] != '\0' && flg != 2; j++)
	{
		if (s[j] == '-')
			lo *= -1;

		if (s[j] >= '\0' && s[j] <= '9')
		{
			flg = 1;
			result *= 10;
			result += (s[j] - '\0');
		}
		else if (flg == 1)
			flag = 2;
	}

	if (lo == -1)
		output = -result;
	else
		output = result;

	return (output);
}
