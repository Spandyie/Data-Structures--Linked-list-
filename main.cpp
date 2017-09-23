#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct node{
	int x;
	node * next;
};

class list{
	private:
	node * head, *tail;                   // declare head and tail  to store the address of head and tail of the linked list
	public:
		list(){			                 // constructer creates NUll pointers
			
			head = NULL;
			tail = NULL;
			
		}	
	void createList(int val);
	void displayList();
	void insert_start(int val);
	void insert_end(int val)
	void insert_position(int val, int pos);
	
};

void list::createList(int val){ 
	node *temp = new node;
	temp->x = val;
	temp->next = NULL;
	
	if( head == NULL){    					// If Head is empty, then create 1 node, and make head and tail point to that node
		head = temp;
		tail = temp;
		temp = NULL;
		
	}
	else{
		tail->next = temp;
		temp = NULL;
	}
	
}

void list::displayList(){
	node * temp = new node;
	temp = head;
	while(temp != NULL){
		cout << temp->x << " ";
		temp = temp->next;
	}
}

void list::insert_start(int val){
	/* Adding node to the begin of the linked list*/
	node * temp = new node;
	temp->x = val;
	temp -> next = head;
} 

void list::insert_end(int val){
	/* Adding elements at the end of linked list*/
	node * temp = new node;
	temp->x = val;
	temp->next =NULL;
	tail=temp;
	
	
}

void list::insert_position(int val, int pos){
	/* This code enables useers to enter the data at any desired position. 
	1. Pass the address of new node in next variable of the previous node
	2. Pass the next variabbles adress to the next variable of current node   */
	
	node * pre = new node;
	node * cur = new node;
	node * temp = new node;	
	cur = head;	
	for (size_t i=0;i<pos;i++){
		pre =cur;
		cur = cur-> next;		
	}
	
	temp->x= val;
	temp -> next = cur;	
	pre->next = temp;
}

int main() {
	list Spandan;
	Spandan.createList(1);
	Spandan.createList(2);
	Spandan.insert_position(3,2);
	Spandan.displayList();

	return 0;
}
