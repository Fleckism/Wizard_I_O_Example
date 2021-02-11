//Wiz.h

#ifndef WIZARD_H
#define	WIZARD_H

#include <fstream>
#include <string>
#include <iostream>

class Wizard
{
public:
	Wizard();
	Wizard(std::string name, int hp, int mp, int armor);

	void print();
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Error below
	void save(std::ofstream& outFile);
	void load(std::ifstream& inFile);
	
private:
	std :: string mName;
	int mHitPoints;
	int mMagicPoints;
	int mArmor;
};
#endif // Wizard_H
