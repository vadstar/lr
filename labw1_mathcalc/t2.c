#include <math.h>
#include <corecrt_math_defines.h>


double task2(double alpha) {
	double output;

	output = tan(M_PI - (1.25 * M_PI + 1.5 * alpha));
	return output;
}