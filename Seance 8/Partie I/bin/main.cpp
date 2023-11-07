#include "../include/counter.hpp"

int main(int argc, char const *argv[])
{
	ForwardCounter forward(7);
	VerboseForwardCounter verboseforward(5);
	BackwardCounter backward(7);
	BiDiCounter	bidi(10);

	forward.testNext(forward);
	verboseforward.testNext(verboseforward);
	backward.testNext(backward);
	bidi.testNext(bidi);

	return 0;
}
