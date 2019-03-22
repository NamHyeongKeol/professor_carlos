// Example program
#include <cstdio>
#include <string>

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int i = 0;
    int z[n] = {0};
    for(int i=0;i<n;i++){
        int temp;
        scanf("%d",&temp);
        z[i] = temp;
    }

	int r[n] = {0};
    for (int i=0;i<n;i++){
        r[i] = (i > 0 ? r[i-1] : 0) + z[i];
    }

    // for (int i=0;i<n;i++){
    //     printf("%d", r[i]);
    // }

	// printf("\n");
	for (int i=0;i<m;i++){
		int k,j;
        scanf("%d %d",&k,&j);
        printf("%d\n",r[j-1] - (k > 1 ? r[k-2] : 0));
    }
}

