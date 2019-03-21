#include<stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
int a[1025], b[10001];
int main(){
    int n, k, i, j;
    scanf("%d%d",&n,&k);
    b[0]=1;
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    sort(a,a+n);
    for(int i=0;i<n;i++){
        for(int j=a[i];j<=k;j++) {
            b[j] +=b[j-a[i]];
        }
    }
    printf("%d",b[k]);
}
