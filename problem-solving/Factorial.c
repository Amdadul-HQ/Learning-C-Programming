#include <stdio.h>

int main (){

	// Next Alpabate

	// char a;
	// scanf("%c",&a);
	// if(a == 'z'){
	// 	printf("a");
	// }
	// else{
	// char d = a + 1;
	// printf("%c",d);	
	// }
	

	//Operation between 3 number = last number
	// int a,b,c,d;
	// scanf("%d %d %d %d",&a,&b,&c,&d);

	// if(a + b - c == d){
	// 	printf("YES");
	// }
	// else if(a - b + c == d){
	// 	printf("YES");
	// }
	// else if(a * b + c == d){
	// 	printf("YES");
	// }
	// else if(a - b * c == d){
	// 	printf("YES");
	// }
	// else if(a + b - c == d){
	// 	printf("YES");
	// }
	// else if(a + b * c == d){
	// 	printf("YES");
	// }
	// else if(a * b - c == d){
	// 	printf("YES");
	// }
	// else {
	// 	printf("NO");
	// }


	// Divisors
	// int n;
	// scanf("%d",&n);

	// for (int i = 1; i <=n; i++)
	// {
	// 	/* code */
	// 	if(n % i == 0){
	// 		printf("%d\n",i);
	// 	}
	// }

	// Lucky Number
	// int n;
	// scanf("%d",&n);
	// int b = n%10;
	// int c = n/10;

	// if(b%c==0 || c%b==0){
	// 	printf("YES");
	// }
	// else{
	// 	printf("NO");
	// }


	// patter output
	// int n;
    // scanf("%d",&n);
    // for(int i=1; i<=n; i++){
    //     for(int a =1; a <=i;a++){
    //         printf("%d ",a);
    //     }
    //     printf("\n");
    // }


    //Reverse Patter
    //  int n;
    // scanf("%d",&n);
    // for (int i = n; i >0; i--)
    // {
    // 	/* code */
    // 	for (int a = i; a>0; a--)
    // 	{
    // 		/* code */
    // 		printf("%d ",a);
    // 	}
    // 	printf("\n");
    // }
    

    // Alpabate Pattern
    int n;
    scanf("%d",&n);
    int a = 64;
    for(int i = 1; i<=n;i++){
    	for (int c = i; c <=n; c++)
    	{
    		/* code */
    	 printf("%c",i+a);
    	}
    	a++;
       
    }
}