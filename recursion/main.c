#include <stdio.h>

void printNumbers(int n,int a) {

    if (a > n) {
        return;
    } 
    printNumbers(n,a+1);
    printf("%d ", a);
      
    
}

int main() {
    int n;
    scanf("%d", &n);
    printNumbers(n,1);
    return 0;
}