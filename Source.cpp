// Source.cpp
//Chapter 8.5.2 Rewrite 8.1 and 8.2 to use binary page 270

#include"Wiz.h"
#include <iostream> // for loading text exercise aka cout  wasn't used in save program
using namespace std;

int main()
{
	// Create wizards with specific data.
	Wizard wiz0;
	Wizard wiz1;
	Wizard wiz2;

	cout << "Before loading..." << endl << endl;
	wiz0.print();
	wiz1.print();
	wiz2.print();

	// Create a stream which will transfer the data from our file to our program
	ifstream inFile("wizdata.txt");
	if (inFile)
	{
		wiz0.load(inFile);
		wiz1.load(inFile);
		wiz2.load(inFile);
	}

	// Output the wizards to show the data was loaded correctly.
	cout << "After loading..." << endl << endl;
		wiz0.print();
		wiz1.print();
		wiz2.print();
}
	//// Create a stream which will transfer the data from our program to the specified file
	//ofstream outFile("wizdata.txt");

	//// If the file opened correctly then call save methods.?
	//if (outFile)
	//{
	//	// Dump data into the stream.
	//	wiz0.save(outFile);
	//	wiz1.save(outFile);
	//	wiz2.save(outFile);

	//	// Done with stream--close it.
	//	outFile.close();
	//}