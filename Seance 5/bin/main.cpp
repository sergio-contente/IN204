#include "../include/complex.hpp"

int main(int argc, const char** argv) {
		Complex complexValueA = 3.3 + 5 * I;
		// I.print();
		Complex complex = 5 * I;
		// complex.print();
		// complexValueA.print();
		Complex complexValueB(2.2, 10);
		// complexValueB.print();
		complexValueA = complexValueA + complexValueB;
		// complexValueA.print();
		complexValueA = 1 + 10 * I;
		complexValueB = 5 + 2 * I;
		Complex complexValueC = complexValueA * complexValueB;
		Complex complexValueD = complexValueA / complexValueB;
		// complexValueA.print();
		// complexValueB.print();
		// complexValueC.print();
		// complexValueD.print();

		Complex complexE(1,0);
		std::cout << complexValueA << std::endl;
		std::cout << I << std::endl;
		std::cout << complexE << std::endl;

		Complex complexPolar(Polar(), 1, 30);
		std::cout << complexPolar << std::endl;
		return 0;
}
