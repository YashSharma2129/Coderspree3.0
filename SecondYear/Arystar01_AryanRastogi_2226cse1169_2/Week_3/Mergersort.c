#include<stdio.h>
void merge(int arr[], int low ,int mid ,int high){
    int left=mid-low+1;
    int right=high-mid;
    int temp1[left], temp2[right]; // creating two temporary arrays
    
    for(int i =0;i<left;i++){  // feeding data in the arrays
        temp1[i]=arr[i+low];
    }
    for(int j=0;j<right;j++){
        temp2[j]=arr[j+1+mid];
    }
    // data feeded in array
    int i=0,j=0,k=low;
    // now adding the elemts  by comparing them , into the main array
    while(i<left && j<right){
        if(temp1[i]<= temp2[j]){
            arr[k]=temp1[i];
            i++;
        }
        else{
            arr[k]=temp2[j];
            j++;

        }
        k++;
    }
    // now filling the rest left elemrnt 
    while(i<left){
        arr[k]=temp1[i];
        i++;
        k++;
    }
    while(j<right){
        arr[k]=temp2[j];
        k++;
        j++;
    }
}
void mergeSort(int arr[], int low ,int high){
   
    if(low==high){
        return;

    }
     int mid=(low + high)/2;
    mergeSort(arr,low, mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
       
        printf("%d ",arr[i]);
    }
}
int main(){
    int arr[10],n,item;
    printf("Enter the number of terms: \n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the number:");
        scanf("%d",&arr[i]);
    }
    mergeSort(arr,0,n-1);
    printArray(arr,n);

}