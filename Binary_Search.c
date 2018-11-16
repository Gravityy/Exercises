#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	//Binary Search
	int number, count = 0, i;
	int *array = (int*)malloc(sizeof(int));
	printf("Enter numbers for array(to exit press 0):");
	while(1){
		scanf("%d", &array[count]);
		if(array[count] == 0)break;
		count++;
		array = (int*)realloc(array,sizeof(int)*(count+1));
	}	
	for(i=0; i<count;i++)
		printf("%d ", array[i]);
		printf("\n");
	printf("Enter a number to search:");
	scanf("%d", &number);
	printf("The number you're looking for is at %d.index.\n", BinarySearch(array, count, number));	
	return 0;
}

int BinarySearch(int *array, int count, int number){
	int low = 0;
	int mid = 0;
	int high = count-1;
	while(low<=high){
		mid = (high+low)/2;
		if(array[mid] == number)
			return mid;
		if(array[mid] < number){
			low = mid + 1;	
		}else
		high = mid - 1;
	}			
}
