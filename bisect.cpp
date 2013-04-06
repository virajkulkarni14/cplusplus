// Program to implement Bisection Method
#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

class bisect {
	public :
	float x0, x1, x2, coeff[10], error;
	int i, j, iterations;
	float f(float );
};
/*declarations end*/

float bisect :: f(float p)
{
	float sum = 0;
	for(i = j; i>=0; i--)
		sum += coeff[i] * pow(p, i);
	return(sum);
}
/*Function f ends*/
void main(void)
{
	clrscr();
	int i;
	bisect o1;

	cout<<"Enter total number of terms.\n";
	cin>>o1.j;

	for(i = o1.j - 1; i >= 0; i--)
	{
		cout<<"Enter coefficient.\n";
		cin>>o1.coeff[i];
	}

	cout<<"Enter two guesses.\n";
	cin>>o1.x0>>o1.x1;

	if(o1.f(o1.x0) == 0)
	{
		cout<<"Root = "<<o1.x1;
		getch();
		exit(0);
	}

	cout<<"Enter max. allowable error.\n";
	cin>>o1.error;

	if(o1.f(o1.x0) * o1.f(o1.x1) <= 0)
	{
		while( fabs ( (o1.x1 - o1.x0) / o1.x1) > o1.error)
		{
			o1.x2 = (o1.x1 + o1.x0) / 2;
			if(o1.f(o1.x0) * o1.f(o1.x2) <= 0)
				o1.x1 = o1.x2;
			else
				o1.x0 = o1.x2;
			o1.iterations++;
		}
	}
	else
	{
		cout<<"Wrong initial guesses.\n"
		getch();
		exit(0);
	}

	cout<<"Roots = "<<o1.x1;
	cout<<"Iterations = "<<o1.iterations;
	getch();

}