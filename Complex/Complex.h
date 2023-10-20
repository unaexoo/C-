#ifndef COMPLEX_H
#define COMPLEX_H
#include "Frac.h"

class Complex {
public:
	Complex(const Frac& _real, const Frac& _img); 
	Complex(const Complex& par); 

	// ���� ����
	Frac getRe() const; 
	Frac getIm() const;
	Frac getAbs() const;
	Frac getArg() const;
	Complex	getConj() const; // �ӷ����Ҽ��� ���Ҽ�Ÿ��

public:
	operator double() const;
	operator Frac() const{
		return getAbs();
	}
	Complex& operator++();
	Complex operator++(int dummy);
	Complex& operator--();
	Complex operator--(int dummy);
	Complex operator-();

	// ����(semi)
	Complex& add(const Complex& rval); 
	Complex& sub(const Complex& rval);
	Complex& mul(const Complex& rval);
	Complex& div(const Complex& rval);

	// ����(����)
	static Complex add(const Complex& lval, const Complex& rval); 
	static Complex sub(const Complex& lval, const Complex& rval);
	static Complex mul(const Complex& lval, const Complex& rval);
	static Complex div(const Complex& lval, const Complex& rval);
public:
	Complex& operator+=(const Complex& rval);
	Complex& operator-=(const Complex& rval);
	Complex& operator*=(const Complex& rval);
	Complex& operator/=(const Complex& rval);
public:
	friend Complex operator+(const Complex& lval, const Complex& rval);
	friend Complex operator-(const Complex& lval, const Complex& rval);
	friend Complex operator*(const Complex& lval, const Complex& rval);
	friend Complex operator/(const Complex& lval, const Complex& rval);

	// ����(����)
	bool equals(const Complex& rval) const;
	bool neq(const Complex& rval) const;
public:
	bool operator==(const Complex& rval) const;
	bool operator!=(const Complex& rval) const;
	void show() const;
	friend std::ostream& operator<<(std::ostream& os, const Complex& rval);
private:
	Frac real; // �Ǽ���
	Frac img; // �����
};

#endif // !COMPLEX_H