import java.util.Scanner;

public class data_types {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        
        String dataType = scanner.next();

        switch (dataType) {
            case "byte":
                System.out.println(Byte.SIZE/8);
                break;
            case "short":
                System.out.println(Short.SIZE/8);
                break;
            case "int":
                System.out.println(Integer.SIZE/8);
                break;
            case "long":
                System.out.println(Long.SIZE/8);
                break;
            case "float":
                System.out.println(Float.SIZE/8);
                break;
            case "double":
                System.out.println(Double.SIZE/8);
                break;
            case "char":
                System.out.println(Character.SIZE/8);
                break;
            default:
                System.out.println("Invalid data type.");
        }
    }
}