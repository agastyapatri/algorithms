/*	Program to find the factorial of a number	*/
#include <stdio.h>
#include <string.h>

int main(){
	char name[8] = "Agastya";
	int n = sizeof(name)/sizeof(name[0]); 
	char name2[n] = strcpy(name);
	for (int i = 0; i<n; i++) {
		printf("%c ", name2[i]);
	}
	return 0;
}	
