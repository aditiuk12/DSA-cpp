#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* prev;
    Node* next;
};
void appendBit(Node*& head, Node*& tail, int bit){
    Node* newNode = new Node();
    newNode->data = bit;
    newNode->next = NULL;
    newNode->prev = tail;
	if(head == NULL){
        head = newNode;
    }
    else{
        tail->next = newNode;
    }
    tail = newNode;
}
void display(Node* head){
    Node* temp = head;
Node* getOnesCompliment(Node* head);
{
    Node* compHead = NULL;
    Node* compTail = NULL;
    Node* temp = head;
	while(temp != NULL){
        int flippedBit = (temp->data == 0) ? 1 : 0;
        appendBit(compHead, compTail, flippedBit);
        temp = temp->next;
    }
}
	return compHead;
}
Node* getTwoCompliment(Node* head){
    Node* onesCompHead = getOnesCompliment(head);
if(onesCompHead == NULL){
        return NULL;
    }
//go to the last node
    Node* temp = onesCompHead;
while(temp->next != NULL){
        temp = temp->next;
    }
//add 1
    int carry = 1;
while(temp != NULL){
        int sum = temp->data + carry;
        temp->data = sum % 2;
        carry = sum / 2;
        temp = temp->prev;
    }
//if carry is still 1, create a newnode at the beginning
    if(carry == 1){
        Node* newHead = new Node();
        newHead->data = 1;
        newHead->prev = NULL;
        newHead->next = onesCompHead;
		onesCompHead->prev = newHead;
        onesCompHead = newHead;
    }
return onesCompHead;
}
int main(){
    cout << "NAME    : SONWANE ADITYA\n";
    cout << "Roll No. : 246\n";
Node* head = NULL;
    Node* tail = NULL;
//binary no.-10110
    appendBit(head, tail, 1);
    appendBit(head, tail, 0);
    appendBit(head, tail, 1);
    appendBit(head, tail, 1);
    appendBit(head, tail, 0);
	cout << "Original : ";
    display(head);
	Node* twos = getTwoCompliment(head);
	cout << "2's compliment : ";
    display(twos);
	return 0;
}
