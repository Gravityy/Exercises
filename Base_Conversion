#include <stdio.h>
#include <stdlib.h>

//DECİMAL BASE TO ANOTHER BASE

int main(int argc, char *argv[]) {
	//Base Conversion Program
	int number, base = 1, size = 2, count = 0,i;
	int* remainder = (int*) malloc(sizeof(int));

	printf("Enter a number:");
	scanf("%d", &number);
	do{
		printf("Enter a base number:");
		scanf("%d", &base);
		if(base < 0)
			printf("Please enter base number again.\n");
	}while(base <= 0);
	
	while(number>0){
		
		remainder[count] = number % base; 
		number = number / base;
		remainder = (int*)realloc(remainder, size * sizeof(int));
		size++;
		count++;
	}
	for(i=count-1; i >= 0 ; i--){
		printf("%d ", remainder[i]);
	}
	
	return 0;
}
