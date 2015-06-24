// Program to print value and address of an integer variable

#include <stdio.h>

int main(){

	int i = 2;

	printf("\nAddress of i = %d", &i);
	printf("\nValue of i = %d", i);
}