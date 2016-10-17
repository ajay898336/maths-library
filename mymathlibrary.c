// MY maths library functions

#include <stdio.h>
#define PI 3.14159265
#define MAX 100
/*------------------------------------------------------------------------*/
// trigonometric functions
/*------------------------------------------------------------------------*/
// 1 sin function using taylor series
double sin(double x) {
	int i=1;
	double sin = x, t = x;
	if(x == 0 || x == 3.14)
		return 0;
	else if(x = 1.57)
		return 1;
	else	{
	while (!(t >= -0.0000000001 && t <= 0.000000001)) {      // for gatting each team multiply by -x^2/(((2 * i + 1) * (2 * i)))
		t = (-t) * (x * x) / ((2 * i + 1) * (2 * i));
		sin = sin + t;	
		i++;
	}
	return sin;
	}
}
/*------------------------------------------------------------------------*/
// 2 cos function using taylor series
double cos(double x) {
	int i = 1;
	double cos = 1, t = 1;
	while (!(t >= -0.0000000001 && t <= 0.000000001)) {
		t = (-t) * (x * x) / ((2 * i - 1) * (2 * i));    // // for gatting each team multiply by x^2/((2 * i - 1) * (2 * i))
		cos = cos + t;	
		i++;
	}
	return cos;
}
/*------------------------------------------------------------------------*/
// 3 tan function using taylor series
double tan(double x) {
	double tan;
	tan = sin(x) / cos(x);
	return tan;
}
/*------------------------------------------------------------------------*/
// hyperbolic functions
/*------------------------------------------------------------------------*/
// 4 sinh function using taylor series
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

/*------------------------------------------------------------------------*/
// 5 cosh function using taylor series
double cosh(double x) {
	int i = 1;
	double cosh = 1, t = 1;
	while (!(t >= -1.0000000001 && t <= 1.000000001)) {
		t = (t) * (x * x) / ((2 * i - 1) * (2 * i));
		cosh = cosh + t;	
		i++;
	}
	return cosh;
}

/*------------------------------------------------------------------------*/
// 6 tanh function using taylor series
double tanh(double x) {
	double tanh;
	tanh =	sinh(x) / cosh(x);
	return tanh;
}

/*------------------------------------------------------------------------*/
// invers function
/*------------------------------------------------------------------------*/
// 7 asin function using taylor series
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

/*------------------------------------------------------------------------*/
// 8 acos function using taylor series
double acos(double x) {
	
	double acos;
	acos = (PI / 2) - asin(x);
	return acos;
}

/*------------------------------------------------------------------------*/
// 9 atan function using taylor series
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
/*------------------------------------------------------------------------*/
//			exponential
/*------------------------------------------------------------------------*/
// 10 exponetial function using taylor series
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
/*------------------------------------------------------------------------*/
//				squarroot
/*------------------------------------------------------------------------*/
// function for square root
double sqrt(double x) {
	double y;
	double low = 0, high = x, t;
	double mid = (low + high) / 2;
	int i = 0;
	if(x < 0) {
		printf("invalid input");
		return;
	}
	while(i < MAX) {
		t = mid * mid;
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
		i++;
      	}
}
/*------------------------------------------------------------------------*/
//				log
/*------------------------------------------------------------------------*/
// function for logarthmic
double log(double x) {
	
	int n=1,i;
	double log =x-1;
	int t=1;
	if(x == 0) {
		printf("invalid input");
		return;
	}
	while(!(t >= -0.0000000001 && t <= 0.000000001)) {
		t=(-1) * power((x-1),n) / n;
		log = log +t;
		n = n + 2;
	}
	return log;
}
/*------------------------------------------------------------------------*/
// 				power
/*------------------------------------------------------------------------*/
// function for power 
double power(double p, int q) {
	double mul, power = 1;
	int i, div, k, neg;
	neg = q;
	if(neg < 0)
		q = (-1) * q;
	mul = p * p * p;
	k = q % 3;
	div = q / 3;
	if(div != 0)
		for(i = 0; i < div; i++)
			power = power * mul;
	if(k < 3 && k != 0) {
		if(k == 1)
			power = power * p;
		else
			power = power * p * p;
		}
	if(neg < 0)
		return (1 / power);
	else
		return power;
} 
/*------------------------------------------------------------------------*/
//				factorial
/*------------------------------------------------------------------------*/
// function for factorial using reccursion
int fact(unsigned int x) {
	int k = 1;
	if (x == 0)
		return 1;
	k = x * fact(x - 1);
	return k;
}
/*------------------------------------------------------------------------*/
//				floor
/*------------------------------------------------------------------------*/
// function for floor
double floor(double x) {
	int y=(int) x;
	int i;
	if (i<x)
		return (double)(++i);
	else 	if(i>x)
			return (double)(i);
		else
			return x;
}
/*------------------------------------------------------------------------*/
//				ceil
/*------------------------------------------------------------------------*/
// function for ceil		
double ceil(double x) {
	int y=(int)x;
	int i;
	if(i<x)
		return (double)(++i);
	else 	if(i>x)
			return (double)(i);
		
		else 
			return x;
}
// function for absolute return value
double fabs(double x) {
	if(x < 0)
		return (- x);
	else
		return x;
}













