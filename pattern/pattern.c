#include <stdio.h>

int main () {

	int n;
	scanf("%d",&n);
	for (int i = n; i>=0 ; i--)
	{
		/* code */
		for (int a = 1; a<=i; a++)
		{
			/* code */
			printf("*");
		}
		printf("\n");
	}
}