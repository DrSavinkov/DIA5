#include <stdlib.h>
#include <random>

long double rnd()
{
	return ((long double)(rand()))/((long double)(RAND_MAX));
}
