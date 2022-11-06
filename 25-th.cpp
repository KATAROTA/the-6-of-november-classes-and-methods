#include <iostream>
using namespace std;


class Human {
	private:
		int age;
	public:
		string name;
		Human(string myName="smith", int myAge=18)
			:name(myName), age(myAge)
			{
				cout << "constructor made human";
			}
			
			
			
		//Human(string myName, int myAge){
		//	age = myAge;
		//	name = myName;
		//	cout << "Constructor made human with name " << name << endl;
		//	cout << "this person is " << age << " years old" << endl;
		//}
		//Human() {
		//	age =18;
		//	name="smith";
		//}
		
	
	int GetAge() { //Geter для получения атрибута через метод
		return age;
		
	}
	void setAge(int MyAge) {//сетер для прописания
		if (MyAge > 10) {
			age = MyAge;
		}
	}
	
};



int main() {
	Human ggg("Bo", 16);
}
