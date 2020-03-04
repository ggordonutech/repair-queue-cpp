#ifndef REPAIR_QUEUE 
#define REPAIR_QUEUE

#include "DoublyLinkedListNode.h"

class RepairQueue {
private:
	DoublyLinkedListNode* head;
	DoublyLinkedListNode* tail;
public:
	RepairQueue() {head = NULL; tail = NULL;}
	bool isEmpty() {
		if (head == NULL)return true;
		else return false;
	}
	bool isFull() {
		DoublyLinkedListNode* temp = 
			new DoublyLinkedListNode();
		if (temp == NULL) {
			return true;
		}
		else {
			delete temp;//JAVA: temp = null;
			return false;
		}
	}
	bool enqueue(RepairJob job) { 
		if (isFull()) {
			cout << "We are full, We have too much work to do" << endl;
			return false;
		}
		else {
			DoublyLinkedListNode* temp2 =
				new DoublyLinkedListNode();
			temp2->setData(job);
			if (isEmpty()) {				
				head = temp2;tail = temp2;
			}
			else {
				temp2->setPrev(tail);
				tail->setNext(temp2);
				tail = temp2;
			}
			return true;
		}		 
	}
	RepairJob* dequeue() { 
		if (isEmpty()) {
			cout << "Nothing to remove" <<endl;
			return NULL;
		}
		else {
			RepairJob* temp = new RepairJob(
				head->getData()
			);
			if (head == tail) {
				delete head; //JAVA: ignore
				head = NULL;tail = NULL;
			}
			else {
				DoublyLinkedListNode * tempHead = head;
				head = head->getNext();
				head->setPrev(NULL);
				delete tempHead;//JAVA: tempHead = null;
			}
			return temp;
			
		}
		
	}
	void destroy() {
		while (!isEmpty())dequeue();
	}
	~RepairQueue() {}
};

#endif
