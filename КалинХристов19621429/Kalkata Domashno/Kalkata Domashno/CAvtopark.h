#pragma once
#include "CAuto.h"
class CAvtopark
{
private:
	CAuto cAuto;
	string name;
	string chain;
	int aNumber;
	int salesNumber;
public:
	CAvtopark();
	CAvtopark(CAuto cAuto, string name, string chain, int aNumber, int salesNumber);
	CAvtopark(const CAvtopark& other);
	CAuto getCAuto()const;
	string getName()const;
	string getChain()const;
	int getANumber()const;
	int getSalesNumber()const;
	void setSales(int sales);
	void setName(string name);
	void setCAuto(CAuto cAuto);

};

