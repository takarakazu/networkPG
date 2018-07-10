#include <stdio.h>

int mysum(data[]){
	int sum;
	int i;
	
	sum = date[0];
	for(i=1; i<10; i++){
		sum = sum + date[i];
	}
	
	return sum;
}

int main(void){
	int date[] = { 41, 69, 28, 33, 23, 7, 52, 13, 55, 9};
	int sum;
	
	sum = mysum(data);
	
	printf("The sum mumber is %d.\n", sum);
	
	return 0;
}