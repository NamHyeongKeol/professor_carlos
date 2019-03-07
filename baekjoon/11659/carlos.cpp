#include<stdio.h>
int n,m;
int a[100100];
int sum[100100];
int main(){
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum[i+1]=sum[i]+a[i];
    }
    for(int i=0;i<m;i++){
        int x,y;
        scanf("%d%d",&x,&y);
        printf("%d\n",sum[y]-sum[x-1]);
    }
    return 0;
}
