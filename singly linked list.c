#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
};

typedef struct node NODE;
NODE* head = NULL;

void insert_at_head(NODE* nn) {
    if (head == NULL) {
        head = nn;
    }
    else {
        nn->next = head;
        head = nn;
    }
}

void insert_at_end(NODE* nn) {
    if (head == NULL) {
        head = nn;
    }
    else {
        NODE* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = nn;
    }
}

void delete_at_head() {
    if (head == NULL) {
        printf("No nodes to delete.\n");
        return;
    }

    printf("Deleted element is %d.\n", head->data);
    NODE* dn = head;
    head = head->next;
    free(dn);
}

void delete_at_end() {
    if (head == NULL) {
        printf("No nodes to delete.\n");
        return;
    }
    else if (head->next == NULL) {
        printf("Deleted element is %d.\n", head->data);
        free(head);
        head = NULL;
    }
    else {
        NODE* temp = head;
        NODE* prev = NULL;
        while (temp->next != NULL) {
            prev = temp;
            temp = temp->next;
        }
        printf("Deleted element is %d.\n", temp->data);
        free(temp);
        prev->next = NULL;
    }
}

void display() {
    if (head == NULL) {
        printf("No nodes to display.\n");
        return;
    }

    NODE* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void insert_at_pos(NODE* nn, int pos) {
    if (pos == 1) {
        insert_at_head(nn);
    }
    else {
        NODE* temp = head;
        int c = 1;
        while (temp != NULL && c < pos - 1) {
            temp = temp->next;
            c++;
        }
        if (temp == NULL) {
            printf("Invalid position.\n");
            return;
        }
        nn->next = temp->next;
        temp->next = nn;
    }
}

int main() {
    while (1) {
        int choice;
        printf("Enter:\n1. Insert at head\n2. Insert at end\n3. Delete at head\n4. Delete at end\n5. Insert at position\n6. Delete at position\n7. Display\nAny other key to exit\n");
        scanf("%d", &choice);

        if (choice == 1) {
            // Insert at head
            int val;
            printf("Enter the value to be inserted: ");
            scanf("%d", &val);
            NODE* nn = (NODE*)malloc(sizeof(NODE));
            nn->data = val;
            nn->next = NULL;
            insert_at_head(nn);
        }
        else if (choice == 2) {
            // Insert at end
            int val;
            printf("Enter the value to be inserted: ");
            scanf("%d", &val);
            NODE* nn = (NODE*)malloc(sizeof(NODE));
            nn->data = val;
            nn->next = NULL;
            insert_at_end(nn);
        }
        else if (choice == 3) {
            // Delete at head
            delete_at_head();
        }
        else if (choice == 4) {
            // Delete at end
            delete_at_end();
        }
        else if (choice == 5) {
            // Insert at position
            int val, pos;
            printf("Enter the value to be inserted: ");
            scanf("%d", &val);
            printf("Enter the position of the node: ");
            scanf("%d", &pos);
            NODE* nn = (NODE*)malloc(sizeof(NODE));
            nn->data = val;
            nn->next = NULL;
            insert_at_pos(nn, pos);
        }
        else if (choice == 6) {
            // Delete at position
            // Implement your code here
        }
        else if (choice == 7) {
            // Display
            display();
        }
        else {
            printf("Exiting...\n");
            break;
        }
    }

    return 0;
}
