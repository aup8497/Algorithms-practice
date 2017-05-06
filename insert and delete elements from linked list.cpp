// doing this as a part of practice from karamunchi book pg no <>
// Topic : Linked list
//Problem : insertion at kth position of linked list

#include <bits/stdc++.h>
using namespace std;

struct node{
	int value;
	struct node* next;
};
struct node *head;
void insert(int vl,int pos){
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

void deletePos(int pos){
	int i;
	if(head==NULL){
		cout << "empty";
	}
	else{
		if(pos==1){
			struct node *temp;
			temp=head;
			head=head->next;
			free(temp);
		}
		struct node *ptr1,*ptr2;
		ptr1=head;
		for(i=0;i<pos-2;i++){
			ptr1=ptr1->next;
		}
		if(ptr1==NULL || ptr1->next==NULL){
			cout << "not possible";
			return ;
		}
		ptr2=ptr1->next;
		ptr1->next=ptr2->next;
		free(ptr2);
	}
}	

void print(){
struct node *temp;
	temp=head;
	while(temp!=NULL){
		printf(" %d -> ", temp->value );
		temp=temp->next;
	}
}

int main(){

	int n,k,v,i;
	char chr;
	// typedef Node struct node;
	struct node *temp;
	head=NULL;

	while(1){
		int choice,pos;
		cout << "1-insert  2-delete 3-print 4-exit " << endl;
		cin >> choice;
		switch(choice){
			case 1: cout << "enter the value and position to be inserted\n";
					cin >> v >> k;
					insert(v,k);
					break;
			case 2: cout << "enter the position to be deleted\n";
					cin >> pos;
					deletePos(pos);
					break;
			case 3:print();break;
			case 4:exit(0);
		}
	}
	// cout << head->value << endl;

}

