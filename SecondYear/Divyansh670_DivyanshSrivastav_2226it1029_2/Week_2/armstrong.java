import java.util.*;

 

public class armstrong {

    

    public static void main(String[] args) {

        try (Scanner sc = new Scanner(System.in)) {
            int num=sc.nextInt();

 

            String str=Integer.toString(num);

            int len=str.length();

            int sum=0;

 

            for(int i=0;i<len;i++){

                int curr=str.charAt(i)-'0';

                sum+=Math.pow(curr, len);

            }

 

            if(sum==num){

                System.out.println("true");

            }else{

                System.out.println("false");    

            }
        }

    }

}