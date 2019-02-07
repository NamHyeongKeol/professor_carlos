#include <stdio.h>

int arr[100010];
int arr_len;
int num_of_query;
int sum[100010];

int main(void) {
	scanf("%d %d", &arr_len, &num_of_query);
	for (int j=0;j<arr_len;j++) {
		scanf("%d", &arr[j]);
	}
	
	for (int l=0;l<=arr_len;l++) {
		if (l==0) {
			sum[l] = 0;
		} else if (l==1) {
			sum[l] = arr[0];
		} else {
			sum[l] = sum[l-1] + arr[l-1];
		}	
	}
	
	for (int k=0;k<num_of_query;k++) {
		int res = 0;
		int start = 0;
		int end = 0;
		scanf("%d %d", &start, &end);
		res = sum[end] - sum[start-1];
		printf("%d\n", res);
	}
	return 0;
}
