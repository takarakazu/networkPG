#include <stdio.h>

int sowa(){
	int i, n;
	int ans;
	
	printf("任意の数を入力してください\n");
	scanf("%d", &n);
	
	ans = 0;
	for(i=0; i <= n; i++){
		ans += i;
	}
	
	return ans;
}

int main(void){
	int ans;
	
	ans = sowa();
	printf("The answer is %d.\n", ans);
	
	return 0;
}