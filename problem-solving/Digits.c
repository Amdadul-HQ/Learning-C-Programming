#include <stdio.h>
int main(){
  int a;
  int t;
  scanf("%d",&t);
  for (int i = 1; i <= t; i++)
  {
  	int n;
  	scanf("%d",&n);
  	if(n !=0){
  		do {
  		printf("%d ",n%10);
  		n /= 10;

  	} while(n !=0);
     printf("\n");
  	}
  	}

}