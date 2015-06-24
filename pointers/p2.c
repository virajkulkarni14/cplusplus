// Value address operator

#include <stdio.h>

int main(){
	int i = 5;
	printf("\nAddress of i = %u", &i);
	printf("\nValue of i = %d", i);
	printf("\nValue at address of i = %d", *(&i)); //indirection operator

}