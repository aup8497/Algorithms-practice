// doing this as a part of practice from karamunchi book pg no <>
// Topic : Linked list
//Problem : insertion at kth position of linked list

#include <bits/stdc++.h>
using namespace std;

struct node{
	int value;
	struct node* next;
};

void insert(struct node* head,int vl,int pos){
	int i;
	struct node *ptr,*newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->value=vl;
	newnode->next=NULL;

	if(pos==1){
		newnode->next=head;
		head=newnode;
	}else{
		ptr=head;
		for(i=0;i<pos-2;i++){
			if(ptr==NULL)
				break;
			ptr=ptr->next;
		}

		if(ptr==NULL)
			printf("k is larger than the size of the list\n");
		else{
			newnode->next=ptr->next;
			ptr->next=newnode;
		}

	}

}

int main(){

	int n,k,v,i;
	char chr;
	// typedef Node struct node;
	struct node *head,*temp;
	head=NULL;

	do{
		cout << "enter the value and position to be inserted\n";
		cin >> v >> k;

		insert(head,v,k);

		cout << "do you want to continue ";
		cin >> chr;

	}while(chr!='n');
	
	cout << head->value << endl;

	temp=head;
	while(temp!=NULL){
		printf(" %d -> ", temp->value );
		temp=temp->next;
	}

}