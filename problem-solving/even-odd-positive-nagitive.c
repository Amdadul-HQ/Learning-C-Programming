// Given N numbers. Count how many of these values are even, odd, positive and negative.

// Input
// First line contains one number N (1 ≤ N ≤ 103) number of values.

// Second line contains N numbers (-105 ≤ Xi ≤ 105).

// Output
// Print four lines with the following format:

// First Line: "Even: X", where X is the number of even numbers in the given input.

// Second Line: "Odd: X", where X is the number of odd numbers in the given input.

// Third Line: "Positive: X", where X is the number of positive numbers in the given input.

// Fourth Line: "Negative: X", where X is the number of negative numbers in the given input.

// Example
// InputCopy
// 5
// -5 0 -3 -4 12
// OutputCopy
// Even: 3
// Odd: 2
// Positive: 1
// Negative: 3
// Note
// First Example :

// Even Numbers are : 0, -4 , 12

// Odd Numbers are : -5 , -3

// Positive Numbers are : 12

// Negative Numbers are : -5 , -3 , -4

#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int positive = 0;
	int nagetive = 0;
	int even = 0;
	int odd =0;
	for (int i = 1; i <=n; i++)
	{
		/* code */
		int x;
		scanf("%d",&x);
		if(x % 2  == 0){
			even++;
		}
		else {
			odd++;
		}
		if(x < 0){
			nagetive++;
		}
		else if(x>0){
			positive++;
		}
	}
	printf("Even: %d\n",even);
	printf("Odd: %d\n",odd);
	printf("Positive: %d\n",positive);
	printf("Negative: %d\n",nagetive);
}

