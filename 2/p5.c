#include<stdio.h>
int main (void){
  int y;

  printf("西暦を入力！\n");
  scanf("%d",&y );

  if((y%4==0 && y%100==0 && y%400==0) || (y%4==0 && y%100!=0)){
    printf("うるう年である\n");
  }else{
    printf("うるう年ではありません\n");
  }
  return 0;
}
