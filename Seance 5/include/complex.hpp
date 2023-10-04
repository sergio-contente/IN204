#ifndef complexHPP
#define complexHPP
 
#include <iostream>
#include <cmath>

class Polar {};

class Complex
{
private:
	double mRealPart;
	double mImaginaryPart;

	//Complex(double theRealPart, double theImaginaryPart): mRealPart(theRealPart), mImaginaryPart(theImaginaryPart) {}

public:
	//Complex();
	~Complex() {}

	Complex(double aValue): mRealPart(aValue), mImaginaryPart(0) {}
	Complex(float aValue): mRealPart(aValue), mImaginaryPart(0) {}
	Complex(int aValue): mRealPart(aValue), mImaginaryPart(0) {}
	Complex(unsigned aValue): mRealPart(aValue), mImaginaryPart(0) {}

	void print() const {
		std::cout << mRealPart << " + " << mImaginaryPart << "i" << std::endl;
	}
	//Construire les deux répresetations canoniques

	// static Complex from_real_imaginary(double theRealPart, double theImaginaryPart) {
	// 	return Complex(theRealPart, theImaginaryPart);
	// }
	// static Complex from_polar(double theRho, double theTheta) {
	// 	return Complex(
	// 		theRho * cos(theTheta),
	// 		theRho * sin(theTheta)
	// 	);
	// }

	//Une autre facon pour faire la même chose
	Complex(double theReal, double theImaginary): mRealPart(theReal), mImaginaryPart(theImaginary) {}
	Complex(Polar, double theRho, double thePhi):
	mRealPart(theRho * cos(thePhi)), mImaginaryPart(theRho * sin(thePhi)) {}

	friend Complex operator * (int, const Complex&);
	friend Complex operator * (double, const Complex&);
	friend Complex operator * (const Complex&, int);
	friend Complex operator * (const Complex&, double);

	friend Complex operator +(double, const Complex&);
	friend Complex operator -(double, const Complex&);

	Complex operator + (const Complex& aRightValue) const {
			Complex result(*this);
			result.mRealPart += aRightValue.mRealPart;
			result.mImaginaryPart += aRightValue.mImaginaryPart;
			return result;
	}

	Complex operator - (const Complex& aRightValue) const {
			Complex result(*this);
			result.mRealPart -= aRightValue.mRealPart;
			result.mImaginaryPart -= aRightValue.mImaginaryPart;
			return result;
	}

	Complex operator + (double aRightValue) const
        {
            Complex result(*this);
            result.mRealPart += aRightValue;
            return result;
        }
	Complex operator - (double aRightValue) const
        {
            Complex result(*this);
            result.mRealPart -= aRightValue;
            return result;
        }

	// Complex& operator += (const Complex& aRightValue) {
	// 	Complex result(*this);
	// 	result += aRightValue;
	// 	return result;
	// }
	// Complex& operator -= (const Complex& aRightValue) {
	// 	Complex result(*this);
	// 	result -= aRightValue;
	// 	return result;
	// }

	Complex operator * (const Complex& aRightValue) const {
		return Complex(
		mRealPart * aRightValue.mRealPart - mImaginaryPart * aRightValue.mImaginaryPart,
		mRealPart * aRightValue.mImaginaryPart + mImaginaryPart * aRightValue.mRealPart
		);
	}

	Complex operator / (const Complex& aRightValue) const
	{
		double squareNorm = aRightValue.mRealPart * aRightValue.mRealPart 
				+ aRightValue.mImaginaryPart * aRightValue.mImaginaryPart;
		return *this * Complex(aRightValue.mRealPart / squareNorm, - aRightValue.mImaginaryPart / squareNorm);
	}
};

	inline Complex operator * (int theLeftValue, const Complex& theRightValue)
	{
			return Complex(theLeftValue * theRightValue.mRealPart, 
					theLeftValue * theRightValue.mImaginaryPart);
	}
	inline Complex operator * (const Complex& theLeftValue, int theRightValue)
	{
			return Complex(theLeftValue.mRealPart * theRightValue, 
					theLeftValue.mImaginaryPart * theRightValue);
	}
	inline Complex operator * (double theLeftValue, const Complex& theRightValue)
	{
			return Complex(theLeftValue * theRightValue.mRealPart, 
					theRightValue.mImaginaryPart * theLeftValue);
	}
	inline Complex operator * (const Complex& theLeftValue, double theRightValue)
	{
			return Complex(theLeftValue.mRealPart * theRightValue, 
					theLeftValue.mImaginaryPart * theRightValue);
	}     

	inline Complex operator + (double aLeftValue, const Complex& aRightValue)
	{
			Complex result(aRightValue);
			result.mRealPart += aLeftValue;
			return result;
	}
inline Complex operator - (double aLeftValue, const Complex& aRightValue)
	{
			Complex leftValue(aLeftValue, 0.0);
			return leftValue - aRightValue;
	}

extern const Complex I;

#endif
