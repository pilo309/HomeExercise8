#include <iostream>
#include "Dog.h"
#include <string.h>
#include <stdio.h>

int main()
{
	using namespace std;

	struct Dog Labrador;
	Labrador.age_ = 10;
	Labrador.weight_ = 15;
	strcpy_s(Labrador.breed_,"Labrador");

	cout << "Dog breed is " << Labrador.breed_ << endl;
	cout << "Dog's age is " << Labrador.age_ << endl;
	cout << "Dogs weight is " << Labrador.weight_ << endl << endl;

	struct Dog Bulldog = {'B',10,10};
	//strcpy_s(Bulldog.breed_, "Bulldog");

	cout << "Dog breed is " << Bulldog.breed_ << endl;
	cout << "Dog's age is " << Bulldog.age_ << endl;
	cout << "Dogs weight is " << Bulldog.weight_ << endl << endl;

	return 0;
}