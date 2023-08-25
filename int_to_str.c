
/**
* intToStr - intToStr func
* @a: char sring
* @num: int
* @base: int
* Return: poinyer
*/

char *intToStr(char *a, int num, int base)
{
	char t;
	int i, j;
	int negNum = num;

	if (num < 0)
	{
		num = num * -1;
	}

	for (i = 0; num > 0; i++)
	{
		a[i] = (num % base) + '0';
		num = num / base;
	}
	if (negNum < 0)
	{
		a[i] = '-';
		i++;
	}

	a[i] = '\0';

	for (j = 0, i--; j < i; j++, i--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}

	return (a);
}
