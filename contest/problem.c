#include <stdio.h>
#include <string.h>

int main() {
    // char s1[2001];  
    // char s2[1001];  
    // int start, end;
    

    // scanf("%s", s1);
    // scanf("%s", s2);
    // scanf("%d %d", &start, &end);
    
    // int len1 = strlen(s1);
    
    // int j = len1;
    // for (int i = start; i <= end; i++) {
    //     s1[j] = s2[i];
    //     j++;
    // }
    
    // s1[j] = '\0';
    
    // printf("%s\n", s1);
    
    // return 0;

    // int length;
    // scanf("%d",&length);
    // int ar1[length];
    // for (int i = 0; i < length; i++)
    // {
    // 	/* code */
    // 	scanf("%d",&ar1[i]);
    // }
    // int ar2[length];
    // for (int i = 0;i<length; i++)
    // {
    // 	/* code */
    // 	scanf("%d",&ar2[i]);

    // }

    // for (int i = 0; i <length; i++)
    // {
    // 	/* code */
    // 	int sum = ar1[i] + ar2[(length-1) -i];
    // 	printf("%d ", sum);
    // }

    // int length;
    // scanf("%d",&length);
    // int ar[length];
    // for (int i = 0; i < length; i++)
    // {
    // 	/* code */
    // 	scanf("%d",&ar[i]);
    // }
    // int count =0;
    // int length2 = length-1;

    // for (int i = 0; i < length; i++) {
    //     for (int j = i + 1; j < length; j++) {
    //         if ((ar[i] % 2 == 0 && ar[j] % 2 != 0) || 
    //             (ar[i] % 2 != 0 && ar[j] % 2 == 0)) {
    //             count++;
    //         }
    //     }
    // }
    // printf("%d",count);
     int n;
    scanf("%d", &n);
    
    char number[1000001];
    scanf("%s", number);
    
    int sum = 0;
    
    for (int i = 0; i < n; i++) {
        sum += (number[i] - '0');  
    }
    if (sum % 3 == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

}
