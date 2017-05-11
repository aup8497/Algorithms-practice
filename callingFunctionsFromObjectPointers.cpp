#include <bits/stdc++.h>
using namespace std;

class abc{
public:
	void print(){
		printf("hello I'm in the print function of the object called from the object pointer\n");
	}
};

int main(){

	abc* obj;

	obj->print();

return 0;	
}