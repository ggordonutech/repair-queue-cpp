#include "RepairQueue.h"
#include <cstdlib>

int main() {
	RepairQueue * queue = new RepairQueue();
	for (int i = 1; i < 5; i++) {
		queue->enqueue( //adding to back
			RepairJob(i, "Problem " + to_string(i), i * 500)
		);
	}
	for (int i = 0; i < 3; i++) {
		//deleting from front
		RepairJob* deletedItem = queue->dequeue();
		if (deletedItem != NULL) {
			cout << "dequeued : ";
			deletedItem->display();
		}
	}
	queue->destroy();
	delete queue;
	//cout << "Congratulations, I can get callaloo" << endl;
	system("pause");
	return 0;
}