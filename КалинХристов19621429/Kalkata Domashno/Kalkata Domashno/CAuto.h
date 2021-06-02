#pragma once
#include <string>
#include <iostream>
using namespace std;
class CAuto
{
private:
	string registrationNum;
	string model;
	int year;
	string color;
	int mileage;
	bool validateRegNumber(string registrationNumber);
public:
	CAuto();
	CAuto(string registrationNum, string model, string color, int year,  int mileage);
	CAuto(const CAuto& other);
	CAuto& operator=(const CAuto& other);
	string getRegistrationNumber()const;
	string getModel()const;
	string getColor()const;
	int getYear()const;
	int getMileage()const;
	void setRegistrationNumber(string registrationNumber);
	void setModel(string model);
	void setColor(string color);
	void setYear(int year);
	void setMileage(int mileage);
	virtual ostream& operator<<(ostream& os);
	virtual bool compare(const CAuto& other);
	int getCarAge()const;
	void print()const;
	friend bool operator!(const CAuto& other);
	friend bool operator<(const CAuto& first, const CAuto& second);
	friend bool operator==(const CAuto& first, const CAuto& second);


};

