#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node* next;
};

struct Node* head;

void Insert(int x) {
	struct Node* temp = (struct Node* )malloc(sizeof(struct Node));
	temp->data = x;
	temp->next = head;
	head = temp;

}

void Print() {
	struct Node* temp = head;
	while (temp != NULL) {
		printf("%d", temp->data);
		temp = temp->next;
	}
	printf("\n");
}
int main() {
	head = NULL;
	int n, i, x;
	printf("How many numbers : ");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("Enter: ");
		scanf("%d", &x);
		Insert(x);
		Print(x);
	}
}
