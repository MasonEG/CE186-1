#ifndef _DOTPROD

#define _DOTPROD
double dot(double a[], doubleb[], int length);
#endif

double dot(double a[], double b[], int length) {
	int i;
	double sum;
	for(i=1; i <= length; i++) {
		sum = sum + a[i]*b[i];
	}
	return sum;
}