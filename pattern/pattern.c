#include <stdio.h>

int main () {

	int n;
	scanf("%d",&n);
	for (int i = 1; i<=n ; i++)
	{
	  int space = n-i;
	  // printf("%d",space);
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