// this program generates all the strings with characters 0...k with length n
// doing this as a part of practice from karamunchi book pg no 40 - Backtracking

// Note: k is a single digit integer or char

#include <bits/stdc++.h>

using namespace std;
	char s[3];
void generate(char s[],int n,int k);
int cnt=0;
int main(){
	int n,k;
	cin >> n >> k;

	generate(s,n,k);

	cout << "total number of strings = " << cnt << endl;	
}

void generate(char s[],int n,int k){

	if(n==0){
		cnt++;
		printf("%s\n",s );
	}
	else{
		for(int i=0;i<k;i++){
			s[n-1]=48+i;
			generate(s,n-1,k);
		}
	}

}	