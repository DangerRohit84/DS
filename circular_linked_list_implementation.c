// Implementation of a Circular Linked List
#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node *next;	
};
typedef struct node Node;
Node *createNewNode(int val) {
	Node *new_node = (Node *)malloc(sizeof(Node));
	new_node->data = val;
	new_node->next = NULL;
	return new_node;	
}
Node *head = NULL;
void insert_at_head(int val) {
	Node *new_node = createNewNode(val);
	if (head == NULL) {
		head = new_node;
		head->next = head; // connecting the node to itself to ensure circle behavior
		return;
	}
	Node *temp = head;
	while (temp->next != head) {
		temp = temp->next;
	}
	temp->next = new_node; // connecting last node with to be head node
	new_node->next = head; // connecting new_node with old head node
	head = new_node; // making new_node as head node
}
void display() {
	if (head == NULL) {
		printf("Linked List is Empty\n");
		return;
	}
	Node *temp = head;
	do {
		printf("%d ", temp->data);
		temp = temp->next;
	} while (temp != head);
	printf("\n");
}
// 10 20 30
// 10 times
// 10 20 30 10 20 30 10 20 30 .....
void display2(int n) {
	Node *temp = head;
	for (int i = 0; i < n; i++) {
		printf("%d ", temp->data);
		temp = temp->next;
	}
}
int main() {
	int ch;
	while (1) {
		printf("Enter\n1. Insert at head\n2. Delete at tail\n3. Display\n4. Display2\nAny other to exit: ");
		scanf("%d", &ch);
		if (ch == 1) {
			// Insert at head;	
			int val;
			printf("Enter a value for the node to be inseretd: ");
			scanf("%d", &val);
			insert_at_head(val); // implement the function
		}
		else if (ch == 2) {
			// Delete at tail
		}
		else if (ch == 3) {
			// Diplay	
			display();	
		}
		else if (ch == 4) {
			int n;
			scanf("%d", &n);
			display2(n);	
		}
		else {
			printf("Thank you\n");	
			break;
		}
	}
}