class negative {
    
    public void segregateElements(int arr[], int n)
    {
        // Your code goes here
     
        int index=n-1;
      
        int arr2[] = new int[n];

        for(int j =n-1;j>=0;j--){
            if(arr[j]<0){
                arr2[index]=arr[j];
                index--;
            }
        }
        index =0;
        for (int i = 0; i < arr.length; i++) {
            if (arr[i]>0){
                arr2[index]=arr[i];
                index++;
            }
        }
        
          for(int i=0;i<n;i++){
            arr[i] = arr2[i];
        }
        
    }
}