#include<stdio.h>
int arr[100005];
int main(){
	int n, m, i;
	scanf("%d%d",&n,&m);
	arr[0]=0;
	for(i=1;i<=n;i++){
		scanf("%d",&arr[i]);
		arr[i]+=arr[i-1];
	}
	for(i=0;i<m;i++){
		int x, y;
		scanf("%d%d",&x,&y);
		printf("%d\n",arr[y]-arr[x-1]);
	}
}
