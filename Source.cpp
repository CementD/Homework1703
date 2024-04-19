#include <iostream>
using namespace std;

class Overcoat {
	string facon;
	double price;

public:
	Overcoat(string pFacon, double pPrice) : facon(pFacon), price(pPrice) {}
	
	bool operator==(const Overcoat& other) const {
		return (facon == other.facon);
	}

	Overcoat& operator=(const Overcoat& other) {
        if (this != &other) {
            facon = other.facon;
            price = other.price;
        }
        return *this;
    }

	bool operator>(const Overcoat& other) const {
		return (price > other.price);
	}

	void displayOvercoat() const {
		cout << "Facon: " << facon << "; Price: " << price << endl;
	}
};

class Flat {
	double size;
	double price;

public:
	Flat(double pSize, double pPrice) : size(pSize), price(pPrice) {}

	bool operator==(const Flat& other) const {
		return (size == other.size);
	}

	Flat& operator=(const Flat& other) {
		if (this != &other) {
			size = other.size;
			price = other.price;
		}
		return *this;
	}

	bool operator>(const Flat& other) const {
		return (price > other.price);
	}

	void displayFlat() const {
		cout << "Facon: " << size << "; Price: " << price << endl;
	}
};

int main() {
	cout << "Task 1" << endl;

	Overcoat coat1("cashemere", 200.0);
	Overcoat coat2("wool", 300.0);

	coat1.displayOvercoat();
	coat2.displayOvercoat();

	if (coat1 == coat2)
		cout << "Overcoats are the same." << endl;
	else 
		cout << "Overcoats aren't thhe same." << endl;

	if (coat1 > coat2)
		cout << "Coat1 price > coat2 price." << endl;
	else
		cout << "Coat1 price < coat2 price." << endl;

	Overcoat coat3 = coat1;

	coat3.displayOvercoat();

	cout << "\nTask 2" << endl;

	Flat flat1(500.0, 1200.5);
	Flat flat2(700.0, 1000.3);

	flat1.displayFlat();
	flat2.displayFlat();

	if (flat1 == flat2)
		cout << "Flats are the same." << endl;
	else
		cout << "Flats aren't the same." << endl;

	if (flat1 > flat2)
		cout << "Flat1 price > flat2 price." << endl;
	else
		cout << "Flat1 price > flat2 price." << endl;

	Flat flat3 = flat1;

	flat3.displayFlat();

	return 0;
}