#include<stdio.h>
#include<limits.h>

int main(void){
	unsigned char x = 1;
	signed char y = 1;
	unsigned short z = 1;
	signed short a = 1;

	/*unsigned char型のサイズ及び最小値、最大値*/
	printf("---------\n");
	printf("unsigned char = %ld bytes\n",sizeof(x));
	printf("unsigned char (min value) = %d\n", UCHAR_MAX);

	/*signed char型のサイズ及び最小値、最大値*/
	printf("----------\n");
	printf("signed char = %ld bytes\n",sizeof(y));
	printf("signed char (min value) = %d\n", SCHAR_MIN);
	printf("signed char (max value) = %d\n", SCHAR_MAX);

	/*unsigned short型のサイズ及び最小値、最大値*/
	printf("----------\n");
	printf("unsigned short = %ld bytes\n", sizeof(z));
	printf("unsigned short (mac value) %d\n", USHRT_MAX);

	/*signed short型のサイズ及び最小値、最大値*/
	printf("----------\n");
	printf("signed short = %ld bytes\n", sizeof(a));
	printf("signed short = (min value) %d\n",SHRT_MIN);
	printf("signed short = (max value) %d\n",SHRT_MAX);
	return 0;
}
