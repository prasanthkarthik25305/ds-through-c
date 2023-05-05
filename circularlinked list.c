// Operations of circular_linked_list */
#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
typedef struct node NODE;
NODE *head = NULL;
void insert_at_head(NODE *nn) {
    if (head == NULL) {
        head = nn;
        head -> next = head;
    }
    else {
        NODE *temp = head;
        while (temp -> next != head) {
            temp = temp -> next;
        }
        temp -> next = nn;
        nn -> next = head; // connecting head and new node
        head = nn;
    }
}
void insert_at_end(NODE *nn) {
    if (head == NULL) {
        head = nn;
        head -> next = nn;
    }
    else {
        NODE *temp = head;
        while (temp -> next != head) {
            temp = temp -> next;
        }
        temp -> next = nn;
        nn -> next = head;
    }
}
void delete_at_head() {
    if (head == NULL) {
        printf("No Nodes\n");
    }
    else if (head -> next == head) {
        printf("%d is deleted\n", head -> data);
        head = NULL;
    }
    else {
        NODE *temp = head;
        while (temp -> next != head) {
            temp = temp -> next;
        }
        temp -> next = head -> next;
        printf("%d is deleted\n", head -> data);
        head = head -> next;
    }
}
void delete_at_end
 

void display() {
    if (head == NULL) {
        printf("No Nodes\n");
        return;
    }
    NODE *temp = head;
    do {
        printf("%d ", temp -> data);
        temp = temp -> next;
    }while (temp != head); 
    printf("\n");
}

 

int main() {
    int choice;
    while (1) {
        printf("Enter\n1. Insert at head\n2. Insert at end\n3. Delete at head\n4. Delete at end\n5. Diplay\n and any other to exit: ");
        scanf("%d", &choice);
        if (choice == 1) {
            // insert_at_head();
            NODE *nn = (NODE *)malloc(sizeof(NODE));
            int val;
            printf("Enter value to be insered: ");
            scanf("%d", &val);
            nn -> data = val;
            nn -> next = NULL;
            insert_at_head(nn);
        }
        else if (choice == 2) {
            // insert_at_end()
            NODE *nn = (NODE *)malloc(sizeof(NODE));
            int val;
            printf("Enter value to be insered: ");
            scanf("%d", &val);
            nn -> data = val;
            nn -> next = NULL;
            insert_at_end(nn);
        }
        else if (choice == 3) {
            // delete_at_head()
            delete_at_head();
        }
        else if(choice == 4) {
            // delete_at_end()
        }
        else if (choice == 5) {
            // display()
            display();
        }
        else {
            printf("Thank you");
            break;
        }
    }
}


