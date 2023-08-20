
#include <stdio.h>

void intToStr(/*char * str, */int num)
{
	char a[10];
	int i;
// 457
	for (i = 0; num > 0; i++)
	{
		a[i] = (num % 10) + '0';
		num = num / 10;
	}
	list[i] = '\0';

	while (*(list + q) != '\0')
	{
		printf("%c ", *(list + q));
		q++;
	}

}

int main(void)
{
	intToStr(345);
	return (0);
}