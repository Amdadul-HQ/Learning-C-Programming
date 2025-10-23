#include <string.h>
#include <stdio.h>

int main(){


 // Vowels are a,e,i,o and u. The rest are called consonants.
	  int T;
    scanf("%d", &T);

    while (T--) {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);

        int totalDays = (m1 * d) / (m1 + m2);

        int fewerDays = d - totalDays;

        printf("%d", fewerDays);
    }

    return 0;


	// int n;
	// scanf("%d",&n);
	// int ar[n];
	// for (int i = 0; i < n; i++)
	// {
	// 	/* code */
	// 	scanf("%d",&ar[i]);
	// }

	// int even =0;
	// int three =0;

	// for (int i = 0; i <n; i++)
	// {
	// 	/* code */
	// 	if(ar[i]%2 ==0 && ar[i] %3 ==0){
	// 		even++;
	// 	}
	// 	else if(ar[i] %2 ==0 ){
	// 		even++;
	// 	}
	// 	else if(ar[i] %3==0){
	// 		three++;
	// 	}
	// }
	// printf("%d %d",even,three);
}