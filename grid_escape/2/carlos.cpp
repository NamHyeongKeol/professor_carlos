#include<stdio.h>
int tcn;
int k;
int m[1010];
int main(){
    scanf("%d",&tcn);
    for(int tc=1;tc<=tcn;tc++){
        scanf("%d",&k);
        for(int i=0;i<=k;i++){
            scanf("%d",&m[i]);
        }
        int ans=0;
        int dir=0;
        for(int i=0;i<k;i++){
            if(dir==0){
                if(m[i+1]>m[i])dir=1;
                else if(m[i+1]<m[i])dir=-1;
            }
            else if(dir==1){
                if(m[i+1]<m[i]){
                    dir=0;
                    ans++;
                }
            }
            else if(dir==-1){
                if(m[i+1]>m[i]){
                    dir=0;
                    ans++;
                }
            }
        }
        ans--;
        printf("Case #%d: %d\n",tc,ans);
    }
    return 0;
}
