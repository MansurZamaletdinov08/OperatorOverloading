#include <iostream>

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	double Abs() {
		return numerator_ * denominator_;
	}


	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}

	bool operator==(Fraction other) {
		return Abs() == other.Abs();
	}
	bool operator!=(Fraction other) {
		return !(*this == other);
	}
	bool operator>(Fraction other) {
		return Abs() < other.Abs();
	}
	bool operator<(Fraction other) {
		return other > *this;
	}
	bool operator>=(Fraction other) {
		return !(*this < other);
	}
	bool operator<=(Fraction other) {
		return !(*this > other);
	}
};

int main()
{
	Fraction f1(4, 3);
	Fraction f2(6, 11);

	std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
	return 0;
}



/*
#include <iostream>

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	double Abs() {
		return numerator_ * denominator_;
	}


	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}

	bool operator==(Fraction other) {
		return Abs() == other.Abs();
	}
	bool operator!=(Fraction other) {
		return !(*this == other);
	}
	bool operator>(Fraction other) {
		return Abs() < other.Abs();
	}
	bool operator<(Fraction other) {
		return other > *this;
	}
	bool operator>=(Fraction other) {
		return !(*this < other);
	}
	bool operator<=(Fraction other) {
		return !(*this > other);
	}
};

int main()
{
	Fraction f1(4, 3);
	Fraction f2(6, 11);

	std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
	return 0;
}
*/