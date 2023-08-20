
// #include <stdio.h>

char * intToStr(char * a, int num)
{
	char t;
	int i, j;
	int negNum = num;
	
	if (num < 0)
	{
		num = num * -1;		
	}
// 457
	for (i = 0; num > 0; i++)
	{
		a[i] = (num % 10) + '0';
		num = num / 10;
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
	// printf("%s", a);
	return (a);
}

// int main(void)
// {
// 	char sINT[20];

// 	intToStr(sINT, 345);

// 	printf("%s", sINT);
// 	return (0);
// }