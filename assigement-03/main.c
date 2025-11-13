#include <stdio.h>

// int main() {
//     int t;
//     scanf("%d", &t);

//     while (t--) {
//         long long m;
//         long long a, b, c;
//         scanf("%lld %lld %lld %lld", &m, &a, &b, &c);

//         if (m == 0) {
//             printf("0\n");
//             continue;
//         }

//         long long product = a * b * c;

//         if (product == 0) {
//             printf("-1\n");
//             continue;
//         }

//         if (m % product == 0) {
//             long long missing = m / product;
//             printf("%lld\n", missing);
//         } else {
//             printf("-1\n");
//         }
//     }

//     return 0;
// }



// int main() {
    // int n, m;
    // scanf("%d %d", &n, &m);

    // int matrix[n][m];

    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < m; j++) {
    //         scanf("%d", &matrix[i][j]);
    //     }
    // }

    // if (n != m) {
    //     printf("NO\n");
    //     return 0;
    // }

    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < m; j++) {
    //         if (i == j || i + j == n - 1) {
    //             if (matrix[i][j] != 1) {
    //                 printf("NO\n");
    //                 return 0;
    //             }
    //         } else {
    //             if (matrix[i][j] != 0) {
    //                 printf("NO\n");
    //                 return 0;
    //             }
    //         }
    //     }
    // }

    // printf("YES\n");
    // return 0;
// }


// int main() {
//     int n, m;
//     scanf("%d %d", &n, &m);

//     int matrix[n][m];

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             scanf("%d", &matrix[i][j]);
//         }
//     }

//     for (int j = 0; j < m; j++) {
//         printf("%d ", matrix[n - 1][j]);
//     }
//     printf("\n");

//     for (int i = 0; i < n; i++) {
//         printf("%d ", matrix[i][m - 1]);
//     }

//     return 0;
// }




// int main() {
//     int n;
//     scanf("%d", &n);


//     int total = n + 5 - (n / 2);


//     for (int i = 1; i <= total; i++) {

//         for (int j = i; j < total; j++) {
//             printf(" ");
//         }

//         for (int k = 1; k <= (2 * i - 1); k++) {
//             printf("*");
//         }

//         printf("\n");
//     }

//     for (int i = 0; i < 5; i++) {
//         for (int j = 0; j < total - (n / 2) - 1; j++) {
//             printf(" ");
//         }

//         for (int k = 0; k < n; k++) {
//             printf("*");
//         }

//         printf("\n");
//     }

//     return 0;
// }


#include <stdio.h>
#include <stdlib.h> 

int main() {
    int n;
    scanf("%d", &n);

    while (n--) {
        int x;
        scanf("%d", &x);

        int a[x], b[x], c[x];

        for (int i = 0; i < x; i++) {
            scanf("%d", &a[i]);
            b[i] = a[i];
        }

        
        for (int i = 0; i < x - 1; i++) {
            for (int j = i + 1; j < x; j++) {
                if (b[i] > b[j]) {
                    int temp = b[i];
                    b[i] = b[j];
                    b[j] = temp;
                }
            }
        }


        for (int i = 0; i < x; i++) {
            c[i] = abs(a[i] - b[i]);
        }

        for (int i = 0; i < x; i++) {
            printf("%d ", c[i]);
        }
        printf("\n");
    }

    return 0;
}

