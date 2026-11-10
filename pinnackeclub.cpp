#include <iostream>
#include <string>
using namespace std;
struct Node{
	int prn;
	string name;
	Node* next;
};
// function to create new node 
Node * createNode(){
	Node* newNode = new Node();
	cout<< " Enter PRN : ";
	cin>> newNode->prn;
	cout<< " Enter Name: ";
	cin>> newNode->name;
	newNode->next = NULL;
	return newNode;
}
void addPresident(Node*&head){
	Node* newNode = createNode();
	newNode->next = head;
	head = newNode;
	cout<<"president added ! \n";
}
void addSecretary(Node*&head){
	Node*newNode = createNode();
	if(head==NULL){
		head= newNode;
		return;
	}
	Node*temp = head;
	while(temp->next!=NULL ){
		temp = temp ->next;
	}
	temp->next = newNode;
	cout<< " Secretary added ! \n";
}
void addMember(Node*head){
	if(head == NULL || head -> next == NULL){
		cout << " Please add president and secretary first ! \n";
		return;
	}
	Node*newNode = createNode();
	Node*temp = head;
	while(temp-> next->next != NULL ){
		temp = temp ->next;
	}
	newNode->next = temp->next;
	temp->next = newNode;
	cout<<"Member addwed! \n ";
}
void deletePresident(Node*&head){
	if(head == NULL){
		cout<< " list is empty !\n";
		return;
	}
	Node* temp = head;
	head = head->next;
	delete temp;
	cout<< "President is deleted! \n";
}
void deleteSecretary(Node*& head){
	if(head == NULL ){
		cout<<" List is empty !\n";
		return;
	}
	if(head->next == NULL){
		delete head;
		head = NULL;
		cout<< " Secretary is deleted ! \n";
	}
	Node* temp = head;
	while(temp->next->next != NULL ){
		temp = temp ->next;
	}
	delete temp->next;
	temp->next = NULL;
	cout<< " Secretary deleted !\n";
}
void deleteMember(Node*& head ){
	if(head == NULL){
		cout << " List is empty !\n";
		return;
	}
	int prn;
	cout<< " Enter prn to delete:";
	cin>>prn;
	if(head->prn == prn){
		deletePresident(head);
		return;
	}
	Node*temp = head;
	Node*prev = NULL;
	while (temp != NULL && temp -> prn != prn){
		prev = temp;
		temp = temp -> next;
	}
	if (temp== NULL ){
		cout << " Member not found!\n";
		return;
	}
	prev->next = temp->next;
	delete temp;
	cout<< " Member deleted! \n";
}
int countMembers(Node*head){
	int count = 0;
	Node *temp = head;
	while(temp != NULL){
		count++;
		temp = temp->next;
	}
	return count;
}
void display(Node*head){
	if(head == NULL){
		cout<<" List is Empty !\n";
		return;
	}
	cout<<"\nprn\tName\tRole\n";
	Node*temp = head;
	while(temp != NULL){
		cout << temp->prn<<"\t"<<temp->name;
		if(temp == head)
			cout<<"\t(President)\n";
		else if(temp-> next = NULL)
			cout<<"\t(secretary)\n";
		else 
			cout<<"\t(Member)\n";
		temp = temp->next;	
	}
}
Node*concatenate(Node*head1,Node*head2){
	if(head1 == NULL) return head2;
	if(head2 == NULL) return head1;
	Node* temp = head1;
	while(temp->next != NULL){
		temp=temp->next;
	}
	temp->next = head2;
	return head1;
}
int main(){
	cout<<"Aditi ambadas ukharde \n";
	cout<<"Roll No:58 \n";
	Node* divA = NULL;
	Node* divB = NULL;
	int choice;
	do{
		cout<< "\n ---PINNACLE CLUB MENU ---\n";
		cout<<"1. Add president\n2.Add Secretary\n3. Add Member \n";
		cout<<"4. Delete president\n5.Delete Secretary\n6. Delete Member \n";
		cout<<"7. Total members count \n8.display members\n9. concatenate  \n";
		cout<<"Enter choice : ";
		cin>> choice;
		if(choice==1) addPresident(divA);
		else if(choice==2) addSecretary(divA);
		else if(choice==3) addMember(divA);
		else if(choice==4) deletePresident(divA);
		else if(choice==5) deleteSecretary(divA);
		else if(choice==6) deleteMember(divA);
		else if(choice==7)
			cout<<" Total members: "<< countMembers(divA)<<endl;
		else if(choice==8){
            display(divA);
        } else if (choice == 9) {
            cout << "\n--- Enter details for Division B ---\n";
            addPresident(divB);
            addSecretary(divB);
            divA = concatenate(divA, divB);
            cout << "Division B concatenated to Division A successfully!\n";
        } else if (choice == 10) {
            cout << "Exiting program.\n";
        } else {
        	cout << "Invalid choice! Please try again.\n";
        }
		} while (choice != 10);
	return 0;
}
			
	

