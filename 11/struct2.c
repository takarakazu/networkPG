

#include <stdio.h>
#include <stdlib.h>

struct gakusei{
	int gakuban;
	int kamoku1;
	int kamoku2;
	float heikin;
};

int main(void){
	struct gakusei ns_2nen[4];
	
	int i;
	
	for(i=0; i<4; i++){
		printf("Gakuban? = ");
		scanf("%d", &ns_2nen[i].gakuban);
		printf("kamoku1? = ");
		scanf("%d", &ns_2nen[i].kamoku1);
		printf("kamoku2? = ");
		scanf("%d", &ns_2nen[i].kamoku2);
	}
	
	for(i=0; i<4; i++){
		ns_2nen[i].heikin = (float)(ns_2nen[i].kamoku1+ns_2nen[i].kamoku2)/2;
	}
	
	for(i=0; i<4; i++){
		printf("gakuban = %d heikin = %lf\n", ns_2nen[i].gakuban, ns_2nen[i].heikin);
	}
	
	return 0;
}

//s1732098@mv11b:~> gcc struct2.c
//s1732098@mv11b:~> ./a.out
//Gakuban? = 1
//kamoku1? = 14
//kamoku2? = 17
//Gakuban? = 4
//kamoku1? = 50
//kamoku2? = 22
//Gakuban? = 3
//kamoku1? = 44
//kamoku2? = 56
//Gakuban? = 7
//kamoku1? = 99
//kamoku2? = 11
//gakuban = 1 heikin = 15.500000
//gakuban = 4 heikin = 36.000000
//gakuban = 3 heikin = 50.000000
//gakuban = 7 heikin = 55.000000