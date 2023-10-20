#ifndef RATIONAL_H
#define RATIONAL_H
#include<iostream>
using namespace std;

// ������
class Rational
{
public:
	Rational(int _num, int _den);
	Rational(double real);
	Rational(const Rational& par);
	~Rational();

	void show();

	double eval() const; // �Ҽ�
	int getNumer() const;	// ���� ��ȯ
	int getDenom() const;	// �и� ��ȯ
	int getWhole() const;	// �ڿ��� ��ȯ
	double getFracPart();	//�Ҽ��θ� ��ȯ


	Rational fracPart();
	Rational reciprocal();
public:
	Rational& add(const Rational val);
	static Rational add(const Rational lval, const Rational rval);

	Rational& sub(const Rational val);
	static Rational sub(const Rational lval, const Rational rval);

	Rational& mul(const Rational val);
	static Rational mul(const Rational lval, const Rational rval);

	Rational& div(const Rational val);
	static Rational div(const Rational lval, const Rational rval);

	Rational& pow2();
	static Rational pow2(const Rational val);
private:
	void cancel();
	static int euclidGcd(int lval, int rval);
	static int myLcm(int lval, int rval);
private:
	int num;	// ����
	int den;	// �и�
};

#endif // !RATIONAL_H