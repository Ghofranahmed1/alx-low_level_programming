#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/*
main - Entry point

return:always 0 (suuess)
*/ 
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
		printf("last digit of %d is and is grater than 5\n", n % 10);
	else if (n % 10 == 0)
		printf("last digit of %d is and is 0\n", n % 10);
	else 
		printf("last digit of %d is and is less than 6 and not 0\n", n % 10);
	return (0);
}
