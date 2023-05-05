#include<stdio.h>
#include<stdlib.h>
struct node {
		int data;
	struct node *next;
};
typedef struct node NODE;
NODE *head=NULL;
void insert_at_head(NODE *nn) {
	if(head==NULL) {
		head=nn;
	}
	else{
		nn->next=head;
		head=nn;
	}
}
void insert_at_end(NODE *nn) {
	if(head==NULL) {
		head=nn;
	}
	else {
		NODE *temp=head;
		while(temp->next->next!=NULL) {
			temp=temp->next;
		}
		temp->next=nn;
	}
}
void delete_at_head(){
	if(head==NULL){
		printf("NO nodes");
		return;
	}
	printf("Deleted element is %d:\n",head->data);
	NODE *dn=head;
	free(dn);
	head=head->next;
}
void delete_at_end(){
		int temp;
		if(head==NULL)
		printf("No Nodes");
		else if(head->next==NULL){
			printf("%d value is deleted",head->data);
			head=NULL;
		}
		else{
			NODE *temp=head;
			while(temp->next->next!=NULL){
			temp=temp->next;
		}
			printf("%d value is deleted",temp->next->data);
			NODE *dn=head;
			temp->next=NULL;
			free(dn);
		}
}
void display() {
	if(head==NULL) {
		printf("No Nodes\n");
		return;
	}
	NODE *temp=head;
	while(temp!=NULL) {
		printf("%d ",temp->data);
		temp=temp->next;
	} printf("\n");
}
void insert_at_pos(NODE *nn,int pos){
	if(pos==1) {
		insert_at_head(nn);
	}
	else{
		NODE *temp=head;
		int c=1;
		while(c<pos-1) {
			c++;
			temp=temp->next;
		}
		printf("printing current position %d\n",c);
		nn->next=temp->next;
		temp->next=nn;
	}
}

int main() {
	while(1) {
		int choice;
		printf("Enter\n1.Insert at head\n2. Insert at end\n3.Delete at head\n4.Delete at end\n5.Insert at pos\n6. Delete at pos\n7. Display\nand any other to display");
	scanf("%d",&choice);
	if(choice==1) {
		//insert at head
		int val;
		printf("Enter the value to be inserted:");
		scanf("%d",&val);
		NODE *nn=(NODE *)malloc(sizeof(NODE));
		nn->data=val;
		nn->next=NULL;
		insert_at_head(nn);	
	}
	else if(choice==2) {
		// insert at end
		int val;
		printf("Enter the value to be inserted");
		scanf("%d",&val);
		NODE *nn=(NODE*)malloc(sizeof(NODE));
		nn->data=val;
		nn->next=NULL;
		insert_at_end(nn);
	}
	else if(choice==3) {
		// delete at head
	delete_at_head();
	}
	else if(choice==4) {
		// delte at end
	delete_at_end();
	}
	else if(choice==5) {
		//insert at pos()
		NODE *nn=(NODE *)malloc(sizeof(NODE));
		int val;
		printf("Enter the a value to be inserted:");
		scanf("%d",&val);
		nn->data=val;
		nn->next=NULL;
		int pos;
		printf("Enter the position the node:");
		scanf("%d",&pos);
		insert_at_pos(nn,pos);
	}
	else if(choice==6) {
		//delete at pos()
	}
	else if(choice==7) {
		display();
	}
	else {
		printf("pora......");
		break;
	}
	}
}
