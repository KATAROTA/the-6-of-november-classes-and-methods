#include <iostream>
using namespace std;

class circle {
	public:
		
		
		double radius;
		
		circle(double r)
			:radius(r) {
				cout << "costructor has made circle with radius = " << radius << endl;
			}
		
	
};

int main() {
		circle(410.2);
	
}
