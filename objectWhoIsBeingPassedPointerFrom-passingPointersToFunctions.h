#include <iostream>

using namespace std;

class abc{
	
	public:
		abc(){
			cout << "object created and constructor called!" << endl;
		}

		void changeValueUsingPointer(int* pnArg){
		  *pnArg = 10;
		}

		void changeValueOfArrUsingPointer(int* arr){
		  arr[3]=100;
		}


};