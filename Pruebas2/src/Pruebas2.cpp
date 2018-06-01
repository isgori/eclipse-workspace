//============================================================================
// Name        : Pruebas2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <exception>
#include <fstream>
using namespace std;

void goEsWrong(){

}



int main() {
	try{

	string outFileName = "Prueba.txt";
	//	ofstream outFile;

	fstream outFile;


	//outFile.open(outFileName);
	outFile.open(outFileName, ios::out);

	if(outFile.is_open()){
		outFile << "Jeni me gusta"<< endl;
		outFile << 123<< endl;
		outFile.close();
	}
	else{
		cout << "Could not create file:" << outFileName << endl;
	}

	}catch (exception ex){


	}
}
