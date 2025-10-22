#include <stdio.h>
#include <string.h> 
int main(){

	// Reverse arrr
	// int n;
	// scanf("%d",&n);
	// int ar[n];
	// for (int i = 0; i < n; i++)
	// {
	// 	/* code */
	// 	scanf("%d",&ar[i]);
	// }
	// int j = n-1;

	// for (int i = 0; i < j; i++)
	// {
	// 	/* code */
	// 	int tmp = ar[i];
	// 	ar[i] = ar[j];
	// 	ar[j] = tmp;
	// 	j--;
	// }
	// for (int i = 0; i < n; i++)
	// {
	// 	/* code */
	// 	printf("%d ",ar[i]);
	// }

	// Way too long
	// int n;
	// scanf("%d",&n);
	// char s[101];
    // while (scanf("%s",s) != EOF) {
        
    //     int count=0;
    //     for (int i = 0; s[i] !='\0'; i++)
    //     {
    //     	/* code */
    //     	count++;
    //     }

    //     if(count<=n){
    //     	printf("%s\n",s);
    //     }
    //     else{
    //     	int a = count -2;
    //     	char first = s[0];
    //     	char last = s[count-1];
    //     	printf("%c%d%c\n",first,a,last);
    //     }
    // }

    // conversion
   // char s[100001];
   //  scanf("%s", s);

   //  // Loop through the string
   //  for (int i = 0; s[i] != '\0'; i++) {

   //      if (s[i] == ',') {
   //          s[i] = ' ';  // Replace comma with space
   //      } 
   //      else if (s[i] >= 'a' && s[i] <= 'z') {
   //          s[i] = s[i] - 32;  // Convert lowercase → uppercase
   //      } 
   //      else if (s[i] >= 'A' && s[i] <= 'Z') {
   //          s[i] = s[i] + 32;  // Convert uppercase → lowercase
   //      }
   //  }

   //  printf("%s\n", s);

	// char s[1000];
	// scanf("%s",s);
	// int count =0;
	// for (int i = 0; s[i] !='\0'; i++)
	// {
	// 	/* code */
	// 	count++;
	// }
	// // printf("%d\n",count);
	// int tmp =0;
	// int a =0;
	// int b = count -1;
	// for (int i = 0; i<b; i++)
	// {
	// 	/* code */
	// 	if(s[a] == s[b]){
	// 		tmp =1;
	// 	}
	// 	else{
	// 		tmp=0;
	// 		break;
	// 	}
	// 	a++;
	// 	b--;
	// }
	// if(tmp == 0){
	// 	printf("NO");
	// }
	// else{
	// 	printf("YES");
	// }

	char a[11];
	char b[11];

	scanf("%s",a);
	scanf("%s",b);

	int sizeOfa = strlen(a);
	int sizeOfb = strlen(b);

	printf("%d %d\n",sizeOfa,sizeOfb);

	printf("%s%s\n",a,b);	

	char c = a[0];
	a[0] = b[0];
	b[0] = c;

	printf("%s %s",a,b);

    return 0;
}