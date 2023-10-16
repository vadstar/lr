#include <math.h>
#include <corecrt_math_defines.h>

/*�������: ��������� ���� ����������� �������� ��� ��������� ����� = � / 2 + 2�*n/3, �� n ���� ��� ���� �����, 
���� �� � ������� ���� ����
�������� ����� ����� ����������� ������ �/��� ����������� ����������/������� */

double task1(double d, double alpha) {
	double output;

	output = (sin(M_PI / 2.0 + 3.0 * d) /  
		(1 - sin(3 * alpha - M_PI)));
	return output;
}