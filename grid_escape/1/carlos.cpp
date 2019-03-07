#include<stdio.h>
int tcn;
int r,c,k;
char ans[110][110];
int main(){
    scanf("%d",&tcn);
    for(int tc=1;tc<=tcn;tc++){
        scanf("%d%d%d",&r,&c,&k);
        int p=r*c-k;
        if(p==1){
            printf("Case #%d: IMPOSSIBLE\n",tc);
            continue;
        }
        printf("Case #%d: POSSIBLE\n",tc);
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                ans[i][j]='S';
            }
            ans[i][c]=0;
        }
        for(int i=0;i<r;i++){
            if(p==0)break;
            for(int j=0;j<c;j++){
                if(p==0)break;
                if(i==0&&j==0&&c==1){
                    ans[i][j]='S';
                }
                else if(i==0&&j==0){
                    ans[i][j]='E';
                }
                else if(j==0){
                    ans[i][j]='N';
                }
                else{
                    ans[i][j]='W';
                }
                p--;
            }
        }
        for(int i=0;i<r;i++){
            printf("%s\n",ans[i]);
        }
    }
    return 0;
}
