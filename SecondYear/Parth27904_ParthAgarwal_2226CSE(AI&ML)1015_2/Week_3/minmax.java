import java.util.Arrays;

class Pair{
    long first, second;
    public Pair(long first, long second){
        this.first = first;
        this.second = second;
    }
}

class minmax 
{
    static Pair getMinMax(long a[], long n)  
    {
        long maxim = 0;
        long minim = 0;
        Arrays.sort(a);
        maxim = a[(int)n-1];
        minim = a[0];
        return new Pair(minim,maxim);
    }
}