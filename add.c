#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int a, b, sum;
	if (argc != 3)
	{
		printf("Foloseste ./add nr1 nr2");
		return -1;
	}
	
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	sum = a + b;
	
	printf("suma = %d", sum);
	
	return 0;
}