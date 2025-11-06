#include <stdio.h>
int main () {

	int n;
	scanf("%d",&n);
	for (int i =1;i<=n ; i++)
	{
	  int space = n-i;
	  for (int b = 1; b <=space; b++)
			{
				/* code */
				printf(" ");
			}

		/* code */
		for (int a = i; a>0; a--)
		{
			/* code */
			printf("%d",a);
		}
		printf("\n");
	}








	// for (int i =1;i<=n ; i++)
	// {
	//   int space = n-i;
	//   for (int b = 1; b <=space; b++)
	// 		{
	// 			/* code */
	// 			printf(" ");
	// 		}

	// 	/* code */
	// 	for (int a = 1; a<=(2 * i -1); a++)
	// 	{
	// 		/* code */
	// 		if(i%2==0){
	// 		 printf("-");	
	// 		}
	// 		else{
	// 			printf("#");
	// 		}
			
	// 	}
	// 	printf("\n");
	// }
	// for (int i = n-1; i>0 ; i--)
	// {
	//   int space = n-i;
	//   for (int b = 1; b <=space; b++)
	// 		{
	// 			/* code */
	// 			printf(" ");
	// 		}

	// 	/* code */
	// 	for (int a = 1; a<=(2 * i -1); a++)
	// 	{
	// 		/* code */
	// 		if(i%2==0){
	// 		 printf("-");	
	// 		}
	// 		else{
	// 			printf("#");
	// 		}
			
	// 	}
	// 	printf("\n");
	// }
}