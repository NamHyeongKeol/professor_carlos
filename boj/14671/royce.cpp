#include<stdio.h>
#include<iostream>
using namespace std;
int n,m,k;
int a[1002][1002];
int b[100002][2];
int i,j,k,oo,oe,eo,ee;
int main(){
    scanf("%d%d%d",&n,&m,&k);

    for(i=1;i<=k;i++){
        scanf("%d %d",&b[i][0],&b[i][1]);
        if(b[i][0] % 2 == 1 && b[i][1] % 2 == 1){
            oo +=1;
        } else if(b[i][0] % 2 == 1 && b[i][1] % 2 == 0){
            oe +=1;
        }
        } else if(b[i][0] % 2 == 0 && b[i][1] % 2 == 1){
            eo +=1;
        }
        } else if(b[i][0] % 2 == 0 && b[i][1] % 2 == 0){
            ee +=1;
        }
    }

    if(oo>0 && oe>0 && eo>0 && ee>0){
        printf("YES");
    } else {
        printf("NO");
    }
}

