#include <iostream>
#include <string>
using namespace std;

class Fish {
protected:
	string name;
	string type;
private:
	string area = "water";
public:
	void goSwim() {
		cout << "***Swimming***" << endl;
	}
	void showInfo() {
		cout << "name: " << name << ", area: " << area << ", type: " << type << endl;
	}
};

class Predator : virtual public Fish {
public:
//Constructor
	Predator(string n) {
	 name = n;
	 type = "Predator";
 }

	void bite() {
		cout << "***Biting***" << endl;
	}
};

class Peaceful : virtual public Fish {
public:
//Constructor
	Peaceful(string n) {
	 name = n;
	 type = "Peaceful";
 }

	void hide() {
		cout << "***Hiding***" << endl;
	}
};

class SilentFish : public Predator, public Peaceful {
public:
//Constructor
	SilentFish(string n) : Predator(n), Peaceful(n) {
	 name = n;
	 type = "SilentFish";
 }

	void whiplash() {
		cout << "***Whiplash attack***" << endl;
	}
};

int main() {
	cout<< endl <<"--Predator--" << endl;
	Predator shark("Sharky");
	shark.showInfo();
	shark.goSwim();
	shark.bite();

	cout<< endl <<"--Peaceful--" << endl;
	Peaceful karas("Karas");
	karas.showInfo();
	karas.goSwim();
	karas.hide();

	cout<< endl <<"--SilentFish--" << endl;
	SilentFish skat("Skat");
	skat.showInfo();
	skat.goSwim();
	skat.hide();
	skat.bite();
	skat.whiplash();
	return 0;
}

