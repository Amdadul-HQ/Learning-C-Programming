#include <stdio.h>
#include <stdlib.h>
// void printNumbers(int n,int a) {

//     if (a > n) {
//         return;
//     } 
//     printNumbers(n,a+1);
//     printf("%d", a);
//     if(a != 1)
//     	printf(" ");
      
    
// }

// int main() {
//     int n;
//     scanf("%d", &n);
//     printNumbers(n,1);
//     return 0;
// }

int main() {
    int matrix[5][5];
    int x, y;

    // Input 5x5 matrix
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] == 1) {
                x = i + 1; // converting to 1-based index
                y = j + 1;
            }
        }
    }

    int moves = abs(3 - x) + abs(3 - y);
    printf("%d\n", moves);

    return 0;
}

