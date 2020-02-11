import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {



    // Complete the braces function below.
    static String[] braces(String[] ch) 
    {
       
        String [] ans = new String[ch.length];
        for(int i=0;i<ch.length;i++)
        {
              int flag=1;
           
            char values[]=ch[i].toCharArray();
            
            Stack<Character> s =new Stack<Character>();
            for(int j=0;j<values.length;j++)
            {
                if(values[j]=='{' ||  values[j]=='[' || values[j]=='(')
                    s.push(values[j]);
                if(values[j]=='}' ||  values[j]==']' || values[j]==')')
                    {
                        if(s.empty())
                            {flag=0;break;}
                        else
                            {
                                char x=s.peek();
                                s.pop();
                                if((x=='{' || x=='(') && (values[j]==']') )
                                    {flag=0;break;}
                                else if((x=='[' || x=='(') && (values[j]=='}'))
                                    {flag=0;break;}
                                else if((x=='[' || x=='{' )&& (values[j]==')'))
                                    {flag=0;break;}   
                            }
                    }

            }    
            
            if(!s.empty())
                flag=0;

            if(flag==0)
                ans[i]="NO";
            else
                ans[i]="YES";
        }

        return ans;

    }

    private static final Scanner scanner = new Scanner(System.in);
