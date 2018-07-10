#include <stdio.h>

int main(void){
	int date[] = { 41, 69, 28, 33, 23, 7, 52, 13, 55, 9};
	int maximum;
	int i;
	
	maximum = date[0];
	for(i=1; i<10; i++){
		if( maximum < date[i] ){
			maximum = date[i];
		}
	}
	
	printf("The maximum mumber is %d.\n", maximum);
	
	return 0;
}