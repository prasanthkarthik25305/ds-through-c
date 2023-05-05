#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node *prev;
	struct node *next;
};
void insert_at_end(NODE *nn){
		if (head == NULL && tail == NULL) {
		head = nn;
		tail = nn;
	}
	else {
		tail -> next = nn;
		nn -> prev = tail;
		tail = nn;
	}
}
void delete_at_head(){
	if (head == NULL && tail == NULL) {
		printf("No Nodes To Delete\n");
	}
	else{
		printf("%d Is Deleted\n",head->data);
		head->next->prev= NULL;
		head = head -> next;
	}
}
typedef struct node NODE;
NODE *head = NULL;
NODE *tail = NULL;
int main() {
		printf("enter the maximum size of queue:");
	scanf("%d",&max_size);
	int choice;
	while(1){
		printf("ente\n1.Enque\n2.Deque\n3.Display\nany othe to exit");
		scanf("%d",&choice);
		if(choice==1){
			// enque()
		//	int val;
		//	printf("Enter value");
		//	scanf("%d",&val);
			NODE *nn = (NODE *)malloc(sizeof(NODE));
			int val;
			printf("Enter value to be inserted: ");
			scanf("%d", &val);
			nn -> data = val;
			nn -> next = NULL;
			nn -> prev = NULL;
			insert_at_end(nn);
			insert_at_end();//function call
		}
		else if(choice==2){
			// deque()
			int res=deque();
			if(res==-1){
				printf("Queue is empty\n");
			}
			else{
				printf("%d is deleted\n",res);
			}
		}
}
