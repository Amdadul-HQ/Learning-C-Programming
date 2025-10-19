#include <stdio.h>

int main (){
	int n;
	scanf("%d",&n);
	int ar[n];
	for (int i = 0; i <n; i++)
		{	
			scanf("%d",&ar[i]);
		}	

   int idx;
   scanf("%d",&idx);
   for (int i = idx; i <n-1; i++)
   {
   	/* code */
   	ar[i] = ar[i+1];
   	 
   }
   n--;
   for (int i = 0; i <n; i++)
   {
   	/* code */
   	printf("%d ",ar[i]);
   }
}