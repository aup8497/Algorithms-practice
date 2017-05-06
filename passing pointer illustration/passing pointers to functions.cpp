// Topic :  pointers and linked list
//Problem : demonstration of passing pointers to functions



//this is giving segmentation fault because memory is not allocated to the structure and we are traying to access its elemets => segmentation fault

// #include <bits/stdc++.h>
// using namespace std;

// struct node{
// 	int value;
// 	struct node *next;
// };

// void printing(struct node *ptr){
// 	cout << ptr->value << endl;
// }

// int main(){

// 	int n,k;
// 	struct node *head;

// 	//entering the value of n =5 
// 	head->value=5;

// 	//trying to print the valueof n using pointer
// 	printing(head);
// }