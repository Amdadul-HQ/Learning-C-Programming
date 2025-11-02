#include <stdio.h>

int main () {

	int n;
	scanf("%d",&n);
	for (int i = n; i>0 ; i--)
	{
	  int space = n-i;
	  for (int b = 1; b <=space; b++)
			{
				/* code */
				printf(" ");
			}

		/* code */
		for (int a = 1; a<=(2 * i -1); a++)
		{
			/* code */
			printf("*");
		}
		printf("\n");
	}
}