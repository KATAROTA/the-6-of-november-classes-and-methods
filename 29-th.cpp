#include <iostream>
using namespace std;

class student {
	private:
		int age;
		
		
		
	public:
		string name;
		
		void student_card(string myCard){
			cout << name << " shows its: " << myCard << endl;
			
		}
		
		int getAge() {
			return age;
			
		}
		
		int setAge(int myAge) {
			
				age=myAge;
			
			return 0;
		}
	
};


int main() {
	student Man1;	
	Man1.name = "Heisenberg";
	Man1.setAge(15);
	
	if (Man1.getAge() >=16) {
		Man1.student_card("Heisenberg's student card");
		cout << Man1.name << " is " << Man1.getAge() << " Years old, this person is our student" << endl;
		
		
	}
	else {
		Man1.student_card("Heisenberg's passport");
		cout << "This person is not our student, its only " << Man1.getAge() << " years old" <<  endl;
	}
	
	
	
	
	
	
	
	
}
