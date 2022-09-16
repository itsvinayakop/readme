/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void) {
	int carry,i,j,x,lenArr;
	int N = 100;          // Factorial of 100
	int Arr[158] = {0};   // Factorial of 100 is approximately 9 * 10^157  => 157 digits 
	
	Arr[0] = 1;
	lenArr = 1; // Number of elements in Arr
	
	carry = 0;
	for(i=1;i<=N;i++) {
		for(j=0;j<lenArr;j++) {
			x = Arr[j]*i + carry;
			Arr[j] = x%10;
			carry = x/10;
		}
		while(carry>0) {
			Arr[lenArr] = carry%10;
			carry = carry/10;
			lenArr++;
		}
	}
	
	for(i=lenArr-1;i>=0;i--)
		printf("%d",Arr[i]);
		
	
	return 0;
}