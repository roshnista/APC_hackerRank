import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;



class Result {
    public static String featuredProduct(List<String> products) 
    {
        String s=new String();
        Collections.sort(products);
        int a[]=new int[100];
        int j=0,i=0,max=0;


        Map<String,Integer> m = new HashMap<>();
        for(String o:products)
        {
            Integer c=m.get(o);
            if(c==null)
                c=0;
            m.put(o,c+1);
        }
        for (Map.Entry<String, Integer> entry : m.entrySet()) {
            if(entry.getValue()>max)
              {
                max=entry.getValue();
                s=entry.getKey();
                }
        }
        
    
        // for(i=0;i<products.size();i++)
        // {  
        //     String d=products.get(i);
        //     c=0;
        //     for(j=1+i;j<products.size();j++)
        //     {
        //         if(d.equals(products.get(j)))
        //             {
        //                 c++;
        //                 if(j+1==products.size())
        //                 {
        //                     a[i]=c;
        //                     break;
        //                 }
        //             }
        //         else
        //             {
        //                 a[i]=c;
        //                 break;
        //             }
        //     }
        // }
        // int max=0;
        // for(i=0;i<products.size();i++)
        //     {
        //         if(a[i]>max)
        //             max=a[i];
        //     }
        // for(i=products.size()-1;i>=0;i--)
        // {
        //     if(a[i]==max)
        //         {
        //             s=products.get(i);
        //             break;
        //         }
        // }


    return s;
    }
}

public class Solution {
