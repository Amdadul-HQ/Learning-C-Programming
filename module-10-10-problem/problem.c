#include <string.h>
#include <stdio.h>

int main(){
	// int n;
	// scanf("%d",&n);
	// int ar[n];
	// for (int i = 0; i < n; i++)
	// {
	// 	/* code */
	// 	scanf("%d",&ar[i]);
	// }

	// int two = 0;
	// int three = 0;
	// for (int i = 0; i < n; i++)
	// {
	// 	/* code */
	// 	if(ar[i]%2==0 && ar[i]%3==0){
	// 		two++;
	// 	}
	// 	else if(ar[i]%2==0){
	// 		two++;
	// 	}
	// 	else if(ar[i]%3==0){
	// 		three++;
	// 	}
	// }

	// printf("%d %d",two,three);
	 // a,e,i,o and u.

	 char a[100001];

	 scanf("%s",a);

	 int length = strlen(a);

	 int consonants = 0;

	 for (int i = 0; i <length ; i++)
	 {
	 	/* code */
	 	if (a[i] != 'a' && a[i] != 'e' && a[i] != 'i' && a[i] != 'o' && a[i] != 'u') {
            consonants++;
        }
	 }


	 printf("%d",consonants);
}