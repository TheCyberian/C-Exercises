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

	for(i=0;i<n;i++){	
		for(j=0;j<m;j++){
			if(j==m-1){
				printf("%d", arr1[j][i]);
			}
			else{
				printf("%d ", arr1[j][i]);
			}
		}
		if(i<m-1){
      		    printf("\n");
     		}
	}
}
