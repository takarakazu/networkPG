#include<stdio.h>
int main(void){
  int a=1;
  int b=1;
  int c=1;
  int z=0;

  z = (a>=0 || (b==1 && c>2));
  printf("真偽値%d", z);
}
