//============================================================================
// Name        : ParsginText.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

int main() {

	string fileName="Texto2.txt";
	ifstream input;

	input.open(fileName);

	if(!input.is_open()){
		return 1;
	}

	while(input){
		string line="";
		getline(input,line,':');
		int bounty;
		input >> bounty;

		//input.get();
		//Only use this line when uses C++ 11
		input >> ws;
		if(!input){
			break;
		}
		cout << line << " -- "<<bounty<<endl;
	}
	input.close();
	return 0;
}
