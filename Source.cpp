#include <iostream>
#include <conio.h>

using namespace std;

int firstProgram() {
	cout << "Hello C++ Language" << endl;
	return _getch();	// if user press any key then lock screen
}

extern int x = 10; //external variable (and also global variable)
void printValue() {
	cout << "x = " << x << endl;
}

// widening
int showWidening() {
	int i = 100;
	long l = i;
	float f = l;
	cout << "Int value: " << i << endl;
	cout << "Long value: " << l << endl;
	cout << "Float value: " << f << endl;
	return 0;
}

// narrowing
int showNarrowing() {
	double d = 100.005;
	float f = (float)d;
	long l = (long)f;
	int i = (int)l;
	cout << "Double value: " << d << endl;
	cout << "Float value: " << f << endl;
	cout << "Long value: " << l << endl;
	cout << "Int value: " << i << endl;
	return 0;
}

namespace thuduyen07 {
	void printWelcomeMessage() {
		cout << "Welcome, this is thuduyen07 namespace" << endl;
	}
}

namespace gaugau {
	void printWelcomeMessage() {
		cout << "Hello, this is gaugau namespace" << endl;
	}
}

void checkNamespace() {
	thuduyen07::printWelcomeMessage();
	gaugau::printWelcomeMessage();
}
void main() {
	firstProgram();
	printValue();
	showWidening();
	showNarrowing();
	checkNamespace();
}