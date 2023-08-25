

/**
* rot13 - encodes a string using rot13
* @s: string.
* Return: pointer to s
*/

char *rot13(char *s)
{
	int count = 0, i;
	char alph[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + count) == alph[i])
			{
				*(s + count) = rot13[i];
				break;
			}
		}
	count++;
	}
	return (s);
}
