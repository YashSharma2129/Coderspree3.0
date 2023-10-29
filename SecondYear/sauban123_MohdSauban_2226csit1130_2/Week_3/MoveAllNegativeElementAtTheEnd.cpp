 void segregateElements(int arr[],int n)
    {
        // Your code goes here
       int result[n] = {0};
        int negetveCount = 0;
        
        for(int i = 0; i < n; i++){
            if(arr[i] >= 0){
                result[negetveCount++] = arr[i];
            }
        }
        for(int i = 0 ; i < n; i++){
            if(arr[i] < 0){
                result[negetveCount++] = arr[i];
            }
        }
        for(int i = 0;i < n; i++){
            arr[i] = result [i];
        } 
        
    }
