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


long long int sumFun(long long int a[], int n) {
    if (n == 1)
        return a[0];

    long long int num = sumFun(a, n - 1);
    return num + a[n - 1];
}

int main() {
    int n;
    scanf("%d", &n);
    long long int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }

    long long int sum = sumFun(a, n);
    printf("%lld\n", sum);

    return 0;

	// Recursive max solve
	// int n;
	// scanf("%d",&n);
	// int a[n];
	// for (int i = 0; i < n; i++)
	// {
	// 	/* code */
	// 	scanf("%d",&a[i]);
	// }

	// int max = findMax(a,n);
	// printf("%d",max);

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