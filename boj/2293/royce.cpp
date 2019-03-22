#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int a[102];
int b[10002];
int n, k, i, j, token;
int main(){
    scanf("%d%d",&n,&k);

    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }

    // sort(a+1,a+n+1);

	b[0] = 1;
    for(i=1;i<=n;i++){
        for(j=1;j<=k;j++){
        	if(j>=a[i]){
                token = b[j-a[i]];
            } else {
            	token = 0;
            }
            b[j] += token;
        }
    }

    printf("%d\n", b[k]);
}
