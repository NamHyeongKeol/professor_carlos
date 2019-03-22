#include<stdio.h>
int arr[1025][1025];
int main(){
    int n, m, i, j;
    scanf("%d%d",&n,&m);
    for(int i =0;i<=n;i++){
        arr[i][0]=arr[0][i]=0;
    }


    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&arr[i][j]);
            arr[i][j] +=arr[i][j-1];
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            arr[i][j] +=arr[i - 1][j];
        }
    }


    for(i=0;i<m;i++){
        int x_1, y_1, x_2, y_2;
        scanf("%d%d%d%d",&x_1, &y_1, &x_2, &y_2);
        printf("%d\n",arr[x_2][y_2] - arr[x_2][y_1 - 1] - arr[x_1 - 1][y_2] + arr[x_1 - 1][y_1 - 1]);
    }
}
