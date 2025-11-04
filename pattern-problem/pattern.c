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
	// for (int i = n; i > 0; i--)
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

	// Sorting
	int n;
	scanf("%d",&n);
	int ar[n];
	for (int i = 0; i < n; i++)
	{
		/* code */
	   scanf("%d",&ar[i]);
	}
	for (int i = 0; i < n-1; i++)
	{
		/* code */
		for (int a = i+1; a <n ; a++)
		{
			/* code */
			if(ar[i]>ar[a]){
				int tmp = ar[i];
				ar[i] = ar[a];
				ar[a] = tmp;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		/* code */
		printf("%d ",ar[i]);
	}
}