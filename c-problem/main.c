#include <stdio.h>

int findMax(int a[],int n){

	if(n == 1){
		return a[0];
	}
	int max_rest = findMax(a, n - 1);

	if (a[n - 1] > max_rest)
        return a[n - 1];
    else
        return max_rest;
}


int main(){

	int n;
	scanf("%d",&n);
	int a[n];
	for (int i = 0; i < n; i++)
	{
		/* code */
		scanf("%d",&a[i]);
	}

	int max = findMax(a,n);
	printf("%d",max);

	// int n;
	// scanf("%d",&n);
	// int a[n];
	// for (int i = 0; i < n; i++)
	// {
	// 	/* code */
	// 	scanf("%d",&a[i]);
	// }
	// int max = a[0];
	// for (int i = 0; i <n; i++)
	// {
	// 	/* code */
	// 	if(max<a[i]){
	// 		max = a[i];
	// 	}
	// }
	// printf("%d",max);
}