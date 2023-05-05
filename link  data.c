#include<stdio.h>
struct node {
	int data;
	struct node *link;
};
typedef struct node NODE;
int main() {
	//create a node
	NODE *node1=(NODE *)malloc(sizeof(NODE));
	NODE *node2=(NODE *)malloc(sizeof(NODE));
	NODE *node3=(NODE *)malloc(sizeof(NODE));
	node1->data=10;
	node2->data=20;
	node3->data=30;
	printf("%d %d %d",node1->data,node2->data,node3->data);
	//linking nodes together
	node1->next=node2;
	node2->next=node3;
	node1->next=NULL;
	printf("%d\n",node1->data);
	printf("%d\n",node1->next->data);
	printf("%d\n",node1->next->next->data);
}
