

import java.util.*;
public class Data_types {
    public static int dataTypes(String type) {
        //System.out.println(type);
        int a=0;
        if(type.equalsIgnoreCase("Integer")){
            a=2;
        }
        else if(type.equalsIgnoreCase("Long")){
            a=8;
        }
        else if(type.equalsIgnoreCase("Float")){
            a=4;
        }
        else if(type.equalsIgnoreCase("Double")){
            a=8;
        }
        else {
            a=1;
    }
        return a;
    }
} 
