#include <stdio.h>
int main () {
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i = 0; i < n; i++)
	{
		/* code */
		scanf("%d",&a[i]);
	}
	int b;
	scanf("%d",&b);

	for (int i = 0; i <n-1; i++)
	{
		/* code */
		for (int j = i+1; j <n; j++)
		{
			/* code */
			int sum = a[i] + a[j];
			if(sum == b){
			printf("%d %d",a[i],a[j]);
			printf("\n");	
			}
			
		}
		
	}
}