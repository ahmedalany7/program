#include <iostream>
using namespace std;

int fib(int n) {
	if (n <= 1)
		return abs(n-1);
	return fib(n-1) + fib(n-2);
}

int main() {
	cout << "Hello, World!" << endl;
	cout << fib(2) << endl; 
	return 0;
}