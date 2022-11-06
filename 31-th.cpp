#include <iostream>
using namespace std;


class fish {
	public: 
		bool isFreshWaterFish;
		void Swim() {
			if (isFreshWaterFish) cout << "Пресноводный" << endl;
			else cout << "морской" << endl;
		}
};
class carp : public fish {
	public:
		carp() {
			isFreshWaterFish = true;
		}
};
class Tuna : public fish {
	public:
		Tuna() {
			isFreshWaterFish = false;
		}
};


int main() {
	carp carpFish;
	Tuna tunaFish;
	cout << "My food: " << endl;
	carpFish.Swim();
	tunaFish.Swim();
	carpFish
	return 0;
}
