

//User function Template for Java

class Solution {
    
    public void segregateElements(int arr[], int n)
    {
        // Your code goes here
        int[] temp=new int[n];
        int m=0;
        for(int i=0;i<n;i++){
            if(arr[i]>=0){
              temp[m]=arr[i];
              m++;
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]<0){
              temp[m]=arr[i];
              m++;
            }
        }
        
        for(int i=0;i<n;i++){
            arr[i]=temp[i];
        }
    }
}