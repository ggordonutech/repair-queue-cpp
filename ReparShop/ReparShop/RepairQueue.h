#ifndef REPAIR_QUEUE
#define REPAIR_QUEUE

#include "DoublyLinkedListNode.h"

class RepairQueue {
private:
	DoublyLinkedListNode* head;
	DoublyLinkedListNode* tail;
public:
	RepairQueue() {
		head = NULL;
		tail = NULL;
	}

	bool isEmpty() {
		if (head == NULL) {
			return true;
		}
		else {
			return false;
		}
	}

	bool isFull() {
		DoublyLinkedListNode* temp = new DoublyLinkedListNode();
		if (temp == NULL) {
			return true;
		}
		else {
			delete temp;//JAVA: temp = null;
			return false;
		}
	}

	bool enqueue(Computer data) {
		if (isFull()) {
			cout << "Unable to accept new jobs" << endl;
		}
		else {
			DoublyLinkedListNode* nextItem = new DoublyLinkedListNode();
			nextItem->setData(data);
			if (isEmpty()) {
				head = nextItem; tail = nextItem;
			}
			else {
				nextItem->setPrev(tail); //1
				tail->setNext(nextItem);
				tail = nextItem;
			}
		}
		return false;
	}
	~RepairQueue() {}
};
#endif
