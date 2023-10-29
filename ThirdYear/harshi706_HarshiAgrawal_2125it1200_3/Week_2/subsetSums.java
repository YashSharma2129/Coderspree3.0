public static void subsetSumsHelper(int ind, int sum, ArrayList < Integer > arr, int N, ArrayList < Integer > sumSubset) {
        if (ind == N) {
            sumSubset.add(sum);
            return;
        }
        subsetSumsHelper(ind + 1, sum + arr.get(ind), arr, N, sumSubset);
        subsetSumsHelper(ind + 1, sum, arr, N, sumSubset);
    }
    static ArrayList < Integer > subsetSums(ArrayList < Integer > arr, int N) {
        ArrayList < Integer > sumSubset = new ArrayList < > ();
        subsetSumsHelper(0, 0, arr, N, sumSubset);
        Collections.sort(sumSubset);
       return sumSubset;
    }
