//program to add two rational numbers

#include <stdio.h>
#include <conio.h>

typedef struct{
	int numerator;
	int denominator;
	} rational;

rational makerational(int,int);
rational add_rational(rational,rational);

int main()
{
	int a1,b1,a2,b2;
	printf("Enter numerator and denominator of first rational number\n");
	scanf("%d%d",&a1,&b1);
	printf("Enter numerator and denominator of second rational number\n");
	scanf("%d%d",&a2,&b2);
	rational r1=makerational(a1,b1);
	rational r2=makerational(a2,b2);
	rational sum=add_rational(r1,r2);
	printf("the result is %d/%d",sum.numerator,sum.denominator);
}	

rational makerational(int a, int b)
{
	rational r_number;
	r_number.numerator=a;
	r_number.denominator=b;
	return r_number;
}

rational add_rational(rational a, rational b)
{
	rational result;
	result.numerator=(a.numerator*b.denominator+b.numerator*a.denominator);
	result.denominator=(a.denominator*b.denominator);
	return result;
}








