#include <stdio.h>

int mysum(int data[]){
	int sum;
	int i;
	
	sum = data[0];
	
	for(i=1; i<10; i++){
		sum = sum + data[i];
	}
	
	return sum;
}

int main(void){
	int data[] = { 41, 69, 28, 33, 23, 7, 52, 13, 55, 9};
	int sum;
	
	printf("The sum mumber is %d.\n", mysum(data));
	
	return 0;
}