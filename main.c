/*	Program to find the factorial of a number	*/
#include <stdio.h>

int factorial(int n){
	int t1 = 1;
	for(int i=1; i<=n; i++){
		t1 = t1*i;
	}
	printf("The factorial of %d is %d\n", n, t1);
	return t1;
}

int fibonacci(int n){
	int t1 = 0, t2 = 1;
	int t3;
	for(int i = 0; i < n; i++){
		t3 = t1 + t2;
		t1 = t2;
		t2 = t3;
	}
	printf("The fibonacci sequence up to %d is %d\n", n, t3);
	return t3; 
}

int main(){
	int n; 
	printf("Enter a number:	");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++){
		fibonacci(i);	
	}

	return 0;
}	
