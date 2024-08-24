#include <iostream>
using namespace std;



void Insert(Node* head, int x);
void Print(Node* head);

struct Node {
	int data;
	struct Node* next;
};

Node* head;
void Insert(Node* head, int x) {
	Node* temp = new Node();
	temp->data = x;
	temp->next = NULL;
	if (head != NULL) temp->next = NULL;
	head = temp;

}

void Print(Node*  head) {
	Node* temp = head;
	cout << "List is ";
	while (temp != NULL) {
		cout << temp->data;
		temp = temp->next;
	}
}
int main() {
	head = NULL;
	Insert(head,1);
	Insert(head,2);
	Print(head);
	return 0;

}
