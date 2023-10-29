import java.util.*;
class pattern_8 {

    public static void main(String[] args) 
    {

        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();

        for (int i = 1; i <= n; i++) {
            
            for (int j = 1; j <= i; j++) {
                System.out.print(j + " ");
            }

            
            for (int k = 2 * (n - i); k >= 1; k--) {
                System.out.print("  ");
            }

           
            for (int l = i; l >= 1; l--) {
                
                if (l != 1) {
                    System.out.print(l + " ");
                } else {
                    System.out.print(l);
                }
            }

            
            System.out.println();
        }
    }
}
