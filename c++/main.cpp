#include <bits/stdc++.h>
using namespace std;

int *p;

void fun (){
	
	int *x = new int;
	*x = 10;
	p = x;
	cout << "Fun =>" << *p << endl;
	return;
}

int main(){

	int *a = new int[5];
	for (int i = 0; i < 5; i++)
	{
		/* code */
		cin >> a[i];
	}
	for (int i = 0; i < 5; i++)
	{
		/* code */
		cout << a[i] << " ";
	}
	// fun();
	// cout << "Main =>" << *p << endl;
	// return 0;
}