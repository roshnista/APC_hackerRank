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


    public static List<Integer> cutBamboo(List<Integer> l)
    {
        List<Integer> ans = new ArrayList<Integer>(l.size());
        int sum=0;
        int i=0,j=0;
        int c=1;
        ans.add(l.size());
        Collections.sort(l);
                while(i<l.size()-1)
                {
                    c=1;
                    
                    if(l.get(i)==l.get(j))
                    {
                        j=i+1;
                        while(l.get(i) == l.get(j) )
                        {
                            c++;j++;
                        }
                    }    
                    sum=sum+c;
                    if(l.size()-sum>=1)
                        ans.add(l.size()-sum);
                    i=i+c;
                }

        return ans;
    }

}
public class Solution {
