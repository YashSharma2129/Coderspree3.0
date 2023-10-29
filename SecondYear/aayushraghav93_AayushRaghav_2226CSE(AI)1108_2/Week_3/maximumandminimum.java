class Compute 
{
    static Pair getMinMax(long a[], long n)  
    {
        //Write your code here
        long min=Integer.MAX_VALUE,max=Integer.MIN_VALUE;
        for(int i=0;i<n;i++){
            if(a[i]>max)
            max=a[i];
            if(a[i]<min)
            min=a[i];
        }
        Pair minmax=new Pair(min,max);
        return minmax;
    }
}
