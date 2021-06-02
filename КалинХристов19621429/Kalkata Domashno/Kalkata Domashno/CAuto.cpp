#include "CAuto.h"

//DEFAULT CONSTRUCTOR
CAuto::CAuto() {
	this->color = "";
	this->model = "";
	this->registrationNum = "";
	this->year = 0;
	this->mileage = 0;
}


//VALIDACIQ
bool CAuto::validateRegNumber(string registrationNumber) { // FINISH HIM
	if (registrationNumber[0] < 'A' || registrationNumber[0] > 'Z') {
		return false;
	}
	if (registrationNumber.size() < 7) {
		return false;
	}

	if (registrationNumber[1] >= 'A' && registrationNumber[1] <= 'Z') {
		for (int i = 2; i < 6; i++) {
			if (registrationNumber[i] < 48 || registrationNumber[i] > 57) {
				return false;
			}
		}
		for (int i = 6; i <= 7; i++) {
			if (registrationNumber[i] < 'A' || registrationNumber[i] > 'Z') {
				return false;
			}
		}
		return true;
	}
	else if(registrationNumber[1] >= 48 && registrationNumber[1] <= 57){
		for (int i = 2; i < 5; i++) {
			if (registrationNumber[i] < 48 || registrationNumber[i] > 57) {
				return false;
			}
		}
		for (int i = 5; i <= 6; i++) {
			if (registrationNumber[i] < 'A' || registrationNumber[i] > 'Z') {
				return false;
			}
		}
		return true;
	}
	return false;
}
//EXPLICIT CONSTRUCTOR
CAuto::CAuto(string registrationNum, string model, string color, int year, int mileage) {
	if (this->validateRegNumber(registrationNum) && year > 0 && mileage >=0) {
		this->registrationNum = registrationNum;
		this->color = color;
		this->model = model;
		this->year = year;
		this->mileage = mileage;
	}
	else {
		this->color = "";
		this->model = "";
		this->registrationNum = "";
		this->year = 0;
		this->mileage = 0;
	}
}
//COPY CONSTRUCTOR
CAuto::CAuto(const CAuto& other) : registrationNum(other.registrationNum),
	color(other.color), model(other.model), year(other.year), mileage(other.mileage){
}

//OPERATOR =
CAuto& CAuto::operator=(const CAuto& other) {
	if (this != &other) {
		this->color = other.color;
		this->model = other.model;
		this->registrationNum = other.registrationNum;
		this->year = other.year;
		this->mileage = other.mileage;
	}
	return *this;
}

string CAuto::getColor()const {
	return this->color;
}

string CAuto::getModel()const {
	return this->model;
}

string CAuto::getRegistrationNumber()const {
	return this->registrationNum;
}

int CAuto::getYear()const {
	return this->year;
}

int CAuto::getMileage()const {
	return this->mileage;
}

void CAuto::setRegistrationNumber(string regNum) {
	if (this->validateRegNumber(regNum)) {
		this->registrationNum = regNum;
	}
}

void CAuto::setColor(string color) {
	this->color = color;
}

void CAuto::setModel(string model) {
	this->model = model;
}

void CAuto::setYear(int year) {
	this->year = year;
}

void CAuto::setMileage(int mileage) {
	this->mileage = mileage;
}
//OVERLOAD THE << OPERATOR
ostream& CAuto::operator<<(ostream& os) {
	os << "Reg. Num: " << this->registrationNum << endl;
	os << "Color: " << this->color << endl;
	os << "Model: " << this->model << endl;
	os << "Year: " << this->year << endl;
	os << "Mileage: " << this->mileage << endl;
	return os;
}

int CAuto::getCarAge()const {
	time_t t = time(NULL);
	tm* timePtr = localtime(&t); // get current time
	return timePtr->tm_year + 1900 - this->year; // SHOULD BE localtime_s
}

bool operator<(const CAuto& first, const CAuto& second) {
	return first.mileage < second.mileage;
}

bool CAuto::compare(const CAuto& other) { // FINISH HIM
	return *this < other;
}

void CAuto::print() const {
	cout << "Reg. Num: " << this->registrationNum << endl;
	cout << "Color: " << this->color << endl;
	cout << "Model: " << this->model << endl;
	cout << "Year: " << this->year << endl;
	cout << "Mileage: " << this->mileage << endl;
}

bool operator!(const CAuto& other) {
	return other.color == "Metalic";
}

bool operator==(const CAuto& first, const CAuto& second) {
	return first.color == second.color;
}

