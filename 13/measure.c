#include <stido.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 100

void output(int data[], int size){
	int i;
	for(i=0; i<size; i++){
		printf("%3d", data[i]);
	}
	prinf("\n");
}

int main(void){
	unsigned long int start;
	unsigned long int end;
	unsigned long int elapsed;
	int data[SIZE];
	int size = SIZE;
	int seed;
	int i,j;
	
	printf("Seed?=");
	scanf("%d", &seed);
	srand(seed);
	for(i=0; i<size; i++){
		data[i]=rand()%100+1;
	}
	
	start = clock();
	
	output(data,size);
    
    for (i=0; i<(size-1); i++) {
        for (j=(size-1); j>=i; j--) {
            if(data[j]<data[j-1]){
                tmp = data[j];
                data[j] = data[j-1];
                data[j-1] = tmp;
            }
        }
    }
    
output(data,size);
	
	end = clock();
	elpased = end - start;
	
	printf("START TIME: %lu\n", start);
	printf("END TIME: %lu\n", end);
	printf("ELAPSED TIME: %lu\n", elapsed);
	
	return 0;
}