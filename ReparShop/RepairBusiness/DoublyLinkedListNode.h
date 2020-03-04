#ifndef DOUBLY_LINKED_LIST_NODE
#define DOUBLY_LINKED_LIST_NODE

#include "RepairJob.h"

class DoublyLinkedListNode {
private:
	RepairJob data;
	DoublyLinkedListNode* next;
	DoublyLinkedListNode* prev;
public:
	DoublyLinkedListNode() :
		DoublyLinkedListNode(RepairJob(), NULL, NULL) {}
	DoublyLinkedListNode(RepairJob data) :
		DoublyLinkedListNode(data, NULL, NULL) {}
	
	DoublyLinkedListNode(const DoublyLinkedListNode& other) :
		DoublyLinkedListNode(other.data,other.next,other.prev){}
	
	DoublyLinkedListNode(
		RepairJob data, 
		DoublyLinkedListNode*next, 
		DoublyLinkedListNode* prev) {
		this->data = data;
		this->next = next;
		this->prev = prev;
	}

	RepairJob getData() { return data; }
	DoublyLinkedListNode* getNext() { return next; }
	DoublyLinkedListNode* getPrev() { return prev; }

	void setData(RepairJob data) { this->data = data; }
	void setNext(DoublyLinkedListNode* next) { this->next = next; }
	void setPrev(DoublyLinkedListNode* prev) { this->prev = prev; }

	~DoublyLinkedListNode() {
		//cout << "Released Resources for a DoublyLinkedListNode ";
		//data.display();
	}
};
#endif
