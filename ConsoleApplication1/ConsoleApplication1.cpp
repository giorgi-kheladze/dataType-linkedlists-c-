#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* next;
};

void print(Node* n){
	while (n != NULL){
		cout << n->data << endl;
		n = n->next;
	}
}

//function to add element at the fron of the list


int main() {
	Node* head = new Node();
	Node* first = new Node();
	Node* second = new Node();

	head->data = 1;
	head->next = first;
	first->data = 2;
	first->next = second;
	second->data = 3;
	second->next = NULL;

	print(head);
	cout << "giorgi";

	return 0;
}