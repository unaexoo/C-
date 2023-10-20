#pragma once
#include "Fraction.h"
class MixedFraction : public Fraction
{
public:
	MixedFraction(int _num, int _den, int _whole);
	MixedFraction(const MixedFraction& par); 

	int getWhole();	//�ڿ��� ��ȯ
	int getNumer();	// ����� ��ȯ
	int getDenom();	// ũ��(���밪)

	Fraction getFrac();	//���м� �κ� ��ȯ
	Fraction toFrac();	// ���м� ��ȯ

	void show();

public : 
	MixedFraction& add(const MixedFraction& rval);
	MixedFraction& sub(const MixedFraction& rval);
	MixedFraction& mul(const MixedFraction& rval);
	MixedFraction& div(const MixedFraction& rval);

	static MixedFraction add(const MixedFraction& rval,const MixedFraction&lval);
	static MixedFraction sub(const MixedFraction& rval, const MixedFraction& lval);
	static MixedFraction mul(const MixedFraction& rval, const MixedFraction& lval);
	static MixedFraction div(const MixedFraction& rval, const MixedFraction& lval);
private:
	void cancel();
	static int euclidGcd(int lval, int rval);
	static int myLcm(int lval, int rval);
private:
	int whole;
};

