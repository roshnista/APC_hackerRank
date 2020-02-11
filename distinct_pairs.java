import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;



class Result {

    /*
     * Complete the 'countPairs' function below.
     *
     * The function is expected to return an INTEGER.
     * The function accepts following parameters:
     *  1. INTEGER_ARRAY arr
     *  2. LONG_INTEGER k
     */

    public static int countPairs(List<Integer> arr, long k) 
    {
            
            int l=0;
            long p=k/2;
            for(int i=0;i<arr.size();i++)
            {
                if(arr.get(i)==p)
                {
                    l++;
                }

            }

            Set<Integer> s = new HashSet<Integer>(arr);
            Integer a[]= new Integer[s.size()];
            s.toArray(a);
            int x=0;

            for(int i=0;i<s.size();i++)
            {
                 for(int j=i+1;j<s.size();j++)
                {
                    if(a[i]+a[j]==k && i!=j)
                        x++;
                }
            }

            if(l>1)
                return x+1;



            return x;

    }

}

public class Solution {
