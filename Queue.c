//implementing queque data structure using arrays
#include<stdio.h>
int queue[100],front=-1,rear=-1,max_size;
void enque(int val){
	if (rear==max_size-1){
		printf("Queue is full\n");
	}
	else if(rear==front==-1){
		rear++;
		front++;
		queue[rear]=val;
	}
	else {
		queue[++rear]=val;
	}
}
int deque(){
	if(rear==-1&&front==-1){
	//printf("Queue is empty");
	  return -1;
	}
	else if(rear==front){
		int de=queue[rear];
		rear=-1;
		front=-1;
		return de;
	}
	else {
		int de=queue[front++];
		return de;
	}
  }
void display() {
	int i;
	if(front==-1&&rear==-1){
		printf("Queue is empty");
	}
	for(i=0;i<=rear;i++){
		printf("%d",queue[i]);
	}
	printf("\n");
}
int main() {
	printf("enter the maximum size of queue:");
	scanf("%d",&max_size);
	int choice;
	while(1){
		printf("ente\n1.Enque\n2.Deque\n3.Display\nany othe to exit");
		scanf("%d",&choice);
		if(choice==1){
			// enque()
			int val;
			printf("Enter value");
			scanf("%d",&val);
			enque(val);//function call
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
		else if(choice==3){
			// display()
			display();
		}
		else{
			printf("Thank you");
		}
	}
}
