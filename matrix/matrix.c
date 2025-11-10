#include <stdio.h>
#include <stdlib.h>  
int main(){
	int n;
	scanf("%d",&n);
	int a[n][n];
	for (int i = 0; i < n; i++)
	{
		/* code */
		for (int j = 0; j <n; j++)
		{
			/* code */
			scanf("%d",&a[i][j]);
		}
	}

	int primary[n];
	int secondry[n];

	for (int i = 0; i < n; i++)
	{
		/* code */
		for (int j = 0; j <n; j++)
		{
			/* code */
			if(i==j){
				primary[i] = a[i][j];
			}
			else if(i+j ==n-1){
				secondry[i] = a[i][j];
			}
		}
	}
	int sum = 0;
	for (int i = 0; i <n; i++)
	{
		/* code */
		sum = primary[i] + sum;
	}
	int sum1 = 0;
	for (int i = 0; i <n; i++)
	{
		/* code */
		sum1 = secondry[i] + sum1;
	}
	int result = abs(sum) + abs(sum1);
	printf("%d",result);
}