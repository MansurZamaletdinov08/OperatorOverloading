#include <iostream>

class Fraction {
private:
	int numerator_;
	int denominator_;

	int numerator;
	int denominator;


public:
	Fraction(int numerator, int denominator) {
		numerator_ = numerator;
		denominator_ = denominator;
	}

	bool operator==(Fraction other) {
		numerator = numerator_ * other.denominator_;
		denominator = other.numerator_ * denominator_;
		return numerator == denominator;
	}

	bool operator!=(Fraction other) {
		return numerator != denominator;
	}

	bool operator<(Fraction other) {
		return numerator < denominator;
	}

	bool operator>(Fraction other) {
		return numerator > denominator;
	}

	bool operator<=(Fraction other) {
		return numerator <= denominator;
	}

	bool operator>=(Fraction other) {
		return numerator >= denominator;
	}
};

int main() {
	setlocale(LC_ALL, "Ru");

	Fraction f1(1, 3);
	Fraction f2(1, 6);

	std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';

	return 0;
}