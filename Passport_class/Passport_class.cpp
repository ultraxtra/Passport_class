#include<iostream>

using namespace std;

class UkrPass {
public:
	string FIO;
	string nationality;
	int age;
	string passnum;
	
public:
	void ShowUkr() {
		cout << "Ukrainian passport" << endl;
	}
};

class ForeignPass : public UkrPass {
public:
	string visa;
	string foreignpassnum;

public:
	void ShowForeign() {
		cout << "Foreign passport" << endl;
	}
};

void main() {
	UkrPass ukr;
	ukr.ShowUkr();
	ForeignPass foreign;
	foreign.ShowForeign();
}