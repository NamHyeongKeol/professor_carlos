#include<cstdio>
int n,m;
int a[1030][1030];
int sum[1030][1030];
int main(){
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            sum[i+1][j+1]=sum[i+1][j]+sum[i][j+1]-sum[i][j]+a[i][j];
        }
    }
    for(int i=0;i<m;i++){
        int xa,ya,xb,yb;
        scanf("%d%d%d%d",&xa,&ya,&xb,&yb);
        int res=sum[xb][yb]-sum[xb][ya-1]-sum[xa-1][yb]+sum[xa-1][ya-1];
        printf("%d\n",res);
    }
    return 0;
}
