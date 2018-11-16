#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	//FIBONACCI NUMBERS
	
	int n, i, size = 3;
	int *fibonacci = (int*)malloc(3*sizeof(int));	
	fibonacci[0] = 1;
	fibonacci[1] = 1;
	printf("Enter a number: ");
	do{ 
		scanf("%d", &n);
	if(n <= 0)
		printf("Enter a number again.\n");
	}while(n <= 0);
	
	
	for(i=2; i < n ; i++){
		fibonacci[i] = fibonacci[i-2] + fibonacci[i-1];
		size++;
		printf("fibonacci[%d]: %d\n",i,fibonacci[i]);
		fibonacci = (int*)realloc(fibonacci, size * sizeof(int));
		
	}
	for(i =0; i<n;i++){
		printf("%d ", fibonacci[i]);
	}
	
	return 0;
}
