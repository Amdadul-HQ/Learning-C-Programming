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

	 // char a[100001];

	 // scanf("%s",a);

	 // int length = strlen(a);

	 // int consonants = 0;

	 // for (int i = 0; i <length ; i++)
	 // {
	 // 	/* code */
	 // 	if (a[i] != 'a' && a[i] != 'e' && a[i] != 'i' && a[i] != 'o' && a[i] != 'u') {
     //        consonants++;
     //    }
	 // }

	 // printf("%d",consonants);


// 	Problem Statement
// Suppose there are M1 farmers who can complete a work in D days. Fortunately, some other farmers appeard in the village before the start of the work, and now there are M2 additional farmers. Can you determine how many fewer days it will take for them to complete the task?
// Note: If the answer is a floating value, take the integer part of the answer.
// Input Format
// First line will contain T, the number of test cases.
// For each test case, input will contain three positive integers M1, M2 and D.
// Constraints
// 1 <= T <= 1000
// 1 <= M1 <= 1000
// 0 <= M2 <= 1000
// 1 <= D <= 100
// Output Format
// Output how many fewer days it will take them to complete the work. Don't forget to put a new line after each test case.

	// m1 = 10;
	// d =10;
	// m2 = 5;

	// int T ;
	// scanf("%d",&T);
	// while(T--){
	// 	int a,b,c;
	// 	scanf("%d %d %d",&a,&b,&c);

	// 	int totalDays = (a * c )/ (a + b);

	// 	int daySave = c - totalDays;

	// 	printf("%d",daySave);

	// }

	// int T;
	// scanf("%d",&T);

	// while(T--){
	// 	char a[10001];
	// 	int ca = 0;
	// 	int sa = 0;
	// 	int di = 0;
	// 	scanf("%s",a);
	// 	int length = strlen(a);

	// 	for (int i = 0; i < length; i++)
	// 	{
	// 		if(a[i] >= 'a' && a[i] <= 'z'){
	// 			sa++;
	// 		}
	// 		else if(a[i] >= 'A' && a[i] <= 'Z'){
	// 			ca++;
	// 		}
	// 		else if(a[i] >= '0' && a[i] <= '9'){
	// 			di++;
	// 		}
	// 	}

	// 	printf("%d %d %d\n",ca,sa,di);
	// }
		
	char s[1001];
	scanf("%s",s);

	int freq[26] ={0};

	for (int i = 0; s[i] != '\0'; i++)
	{
		/* code */
		freq[s[i] - 'a']++;
	}

	for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            printf("%c - %d\n", i + 'a', freq[i]);
        }
    }
    
}