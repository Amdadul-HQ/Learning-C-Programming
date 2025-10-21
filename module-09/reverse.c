#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int ar[n];
	for (int i = 0; i <n; i++)
	{
		/* code */
		scanf("%d",&ar[i]);
	}

	int a = 0;
	int j = n-1;

	for (int i = 0; a<j; i++)
	{
		/* code */
		int tmp = ar[i];
		 ar[a] = ar[j];
		 ar[j] = tmp;

		a++;
		j--;
	}
	for (int i = 0; i < n; i++)
	{
		/* code */
		printf("%d ",ar[i]);
	}
}