#include <iostream>


class Fraction
{
private:
	int numerator_;
	int denominator_;

public:

	int func(int a, int b) {
		while (a && b) {
			if (a > b) {
				a %= b; 
			}
			else {
				b %= a;
			}
		}
		return a + b;
	}
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}



	Fraction operator +(Fraction& other) {
		Fraction temp = *this;

		temp.numerator_ = this->numerator_ * other.denominator_ + other.numerator_ * this->denominator_;
		temp.denominator_ = this->denominator_ * other.denominator_;

		return temp;
	}


	Fraction operator -(Fraction& other) {
		Fraction temp = *this;

		temp.numerator_ = this->numerator_ * other.denominator_ - other.numerator_ * this->denominator_;
		temp.denominator_ = this->denominator_ * other.denominator_;

		return temp;
	}


	Fraction operator * (Fraction& other) {
		Fraction temp = *this;

		temp.numerator_ = this->numerator_ * other.numerator_;
		temp.denominator_ = this->denominator_ * other.denominator_;

		int val = func(temp.numerator_, temp.denominator_);

		temp.numerator_ = temp.numerator_ / val;
		temp.denominator_ = temp.denominator_ / val;

		return temp;
	}


	Fraction operator / (Fraction& other) {
		Fraction temp = *this;
		int val = func(temp.numerator_, temp.denominator_);

		temp.numerator_ = this->numerator_ * other.denominator_;
		temp.denominator_ = this->denominator_ * other.numerator_;

		temp.numerator_ = temp.numerator_ / val;
		temp.denominator_ = temp.denominator_ / val;

		return temp;
	}



	Fraction& operator++ () {
		Fraction temp = *this;
		this->numerator_ = this->numerator_ + this->denominator_;

		return *this;
	}


	Fraction operator++ (int) {
		Fraction temp = *this;

		this->numerator_ = this->numerator_ + this->denominator_;
		return temp;
	}

	Fraction& operator-- () {
		this->numerator_ = this->numerator_ - this->denominator_;
		return *this;
	}

	Fraction operator-- (int) {
		Fraction temp = *this;

		this->numerator_ = this->numerator_ - this->denominator_;
		return temp;
	}


	void Print() {
		std::cout << numerator_ << "/" << denominator_ << "\n";
	}
};


int main()
{
	setlocale(LC_ALL, "Ru");
	int a1, b1;
	int a2, b2;
	int c = 7, d = 4;

	std::cout << "Введите числитель дроби 1: ";
	std::cin >> a1;

	std::cout << "Введите знаимнатель дроби 1: ";
	std::cin >> a2;


	std::cout << "Введите числитель дроби 2: ";
	std::cin >> b1;

	std::cout << "Введите знаимнатель дроби 2: ";
	std::cin >> b2;


	Fraction f1(a1, a2), f2(b1, b2);

	Fraction sum = f1 + f2;
	Fraction sub = f1 - f2;
	Fraction mult = f1 * f2;
	Fraction div = f1 / f2;
	Fraction incpref = ++f1 * f2;
	Fraction incpost = f2++ * f2;
	Fraction decpref = --f1 * f2;
	Fraction decpost = f1-- * f2;




	std::cout << a1 << "/" << a2 << " + " << b1 << "/" << b2 << " = ";
	sum.Print();
	std::cout << a1 << "/" << a2 << " - " << b1 << "/" << b2 << " = ";
	sub.Print();
	std::cout << a1 << "/" << a2 << " * " << b1 << "/" << b2 << " = ";
	mult.Print();
	std::cout << a1 << "/" << a2 << " / " << b1 << "/" << b2 << " = ";
	div.Print();
	std::cout << "++" << a1 << "/" << a2 << " * " << b1 << "/" << b2 << " = ";
	incpref.Print();


	std::cout << a1 << "/" << a2 << "++" << " * " << b1 << "/" << b2 << " = ";
	incpost.Print();

	std::cout << "Значение дроби 1 = " << c << "/" << d << std::endl;
	std::cout << "--" << a1 << "/" << a2 << " * " << b1 << "/" << b2 << " = ";
	decpref.Print();

	std::cout << a1 << "/" << a2 << "--" << " * " << b1 << "/" << b2 << " = ";
	decpost.Print();
	std::cout << "Значение дроби 1 = " << a1 << "/" << a2;

}