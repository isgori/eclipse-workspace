//============================================================================
// Name        : structes.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#pragma pack(push,1)

struct Person{
	char name[50];
	int age;
	double weigth;
};
#pragma pack(pop)


int main() {
	cout << sizeof(Person)<<endl;

	return 0;
}
