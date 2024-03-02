#pragma once

#include "iostream"

using namespace std;

class TComplex
{
	double real;
	double imaginary;
public: 
	TComplex();
	TComplex(const double& r);


	TComplex operator* (TComplex);
	TComplex operator* (int);
	TComplex operator/ (TComplex);
	TComplex operator-= (TComplex);
	TComplex operator +(const TComplex&);
	TComplex operator -(const TComplex&);
	
	bool operator == (const int& r);
	operator bool() const;


	friend double abs(TComplex);
	friend ostream& operator<<(ostream&, TComplex&);
	friend istream& operator>>(istream&, TComplex&);
};

