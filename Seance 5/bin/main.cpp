#include "../include/complex.hpp"

int main(int argc, const char** argv) {
		Complex complexValueA = 3.3 + 5 * I;
		I.print();
		Complex complex = 5 * I;
		complex.print();
		complexValueA.print();
		Complex complexValueB(2.2, 10);
		complexValueB.print();
		complexValueA = complexValueA + complexValueB;
		complexValueA.print();
		complexValueA = 1 + 10 * I;
		complexValueB = 5 + 2 * I;
		Complex complexValueC = complexValueA * complexValueB;
		Complex complexValueD = complexValueA / complexValueB;
		complexValueA.print();
		complexValueB.print();
		complexValueC.print();
		complexValueD.print();
		return 0;
}
