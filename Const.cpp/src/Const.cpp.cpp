//============================================================================
// Name        : cpp.cpp
// Author      : Galymzhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class Pet{
private:
	string name;
public:
	void setName(string name){this -> name = name;};
	void voice(){cout << "The name of my dog is " << name << endl;};
};
int main() {
	Pet dog;
	dog.setName("Charly");
	dog.voice();
	cout << "---------------" << endl;
	int san = 69;
   const int *pValue = &san;
	cout << "The pointer pValue used to point at " << *pValue << endl;
	*pValue = 89;
	cout << "Now it points at " <<  *pValue << endl;
	int pegas = 79;
	int *const pMag = &pegas;
	int mag = 99;
	pMag = &mag;
	cout << "pMag points at " << *pMag << endl;




	return 0;
}
