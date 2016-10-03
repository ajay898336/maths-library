#include <stdio.h>
#define PI 3.14159265
#define MAX 100
double sin(double x) {
	
	int i=1;
	double sin = x, t = x;
	while (!(t >= -0.0000000001 && t <= 0.000000001)) {
		t = (-t) * (x * x) / ((2 * i + 1) * (2 * i));
		sin = sin + t;	
		i++;
	}
	return sin;
}
double cos(double x) {
	int i = 1;
	double cos = 1, t = 1;
	while (!(t >= -0.0000000001 && t <= 0.000000001)) {
		t = (-t) * (x * x) / ((2 * i - 1) * (2 * i));
		cos = cos + t;	
		i++;
	}
	return cos;
}
double tan(double x) {
	double tan;
	tan = sin(x) / cos(x);
	return tan;
}
double sinh(double x) {
	int i = 1;
	double sinh = x, t = x;
	while (!(t >= -0.0000000001 && t <= 0.000000001)) {
		t = (t) * (x * x) / ((2 * i + 1) * (2 * i));
		sinh = sinh + t;	
		i++;
	}
	return sinh;
}
double cosh(double x) {
	int i = 1;
	double cosh = 1, t = 1;
	while (!(t >= -1.0000000001 && t <= 1.000000001)) {
		t = (t) * (x * x) / ((2 * i - 1) * (2 * i));
		cosh = cosh + t;	
		i+;
	}
	return cosh;
}
double tanh(double x) {
	double tanh;
	tanh =	sinh(x) / cosh(x);
	return tanh;
}
double asin(double x) {
	double asin = x, t = x;
	int i = 1;
	while (!(t >= -0.0000001 && t <= 0.0000001)) {
		t = ((t) * (x * x) * (2 * i - 1) * (2 * i - 1)) / ((2 * i + 1) * (2 * i));
		asin = asin + t;	
		i++;
	}
	return asin;
}
double acos(double x) {
	
	double acos;
	acos = (PI / 2) - asin(x);
	return acos;
}
double atan(double x) {
	double atan = x;
	int i = 1;
	double t = x;
	while (!(t >= -0.001 && t <= 0.001)) {
		t = (-t) * (x * x) * (2 * i - 1) / (2 * i + 1);
		atan = atan + t;	
		i++;
	} 
	return atan;
}
double exp(double x) {
	double exp = 1;
	double t = 1;
	int i = 1;
	while (!(t >= -0.001 && t <= 0.001)) {
		t = (t * x) / i;
		exp = exp + t;
		i++;
	}	
	return exp;
}

double fabs(double x) {
	if(x < 0)
		return (- x);
	else
		return x;
}
double sqrt(double x) {
	double y;
	double low = 0, high = x, t;
	double mid = (low + high) / 2;
	int i = 0;
	while(c < MAX) {
		b = mid * mid;
		if(t == x) {
	        	return mid;
	           	break;
	        } 
		else {
	        	if(mid * mid > x) {
	        	high = mid;
	                mid = (low + high) / 2;
	                } 
			else {
               			low = mid;
               			mid = (low + high) / 2;
            		}
         	}
		c++;
      	}
}

double power(double p, int q) {
	double mul, pow = 1;
	int i, div, k, neg;
	neg = q;
	if(neg < 0)
		q = (-1) * q;
	mul = p * p * p;
	k = q % 3;
	div = q / 3;
	if(div != 0)
		for(i = 0; i < div; i++)
			po = po * mul;
	if(k < 3 && k != 0) {
		if(k == 1)
			po = po * p;
		else
			po = po * p * p;
		}
	if(neg < 0)
		return (1 / po);
	else
		return po;
} 																																											   int fact(unsigned int x) {
	int k = 1;
	if (x == 0)
		return 1;
	k = x * fact(x - 1);
	return k;
}	













