#include <stdio.h>

void printArray (int a) {
	for (int i = 1; i <=a; i++)
	{
		/* code */
		printf("%d ",i);
	}
}

int main () {
	int a;
	scanf("%d",&a);
	printArray(a);
}