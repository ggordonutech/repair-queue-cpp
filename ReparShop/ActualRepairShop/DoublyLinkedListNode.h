#ifndef DOUBLY_LINKED_LIST_NODE_H
#define DOUBLY_LINKED_LIST_NODE_H

#include "Computer.h"

class DoublyLinkedListNode {
private:
	Computer data;
	DoublyLinkedListNode* next;
	DoublyLinkedListNode* prev;
public:
	DoublyLinkedListNode() {
		//
		this->next = NULL;
		this->prev = NULL;
	}
	DoublyLinkedListNode(
		Computer data, 
		DoublyLinkedListNode* next,
		DoublyLinkedListNode* prev) {
		this->data = data;
		this->next = next;
		this->prev = prev;
	}

	DoublyLinkedListNode(const DoublyLinkedListNode& other) {
		data = other.data;
		this->next = other.next;
		this->prev = other.prev;
	}

	Computer getData() {
		return data;
	}

	void setData(Computer data) {
		this->data = data;
	}

	DoublyLinkedListNode* getNext() {
		return next;
	}

	void setNext(DoublyLinkedListNode* next) {
		this->next = next;
	}

	DoublyLinkedListNode* getPrev() {
		return prev;
	}

	void setPrev(DoublyLinkedListNode* prev) {
		this->prev = prev;
	}

	~DoublyLinkedListNode() {}
};
#endif // !DOUBLY_LINKED_LIST_H
