#include <stdio.h>
#include <stdlib.h>

#include "swap.h"

int main()
{
	int a = 5,b =10;
	swap(&a, &b);
	printf("a=[%d] b=[%d]\r\n",a,b);
	return 0;
}

