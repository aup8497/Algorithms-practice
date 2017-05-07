#include <stdio.h>
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>

#define pb push_back
#define mp make_pair
#define ll long long
#define MOD 1000000007
const int MAX=1e5+5;
using namespace std;

ll n,m,i,j,k;

int main(){

 int myints[] = {3,7,2,5,6,4,9};

  std::cout << "The smallest element is " << *std::min_element(myints+3,myints+4) << '\n';
  std::cout << "The largest element is "  << *std::max_element(myints+3,myints+4) << '\n';
  //this gives only 5 as both max and min as 5 is the only element getting compared

return 0;	
}

//min_element(myints,myints+2) gives 3
//min_element(myints,myints+3) gives 2

//min_element(myints+2,myints+4) gives 2
//min_element(myints+3,myints+4) gives 5

//the lower bound is exclusive and the upper bound is inclusive