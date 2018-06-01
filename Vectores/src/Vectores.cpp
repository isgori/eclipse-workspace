//============================================================================
// Name        : Vectores.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<string> strings;

	strings.push_back("one");
	strings.push_back("two");
	strings.push_back("three");

/*	strings[3] = "cat";

	cout<< strings[1]<<endl;

	cout<< strings.size()<<endl;*/

	for(int i=0;i<strings.size();i++){
		cout<< strings[i]<<endl;
	}

/*	vector<string>::iterator it = strings.begin();

	cout<<*it<<endl;
	it++;
	cout<<*it<<endl;
	it++;
	cout<<*it<<endl;

*/
	//este es mejor para la memoria
	for(vector<string>::iterator it = strings.begin(); it!= strings.end(); it++){
		cout<<*it<<endl;
	}

	vector<string>::iterator it = strings.begin();
	it+=2;

	cout<<*it<<endl;


	return 0;
}
