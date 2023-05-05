// doubly linked list
// operations
#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node *prev;
	struct node *next;
};

typedef struct node NODE;
NODE *head = NULL;
NODE *tail = NULL;
void insert_at_head(NODE *nn) {
	if (head == NULL && tail == NULL) {
		head = nn;
		tail = nn;
	}
	else {
		head -> prev = nn;
		nn -> next = head;
		head = nn;
	}
}
void insert_at_end(NODE *nn) {
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
void delete_at_end(){
	if (head == NULL && tail == NULL) {
		printf("No Nodes To Delete\n");
	}
	else{
		printf("%d Is Deleted\n",tail->data);
		tail->prev->next = NULL;
		tail = tail->prev;
	}
}

void display_from_head() {
	if (head == NULL && tail == NULL) {
		printf("No Nodes\n");
	}
	else {
		NODE *temp = head;
		do {
			printf("%d ", temp -> data);
			temp = temp -> next;
		}while (temp != NULL);
		printf("\n");
	}
}

void display_from_tail() {
	if (head == NULL && tail == NULL) {
		printf("No Nodes\n");
	}
	else {
		NODE *temp = tail;
		while (temp != NULL) {
			printf("%d ", temp -> data);
			temp = temp -> prev;
		}
		printf("\n");
	}
}

int main() {
	int choice;
	while (1) {
		printf("Enter\n1. Insertion at head\n2. Insert at end\n3. Delete at head\n4. Delete at end\n5. Display from head\n6. Display from tail\nand any other to exit: ");
		scanf("%d", &choice);
		if (choice == 1) {
			// insert_at_head()
			NODE *nn = (NODE *)malloc(sizeof(NODE));
			int val;
			printf("Enter value to be inserted: ");
			scanf("%d", &val);
			nn -> data = val;
			nn -> next = NULL;
			nn -> prev = NULL;
			insert_at_head(nn);
		}
		else if (choice == 2) {
			// insert_at_end
				NODE *nn = (NODE *)malloc(sizeof(NODE));
			int val;
			printf("Enter value to be inserted: ");
			scanf("%d", &val);
			nn -> data = val;
			nn -> next = NULL;
			nn -> prev = NULL;
			insert_at_end(nn);
		}
		else if (choice == 3) {
			// delete_at_head
			delete_at_head();
		}
		else if (choice == 4) {
			// delete_at_end
			delete_at_end();
		}
		else if (choice == 5) {
			// display_from_head;
			display_from_head();
		}
		else if (choice == 6) {
			// display_from_tail;
			display_from_tail();
		}
		else {
			printf("Thank you");
			break;
		}
	}
}

