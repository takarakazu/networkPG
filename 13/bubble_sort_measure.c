#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 55000

void output(int data[], int size){
	int i;
	for(i=0; i<size; i++){
		printf("%4d", data[i]);
	}
	printf("\n");
}

int main(void){
	unsigned long int start;
	unsigned long int end;
	unsigned long int elapsed;
	int data[SIZE];
	int size = SIZE;
	int seed;
	int i,j,k;
	int tmp;
	
	printf("Seed?=");
	scanf("%d", &seed);
	for(k=0;k<10;k++){
	srand(seed);
	for(i=0; i<size; i++){
		data[i]=rand()%100+1;
	}
	
	//output(data,size);
	
	start = clock();
	
    for (i=0; i<(size-1); i++) {
        for (j=(size-1); j>=i; j--) {
            if(data[j]<data[j-1]){
                tmp = data[j];
                data[j] = data[j-1];
                data[j-1] = tmp;
            }
        }
    }
    
    end = clock();
	elapsed = end - start;
	
	//output(data,size);
	printf("now count:%d\n", k+1);
	printf("START TIME: %lu\n", start);
	printf("END TIME: %lu\n", end);
	printf("ELAPSED TIME: %lu\n", elapsed);
	}
	
	return 0;
}