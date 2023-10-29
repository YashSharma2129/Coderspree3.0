import java.util.ArrayList;
import java.util.HashSet;

public class RemoveDuplicates {
    public static int removeDuplicates(ArrayList<Integer> arr, int n) {
        // Write your code here.
        return new HashSet<Integer>(arr).size();
    }
}
