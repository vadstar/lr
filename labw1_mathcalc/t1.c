#include <math.h>
#include <corecrt_math_defines.h>

/*примітка: программа може неправильно поводити при значеннях альфа = пі / 2 + 2пі*n/3, де n будь яке ціле число, 
тому що в дільнику буде нуль
запобігти цьому можна скороченням виразу і/або прописаними перевірками/умовами */

double task1(double d, double alpha) {
	double output;

	output = (sin(M_PI / 2.0 + 3.0 * d) /  
		(1 - sin(3 * alpha - M_PI)));
	return output;
}