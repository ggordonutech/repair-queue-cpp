#ifndef COMPUTER_H
#define COMPUTER_H

#include <iostream>
#include <string>

using namespace std;

class Computer {
private:
	int id;
	string problem;
	float value;
public:
	Computer() : Computer(0,"",0.0) {}
	Computer(int id, string problem, float value) {
		this->id = id;
		this->problem = problem;
		this->value = value;
	}
	Computer(const Computer &other) 
		: Computer(other.id, other.problem, other.value) {}
	int getId() { return id; }
	string getProblem() { return problem; }
	float getValue() { return value; }

	void setId(int id) { this->id = id; }
	void setProblem(string problem) { this->problem = problem; }
	void setValue(float value) { this->value = value; }

	void display() {
		cout << "Computer [id = " << id <<
			" , problem = '" << problem <<
			"' , value = " << value << "]";
	}
	~Computer() {}
};

#endif
