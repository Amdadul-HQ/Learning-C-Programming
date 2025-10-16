#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        long long num;
        scanf("%lld", &num);
        sum += num;
    }
    
    printf("%lld\n", llabs(sum));
    
    return 0;
}