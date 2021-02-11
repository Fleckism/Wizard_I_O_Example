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
// page 260

// save file in binary
//int main()
//{
//
//	// Create wizards with specific data.
//	Wizard wiz0("Gandalf", 25, 100, 10);
//	Wizard wiz1("Loki", 50, 150, 12);
//	Wizard wiz2("Magius", 10, 75, 6);
//
//	ofstream outFile("wizData.txt");//, ios_base::binary);
//	ifstream inFile("wizData.txt");//, ios_base::binary);
//
//	// Create a stream which will transfer the data from our file to our program
//
//	if (outFile)
//	{
//		wiz0.save(outFile);
//		wiz1.save(outFile);
//		wiz2.save(outFile);
//
//		outFile.close();
//	}
//
//
//}