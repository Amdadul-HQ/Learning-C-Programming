#include <stdio.h>

int main () {
	// Patter 1
	// 	****
	// 	***
	//  **
	//  *
	// int n;
	// scanf("%d",&n);
	// for (int i = n; i>0; i--)
	// {
	// 	/* code */
	// 	for (int a = i; a>0 ; a--)
	// 	{
	// 		/* code */
	// 		printf("*");
			
	// 	}
	// 	printf("\n");
	// }

	// Pattern 2
	// 	  *
	//   ***
	//  *****
	// *******
	// int n;
	// scanf("%d",&n);
	// for (int i = 1; i <=n; i++)
	// {
	// 	for (int a = 0; a < n-i; a++)
	// 	{
	// 		/* code */
	// 		printf(" ");
	// 	}
	// 	/* code */
	// 	for (int b = 1; b<=(2 * i -1); b++ )
	// 	{
	// 		/* code */
	// 		printf("*");
	// 	}
	// 	printf("\n");	
	// }

	// Pattern 3
	//    *
	//   ***
	//  *****
	// *******
	// *******
	//  *****
	//   ***
	//    *
	int n;
	scanf("%d",&n);

	for (int i = 1; i <=n; i++)
	{
		for (int a = 0; a < n-i; a++)
		{
			/* code */
			printf(" ");
		}
		/* code */
		for (int b = 1; b<=(2 * i -1); b++ )
		{
			/* code */
			printf("*");
		}
		printf("\n");	
	}
	for (int i = n; i > 0; i--)
	{
		for (int a = 0; a < n-i; a++)
		{
			/* code */
			printf(" ");
		}
		/* code */
		for (int b = 1; b<=(2 * i -1); b++ )
		{
			/* code */
			printf("*");
		}
		printf("\n");	
	}
}