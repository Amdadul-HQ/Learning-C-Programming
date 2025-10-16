#include <stdio.h>

int main (){
	int n;
	scanf("%d",&n);
	int ar[n];
	for(int i = 0 ; i<n;i++){
		scanf("%d",&ar[i]);
	}
	int a;
	scanf("%d",&a);
	for(int i = 0 ; i<n ;i++){
		if(a == ar[i]){
			printf("%d",i);
			break;
		}
		else if(i == n-1){
			printf("-1");
			break;
		}
	}
}