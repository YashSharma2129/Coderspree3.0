pair<long long, long long> getMinMax(long long a[], int n) {
    
    long long min = INT_MAX;
    long long max = INT_MIN;
    
    for(int i=0;i<n;i++){
        
        if( a[i] < min){
            min = a[i];
        }
        
    }

   for(int i=0;i<n;i++){
       if( a[i] > max){
           max = a[i];
       }
   }
   

    pair<long long, long long> result;
    result.first = min;
    result.second = max;
    return result;
}