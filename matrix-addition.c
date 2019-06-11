#include<stdio.h>

int main(int argc, char *a[])
{
	int i=0, j=0,n,m;
	scanf("%d %d", &n, &m);
	int arr1[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		scanf("%d", &arr1[i][j]);
		}
	}

	scanf("%d %d", &n, &m);
	int arr2[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		scanf("%d", &arr2[i][j]);
		}
	}

	int outputArr[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		outputArr[i][j] = arr1[i][j]+arr2[i][j];
		}
	}

	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(j==m-1){
				printf("%d", outputArr[i][j]);
			}
			else{
				printf("%d ", outputArr[i][j]);
			}
		}
		if(i<m-1){
            printf("\n");
         }
	}
}
