class Solution {
    public int minimumOperations(List<Integer> nums) {
        int i=0, n=nums.size(), res=Integer.MAX_VALUE;
        int arr[][]=new int[n][4];
        for(int num: nums) arr[i++][num]++;
        for(int f=1;f<n;f++){
            arr[f][1]+=arr[f-1][1];
            arr[f][2]+=arr[f-1][2];
            arr[f][3]+=arr[f-1][3];
        }
        for(i=-1;i<n;i++){
            int toone=0;
            if(i>=0) toone=arr[i][2]+arr[i][3];
            for(int j=i;j<n;j++){
                int totwo=0, tothree=0;
                if(j>=0&&i<n-1)
                    totwo=(arr[j][1]-(-1==i?0:arr[i][1]))+(arr[j][3]-(-1==i?0:arr[i][3]));
                if(i<n-2)
                    tothree=(arr[n-1][1]-(j==-1?0:arr[j][1]))+(arr[n-1][2]-(j==-1?0:arr[j][2]));
                res=Math.min(res, toone + totwo + tothree);
            }
        }
        return Math.min(res, arr[n-1][1]+arr[n-1][2]);
    }
}