#include<stdio.h>

int main(){
    int t, r, c, k, j;    
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d%d%d",&r,&c,&k);
        
        if(k==r*c-1){
            printf("Case #%d: IMPOSSIBLE\n",(i+1));
        }
        else{
            printf("Case #%d: POSSIBLE\n",(i+1));
            if(r==1){
                for(j=0;j<k;j++){
                    printf("S");
                }
                if(j<c){printf("E");}
                for(j=0;j<c - k - 1;j++){
                    printf("W");
                }
                printf("\n");
            }
            else if(c==1){
                for(j=0;j<k;j++){
                    printf("W\n");
                }
                if(j<r){printf("S\n");}
                for(j=0;j<r - k - 1;j++){
                    printf("N\n");
                }
            }
            else{
                for(j=0;j<k;j++){
                    printf("W");
                    if((j+1)%c==0){
                        printf("\n");
                    }
                }
                if((j+1)%c==0){
                    printf("S\n");
                    j++;
                }
                for(;j<r * c;j++){
                    if((j+1)%c==0){
                        printf("W\n");
                    }
                    else{
                        printf("E");
                    }
                }
            }
        }
    }
}
