#include <stdio.h>
#include <stdlib.h>

#define SIZE 20

void output(int data[], int size){
	int i;
	for(i=0;i<size;i++){
		printf("%3d", data[i]);
	}
	printf("\n");
}

int main(void){
	int data[SIZE];
	int size = SIZE;
	int seed;
	int i,j,tmp;
	
	printf("Seed?=");
	scanf("%d", &seed);
	srand(seed);
	for(i=0;i<size;i++){
		data[i]=rand()%100+1;
	}
	
	output(data, size);
	
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
    
    return 0;
}

//s1732098@mv11b:~/kadai/networkPG/13> gcc bubble_sort.c
//s1732098@mv11b:~/kadai/networkPG/13> ./a.out
//Seed?=99
// 73 25 50 14 70  1 14  8 75 18 72 25 17 74 18 59 21 95 87 46
//  8 14 14 17 18 18 21 25 25 46 50 59 70 72 73 74 75 87 99 95
