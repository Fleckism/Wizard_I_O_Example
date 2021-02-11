// Wiz.cpp

#include "Wiz.h"
#include <iostream>
using namespace std;

Wizard::Wizard()
{
	mName = "Default";
	mHitPoints = 0;
	mMagicPoints = 0;
	mArmor = 0;

}

Wizard::Wizard(string name, int hp, int mp, int armor)
{
	mName = name;
	mHitPoints = hp;
	mMagicPoints = mp;
	mArmor = armor;
}

void Wizard::print()
{
	cout << "Name= " << mName << endl;
	cout << "HP= " << mHitPoints << endl;
	cout << "MP= " << mMagicPoints << endl;
	cout << "Armor= " << mArmor << endl;
	cout << endl;
}
// save is referecing an ofstream object called outFile
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Error below
void Wizard::save(ofstream& outFile)
{
	outFile << "Name= " << mName << endl;
	outFile << "HP= " << mHitPoints << endl;
	outFile << "MP= " << mMagicPoints << endl;
	outFile << "Armor= " << mArmor << endl;
	outFile << endl;
}

void Wizard::load(ifstream& inFile)
{
	string garbage;  /// garbage is not used
	inFile >> garbage >> mName; // read name
	inFile >> garbage >> mHitPoints;
	inFile >> garbage >> mMagicPoints;
	inFile >> garbage >> mArmor;
}


// page 260