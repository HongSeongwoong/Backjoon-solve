#include<iostream>
#include<cmath>
#define PI 3.14159265358979323846

int main() {
	double r, s1, s2;
	scanf("%lf", &r);
	s1 = PI * r*r;
	s2 = 2 * r*r;
	printf("%.6lf\n", s1);
	printf("%.6lf\n", s2);
}