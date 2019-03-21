#include<stdio.h>
#include <iostream>
using namespace std;
int a[1025][1025];
int main(){
    int n, m, i, j;
    scanf("%d%d",&n,&m);

    for(int i=0;i<=n;i++)a[i][0]=0;
    for(int i=0;i<=m;i++)a[0][i]=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++) {
            scanf("%d", &a[i][j]);
            a[i][j] += max(a[i-1][j], a[i][j-1]);
        }
    }
    printf("%d",a[n][m]);
}
