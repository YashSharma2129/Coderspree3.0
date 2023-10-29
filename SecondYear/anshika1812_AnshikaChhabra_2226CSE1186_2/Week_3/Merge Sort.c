#include <stdio.h>

int merge(int arr[],int l,int m,int r){
    int i,j,k,n1,n2,left[500],right[500];
    n1=m-l+1;
    n2=r-m;
	for (i=0;i<n1;i++)
		left[i]=arr[l+i];
	for (j=0;j<n2;j++)
		right[j]=arr[m+1+j];

	i=j=0;k=l;
	while (i<n1 && j<n2){
		if (left[i]<=right[j]){
			arr[k]=left[i];
			i++;
		}
		else {
			arr[k]=right[j];
			j++;
		}
		k++;
	}
	while(i<n1) {
		arr[k]=left[i];
		i++;
		k++;
	}
    while(j<n2) {
		arr[k]=right[j];
		j++;
		k++;
	}
    return 0;
}

int sort(int arr[],int l,int r){
    int m;
    if(l<r){
        m=(l+r)/2;
        sort(arr,l,m);
        sort(arr,m+1,r);
        merge(arr,l,m,r);
    }
    return 0;
}

int main(){
    int arr[1000],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr, 0, n-1);
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}