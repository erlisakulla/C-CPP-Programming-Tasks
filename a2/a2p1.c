/*
CH-230-A
a2p1.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include<stdio.h>

int main(){
	
	double a, b;
	scanf("%lf %lf", &a, &b);
	double sumd, differenced, squared;
	sumd = a + b;
	differenced = a - b;
	squared = a*a;	

	int c, d;
	scanf("%d %d", &c, &d);
	int sumi, producti;
	sumi = c + d;
	producti = c * d;
	
	char e, f;
	getchar();
	scanf("%c %c", &e, &f);
	char sum1, product1;
	int sum2, product2;
	sum1 = e + f;
	product1 = e * f;
	sum2 = e + f;
	product2 = e * f;
	
	printf("sum of doubles=%lf\n", sumd);
	printf("difference of doubles=%lf\n", differenced);
	printf("square=%lf\n", squared);
	printf("sum of integers=%d\n", sumi);
	printf("product of integers=%d\n", producti);	
	printf("sum of chars=%d\n", sum2);
	printf("product of chars=%d\n", product2);	
	printf("sum of chars=%c\n", sum1);
	printf("product of chars=%c\n", product1);
	
	return 0;
}
