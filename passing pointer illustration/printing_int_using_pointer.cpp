// Topic :  pointers
//Problem : demonstration of passing pointers to functions

// printing the value of an int using ptr passing to a function

#include <bits/stdc++.h>
using namespace std;

void printing(int *ptr){
	cout << *ptr;
}

int main(){

	int n,k;
	int *p;
	p=&n;

	cin >> n;

	//passing the pointer directly without using any '&'
	printing(p);
}