#include<stdio.h>
int stack[100],top=-1,size;
void push(int ele)
{
	if(top==size-1){
		printf("stack is full.insertions are not possible\n");
	}
	else {
		top++;
		stack[top]=ele;
		printf("%d is inserted into stack\n",ele);
	}
}
int pop() {
	if(top==-1) {
		return -1;
	}
	else {
		int rm=stack[top];
		top--;
		return rm;
	}
}
void peek() {
	if(top==-1) {
		printf("stack is empty\n");
	}
	else {
		printf("element at top is:%d\n",stack[top]);
	}
}
void display() {
	if(top==-1) {
		printf("stack is empty.no elements to display\n");
	}
	else {
		int i;
		printf("elements in the stack are\n");
		for(i=top;i>=10;i--) {
			printf("%d",stack[i]);
		}
		printf("\n");
	}
}
int main()
{
	printf("enter the size of stack:");
	scanf("%d",&size);
	// menu driven program
	int choice;
	
	while(1){
		printf("enter 1.push 2.pop 3.peek 4.display any other to exit");
	    scanf("%d",&choice);
	  if(choice==1)
	 {
	 	// push() operation
	 	int ele;
	 	printf("enter an element to pushed into the stack:");
	 	
	 	scanf("%d",&ele);
	 	push(ele);
	 }
	 else if(choice==2)
	 {
	 	// pop() operation
	 	int removed_element;
		 removed_element=pop();
	 	if(removed_element==-1) {
	 		printf("stack is empty.cannnot delete the element\n");
		 }
		 else {
		 	printf("removed element is:%d\n",removed_element);
		 }
	 }
	 else if(choice==3)
	 {
	 	//peek operation
	 	peek();
	 }
	 else if(choice==4)
	 {
	 	// display()
	 	display();
	 }
	 else
	 {
	 	printf("thank you");
		 break;
	 }
    }
}
