class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        int i,j=0,c=0,a[n];
        for(i=0;i<n;i++){
            if(arr[i]>0){
                c++;
                a[j]=arr[i];
                j++;
            }
          
        }
        for(i=0;i<n;i++){
            if(arr[i]<0){
               a[c]=arr[i];
               c++;
            }
           
        }
        for (i=0;i<n;i++){
            arr[i]=a[i];
        }
    }
};