#include "CAvtopark.h"

CAvtopark::CAvtopark() {
	this->cAuto = CAuto();
	this->name = "";
	this->chain = "";
	this->aNumber = 0;
	this->salesNumber = 0;
}

CAvtopark::CAvtopark(CAuto cAuto, string name, string chain, int aNumber, int salesNumber) :
	cAuto(cAuto), name(name), chain(chain), aNumber(aNumber), salesNumber(salesNumber) {}

CAvtopark::CAvtopark(const CAvtopark& other):
	cAuto(other.cAuto), name(other.name), chain(other.chain), 
	aNumber(other.aNumber), salesNumber(other.salesNumber) {}

string CAvtopark::getName()const {
	return this->name;
}

string CAvtopark::getChain()const {
	return this->chain;
}

int CAvtopark::getANumber()const {
	return this->aNumber;
}

int CAvtopark::getSalesNumber()const {
	return this->salesNumber;
}

CAuto CAvtopark::getCAuto()const {
	return this->cAuto;
}

void CAvtopark::setSales(int num) {
	if (num >= 0) {
		this->salesNumber = num;
	}
}

void CAvtopark::setName(string name) {
	this->name = name;
}

void CAvtopark::setCAuto(CAuto cAuto) {
	this->cAuto = cAuto;
}