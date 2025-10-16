#include <stdio.h>

int main (){


 int n;
 scanf("%d",&n);
 int ar[n];
 int a,b;


  for (int i = 0; i<n; i++)
 {
 	scanf("%d",&ar[i]);	
 			
 }
  scanf("%d %d",&a,&b);

  ar[a] = b;

 for (int i = 1; i <= n; i++)
 {
 	    printf("%d ",ar[n-i]);
 }











// 	You will be given a positive integer N and N numbers after that. You need to tell the sum of positive numbers and the sum of negative numbers separated by a space.

// Input Format

// First line will contain N.
// Second line will contain N values named V.

 // int n;
 // scanf("%d",&n);
 // int ar[n];

 // int positive = 0;
 // int negative = 0;

 // for (int i = 0; i <n; i++)
 // {
 // 	scanf("%d",&ar[i]);
 // }

 // for (int i = 0; i <n; i++)
 // {
 // 	if(ar[i] >0){
 // 		positive = positive + ar[i];
 // 	}
 // 	else{
 // 		negative = negative - ar[i];
 // 	}
 // }

 // printf("%d %d",positive,-negative);

// You will be given a positive integer N and an array A of size N. Suppose, the index starts from 0, then you need to print all the values at odd indexes in reverse way.

// For example:

// If the input is

// 6
// 10 20 30 40 50 60
// You need to print 60 40 20 as their indexes are 5 3 1 respectively.


 // int n;
 // scanf("%d",&n);
 // int ar[n];

 // for (int i = 0; i <n; i++)
 // {
 // 	scanf("%d",&ar[i]);
 // }

 // for (int i = n-1; i>0; i--)
 // {
 // 	if(i %2 !=0){
 // 		printf("%d ",ar[i]);
 // 	}
 // }



	// int n;
	// scanf("%d",&n);

	// if(n>0){
	// 	for (int i = 1; i <=n; i++)
	// 	{
	// 		printf("%d ",i);
	// 	}
	// }
	// else{
	// 	for (int i = n; i<=0 ; i++)
	// 	{
	// 		printf("%d ",i);
	// 	}
	// }

	// for(int i =1 ; i <=n ;i++){
	// 	printf("%d. I Want More Assignments\n",i);
	// }
	// int n;
	// scanf("%d",&n);
	// int ar[n];
	// for(int i =0 ; i<n;i++){
	// 	scanf("%d",&ar[i]);
	// }

	// for (int i = 0; i < n; i++)
	// {
	// 	if(ar[i] > 0){
	// 		ar[i]=1;
	// 		printf("%d ",ar[i]);
	// 	}
	// 	else if(ar[i] ==0){
	// 		printf("%d ",ar[i]);
	// 	}
	// 	else{
	// 		ar[i] = 2;
	// 		printf("%d ",ar[i]);
	// 	}
	// }
}