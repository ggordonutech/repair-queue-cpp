#ifndef REPAIR_JOB
#define REPEAR_JOB

#include <iostream>
#include <string>

using namespace std;

class RepairJob {
private:
	int id;
	string problem;
	float cost;
public:
	RepairJob() : RepairJob(0, "", 0.0) {}
	RepairJob(const RepairJob& other) {
		this->id = other.id;
		this->problem = other.problem;
		this->cost = other.cost;
	}
	//RepairJob(const RepairJob & other) 
	//	: RepairJob(
	//		other.id, 
	//		other.problem, other.cost) {}
	RepairJob(int id, string problem, float cost) {
		this->id = id;
		this->problem = problem;
		this->cost = cost;
	}

	int getId() { return id; }
	string getProblem() { return problem; }
	float getCost() { return cost; }
	void setId(int id) { this->id = id; }
	void setProblem(string problem) { this->problem = problem; }
	void setCost(float cost) { this->cost = cost; }

	void display() {
		cout << "RepairJob [ id = " << id
			<< ", problem = '" << problem
			<< ", cost = " << cost << "']";
	}
	~RepairJob() {}
};
#endif
