// B. Even Numbers
// time limit per test1 second

// Given a number N. Print all even numbers between 1 and N inclusive in separate lines.

// Input
// Only one line containing a number N (1 ≤ N ≤ 103).

// Output
// Print the answer according to the required above. If there are no even numbers print -1.


#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a = 0;
	for (int i = 1; i <= n; i++)
	{
		/* code */
		if(i % 2 ==0 && i > 0){
			++a;
			printf("%d\n",i );
		}
	}
	if(a==0){
		printf("-1");
	}
}