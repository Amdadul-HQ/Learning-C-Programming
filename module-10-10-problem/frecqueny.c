#include <stdio.h>
int main (){
	int n;
	scanf("%d",&n);
	int ar[n];
	int a;
	scanf("%d",&a);
	int ab[a+1] = {0};

	for(int i =0;i<n;i++){
		scanf("%d",&ar[i]);
	}

	for(int i =0; i<n;i++){
		ab[ar[i]]++;
	}

	for (int i = 1; i <=a; i++)
	{
		/* code */
		printf("%d\n",ab[i]);
	}

}