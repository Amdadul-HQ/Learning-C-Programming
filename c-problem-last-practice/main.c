#include <stdio.h>

int main (){
	// memo momo 
	// long long int a,b,k;
	// scanf("%lld %lld %lld",&a,&b,&k);
	// if(a % k == 0 && b % k == 0){
	// 	printf("Both");
	// }
	// else if(a % k == 0){
	// 	printf("Memo");
	// }
	// else if(b % k == 0){
	// 	printf("Momo");
	// }
	// else {
	// 	printf("No One");
	// }

	int n,k;
	scanf("%d %d",&n,&k);
	long long int a[n];
	long long int sum = 0; 

	for (int i = 0; i <n;i++)
	{
		/* code */
		scanf("%lld",&a[i]);
	}

	for (int i = 0; i <n-1; i++)
	{
		/* code */
		for (int j = 1; j <n; j++)
		{
			/* code */
			if(a[i]<a[j]){
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
    for (int i = 0; i < k; i++) {
        if (a[i] > 0)
            sum += a[i];
    }

    printf("%lld\n", sum);
	
}