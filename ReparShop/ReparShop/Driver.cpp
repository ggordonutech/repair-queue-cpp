#include "RepairQueue.h"

int main() {
	RepairQueue * queue = new RepairQueue();
	for (int i = 1; i < 5; i++) {
		queue->enqueue(
			 Computer(i,"Problem "+to_string(i),i*500)
		);
	}
	delete queue;
	return 0;
}