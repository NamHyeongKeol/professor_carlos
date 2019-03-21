#include<stdio.h>
#include<iostream>
using namespace std;
int a[1002][1002];
int main(){
    int n, m, i, j;
    scanf("%d%d",&n,&m);

    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
