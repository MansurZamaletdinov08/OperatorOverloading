#include <iostream>

class Fraction {
private:
	int numerator_;
	int denominator_;

	int ValNum;
	int ValDenom;


public:
	Fraction(int numerator, int denominator) {
		numerator_ = numerator;
		denominator_ = denominator;
	}

	bool operator==(Fraction other) {
		ValNum = numerator_ * other.denominator_;
		ValDenom = other.numerator_ * denominator_;
		return ValNum == ValDenom;
	}

	bool operator!=(Fraction other) {
		ValNum = numerator_ * other.denominator_;
		ValDenom = other.numerator_ * denominator_;
		return ValNum != ValDenom;
	}

	bool operator<(Fraction other) {
		ValNum = numerator_ * other.denominator_;
		ValDenom = other.numerator_ * denominator_;
		return ValNum < ValDenom;
	}

	bool operator>(Fraction other) {
		ValNum = numerator_ * other.denominator_;
		ValDenom = other.numerator_ * denominator_;
		return ValNum > ValDenom;
	}

	bool operator<=(Fraction other) {
		ValNum = numerator_ * other.denominator_;
		ValDenom = other.numerator_ * denominator_;
		return ValNum <= ValDenom;
	}

	bool operator>=(Fraction other) {
		ValNum = numerator_ * other.denominator_;
		ValDenom = other.numerator_ * denominator_;
		return ValNum >= ValDenom;
	}
};

int main() {
	setlocale(LC_ALL, "Ru");

	Fraction f1(1, 3);
	Fraction f2(1, 6);

	std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
	std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';

	return 0;
}
