#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	//Linear Search
	int i=0, size = 1, j,num;
	int control;
	int *array = (int*)malloc(sizeof(int));
	do{
		printf("Enter a number(if you want to stop adding numbers, please press '0'):");
			scanf("%d", &control);
		if(control == 0)
			break;
		array[i] = control;	
    		size++;	 
		array = (int*)realloc(array, sizeof(int)*size);
		i++;
	}while(1);
	
	for(j=0; j < i; j++){
		printf("array[%d]= %d\n", j, array[j]);
	}
	
	printf("Enter a number to search:");
	scanf("%d", &num);
	
	for(j=0; j <i ; j++){
		if(array[j] == num){
			printf("The number you've searched is at %d. index.\n", j);
			return 1;
		}	
	}
	printf("We couldn't find the number you're looking for :/ . \n");
	return 0;
}
