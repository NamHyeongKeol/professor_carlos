#include<stdio.h>
#include<iostream>
using namespace std;
int a[1002][1002];
int b[1002][1002];
int main(){
    int n, m, i, j;
    scanf("%d%d",&n,&m);

    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
        	int zz = max(max(b[i-1][j], b[i][j-1]), b[i-1][j-1]);
            b[i][j] = zz + a[i][j];
        }
    }
	printf("%d", b[n][m]);
}
