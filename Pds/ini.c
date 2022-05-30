#include <stdio.h>

int sum(int n,int ans){
	if(n == 0)
		return ans;
	printf("%d\n",n);
	int k = n%10;
	if(k <= 5)
		ans += k;
	return sum(n/10,ans);
}


int main(){
	int n;
	scanf("%d",&n);
	printf("%d",sum(n,0));
	return 0;
}
