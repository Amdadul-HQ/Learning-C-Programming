#include <stdio.h>
int main (){
	int max = 0;
	int n;
	scanf("%d",&n);
	for (int i = 1; i<= n;i++){
		int a;
		scanf("%d",&a);
		if(a>max){
			max = a;
		}
	}

	printf("%d",max);
}