#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int ar[n];
	for (int i = 0; i <n; i++)
	{
		/* code */
		scanf("%d",&ar[i]);
	}

	int minIndex = 0;
	int maxIndex = 0;
	
	for(int i = 1; i < n; i++) {
        if(ar[i] < ar[minIndex]) {
            minIndex = i;
        }
        if(ar[i] > ar[maxIndex]) {
            maxIndex = i;
        }
    }
    int temp = ar[minIndex];
    ar[minIndex] = ar[maxIndex];
    ar[maxIndex] = temp;

    for(int i = 0; i<n ; i++){
    	printf("%d ",ar[i]);
    }
}