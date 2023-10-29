import java.util.*;
public class check_palindrome {    
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int n=sc.nextInt();


    int rev=0;        

    int num=n;        

    while(n!=0){   

             int rem=n%10;  

             rev=rev*10+rem;            

             n=n/10;

      }       

    if(rev==num){            

               System.out.print("True");        

}        

    else{           

               System.out.print("False");      

 }
        }    

} 

}