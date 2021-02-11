// Source.cpp
//Chapter 8.5.2 Rewrite 8.1 and 8.2 to use binary page 270

#include"Wiz.h"
#include <iostream> // for loading text exercise aka cout  wasn't used in save program
using namespace std;

int main()
{
	
	// Create wizards with specific data.
	Wizard wiz0("Gandalf", 25,100,10);
	Wizard wiz1("Loki",50,150,12);
	Wizard wiz2("Magius",10,75,6);

	ofstream outFile("wizData.txt");//, ios_base::binary);
	ifstream inFile("wizData.txt");//, ios_base::binary);

	// Create a stream which will transfer the data from our file to our program
	
	if (outFile)
	{
		wiz0.save(outFile);
		wiz1.save(outFile);
		wiz2.save(outFile);

		outFile.close();
	}

	
}
