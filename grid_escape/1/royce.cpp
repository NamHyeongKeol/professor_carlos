#include<stdio.h>
int t,r,c,k;
int a[101][101];
int main(){
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d%d%d",&r,&c,&k);
        if(r*c-1 == k){
            printf("Case #%d: IMPOSSIBLE\n",(i+1));
            continue;
        }
        printf("Case #%d: POSSIBLE\n",(i+1));
		if(c==1){
			if(k==r*c){
				for(int j=0;j<r;j++){
					printf("S\n");
				}
			}
			else {
				printf("S\nN\n");
				for(int j=2;j<r*c-k;j++){
					printf("N\n");
				}
				for(int j=r*c-k;j<r*c;j++){
					printf("S\n");
				}
			}
			continue;
		}
		if(r*c - k ==0){
			for(int j=0;j<r;j++){
				for(int l=0;l<c;l++){
					printf("S");
				}
				printf("\n");
			}
			continue;
		}
        int q = (r*c - k) / c;
        int re = (r*c - k) % c;
        if(q>=1){
            for(int j=0;j<q;j++){
                for(int l=0;l<c;l++){
                    if(j==0) {
                        if(l==0) {
                            printf("E");
                        } else if(l==1) {
                            printf("W");
		    			} else {
		    				printf("W");
		    			}
                    } else {
                        printf("N");
                    }
                }
                printf("\n");
            }
            if(re>0){
                for(int l=0;l<re;l++){
                    printf("N");
                }
                for(int l=re;l<c;l++){
                    printf("S");
                }
                printf("\n");
                for(int j=q+1;j<r;j++){
                    for(int l=0;l<c;l++){
                        printf("S");
                    }
		        	printf("\n");
                }
            } else {
                for(int j=q;j<r;j++){
                    for(int l=0;l<c;l++){
                        printf("S");
                    }
		        	printf("\n");
                }
            }
        } else {
            for(int l=0;l<re;l++){
		    	if(l<2){
                    if(l==1) {
                	    printf("EW");
                    }
		    	} else {
		    		printf("W");
		    	}
            }
            for(int l=re;l<c;l++){
                printf("S");
            }
		    printf("\n");
            for(int j=q+1;j<r;j++){
                for(int l=0;l<c;l++){
                    printf("S");
                }
		    	printf("\n");
            }
        }
    }
    return 0;
}
