#include<bits/stdc++.h>
using namespace std;

class fun {
public:
	void operator()() {
		cout << "operator overloading " << endl;
	}
	void operator()(string s) {
		cout << "operator overloading " << s;
	}

};
int main() {
	fun f; // cunstrutor call
	f(); // its look like function call where f is object
	f("in C++");

}