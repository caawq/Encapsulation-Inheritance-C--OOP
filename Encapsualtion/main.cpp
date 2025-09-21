#include <iostream>
#include <string>
using namespace std;

class Kettle {
private:
	string name;
	int waterAmount = 0;
	int maxWaterAmount = 7;
	bool checkWater(int amount) {
		if (amount > 0 && amount <= maxWaterAmount) {
			return true;
		}
		else {
			return false;
		}
	}

public:
	void start() {
		bool isThereWater = checkWater(waterAmount);
		if (isThereWater) {
			cout << "Started!" << endl;
		}
		else {
			cout << "Cannot be started!" << endl;
		}
	}
public:
//Constructor
	Kettle(string n) {
		name = n;
	}
	void showInfo() {
		cout << "name: " << name << ", waterAmount: " << waterAmount << endl;
	}
	void addWater(int amount) {
		waterAmount += amount;
		cout<< "+" << amount << " water" << endl;
	}
};

int main() {
	Kettle p("Philips");
	p.showInfo();
	p.addWater(5);
	p.showInfo();
	p.start();
	return 0;
}

