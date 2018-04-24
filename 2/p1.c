#include<stdio.h>
#include<limits.h>

int main(void){
	short int x = 1;
	int y = 1;
	long int z = 1;
	
	/*short int型のサイズ及び最小値、最大値*/
	printf("---------\n");
	printf("short int = %ld bytes\n",sizeof(x));
	printf("short int (min value) = %d\n", SHRT_MIN);
	printf("short int (max value) = %d\n", SHRT_MAX);
	
	/*int型のサイズ及び最小値、最大値*/
	printf("----------\n");
	printf("int = %ld bytes\n",sizeof(y));
	printf("int (min value) = %d\n", INT_MIN);
	printf("int (max value) = %d\n", INT_MAX);
	
	/*long int型のサイズ及び最小値、最大値*/
	printf("----------\n");
	printf("long int = %ld bytes\n", sizeof(z));
	printf("long int (min value) %ld\n", LONG_MIN);
	printf("long int (mac value) %ld\n", LONG_MAX);
	
	return 0;
}