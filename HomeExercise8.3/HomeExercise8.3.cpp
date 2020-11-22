#include <iostream>
#include "Person.h"


int main()
{
	using namespace std;

	struct Person Robin;

	Robin.age_ = 21;
	Robin.height_ = 178;
	Robin.weight_ = 95;

	cout << "Robin is " << Robin.age_ << " years old" << endl;
	cout << "Robin height is " << Robin.height_ << endl;
	cout << "Robins weight is " << Robin.weight_ << endl << endl;


	struct Person Julemand = { 1000,195,150 };

	cout << "Julemand is " << Julemand.age_ << " years old" << endl;
	cout << "Julemand's height is " << Julemand.height_ << endl;
	cout << "Julemand weight is " << Julemand.weight_ << endl;

	return 0;
}