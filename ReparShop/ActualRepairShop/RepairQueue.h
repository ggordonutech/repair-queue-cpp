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
			} return true;
		}
		return false;
	}

	Computer* dequeue() {
		if (isEmpty()) {cout << "Vacation Mode" << endl;}
		else {
			Computer* temp = new Computer(head->getData());
			DoublyLinkedListNode *temp2 = head;
			if (head == tail) {
				head = NULL;tail = NULL;
			}
			else {
				head = head->getNext();head->setPrev(NULL);
			}
			delete temp2;//JAVA : temp2 = null;
			return temp;
		}
		return NULL;
	}

	void destroy() {
		while (!isEmpty()) {
			dequeue();
		}
	}


	~RepairQueue() {}
};
#endif
