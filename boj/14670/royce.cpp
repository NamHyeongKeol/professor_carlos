#include<stdio.h>
#include<iostream>
using namespace std;
int n,r;
int a[102][2];
int b[102];
int c[102][102];
int main(){
    int i,j,k,die;
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        scanf("%d %d",&a[i][0],&a[i][1]);
    }

    scanf("%d",&r);

    for(i=1;i<=r;i++){
        scanf("%d",&b[i]);
        for(j=1;j<=b[i];j++){
            scanf("%d",&c[i][j]);
        }
    }

    // for(i=1;i<=n;i++){
    //     printf("%d,%d  ",a[i][0],a[i][1]);
    // }
    for(i=1;i<=r;i++){
        for(j=1;j<=b[i];j++){
        	die = 1;
            for(k=1;k<=n;k++){
            	if(c[i][j] == a[k][0]){
            		die = 0;
            		break;
            	}
            }
            if(die == 1){
            	break;
            }
        }
        if(die == 1){
        	printf("YOU DIED\n");
        } else {
	        for(j=1;j<=b[i];j++){
	            for(k=1;k<=n;k++){
	            	if(c[i][j] == a[k][0]){
	            		printf("%d ",a[k][1]);
	            	}
	            }
	        }
        	printf("\n");
        }
    }
}
