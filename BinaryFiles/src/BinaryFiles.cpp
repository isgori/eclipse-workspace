//============================================================================
// Name        : BinaryFiles.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

#pragma pack(push,1)

struct Person{
	char name[50];
	int age;
	double weigth;
};
#pragma pack(pop)

int main() {

	//Write file Binary
	Person someone = {"Clark", 230 ,9.34};

	string fileName="test.bin";

	ofstream outputFile;

	outputFile.open(fileName,ios::binary);

	if(outputFile.is_open()){
		//outputFile.write((char * )&someone,sizeof(Person));
		outputFile.write(reinterpret_cast<char *>(&someone),sizeof(Person));

		outputFile.close();
	}else{
		cout<< "couldnt create file: " +fileName <<endl;
	}

	//Read file Binary

	Person someoneElse;

	ifstream inputFile;

	inputFile.open(fileName,ios::binary);

	if(inputFile.is_open()){
		//outputFile.write((char * )&someone,sizeof(Person));
		inputFile.read(reinterpret_cast<char *>(&someoneElse),sizeof(Person));

		inputFile.close();
	}else{
		cout<< "couldnt read file: " +fileName <<endl;
	}

	cout<< someoneElse.name <<"," << someoneElse.age <<"," <<someoneElse.weigth<< endl;

	return 0;
}
