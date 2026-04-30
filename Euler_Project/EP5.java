import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class EP5 
{

    public static void main(String[] args) 
    {
        int n,num,cpy,t,a0;
        Scanner in = new Scanner(System.in);
        t = in.nextInt();
        for(a0 = 0; a0 < t; a0++)
        {
            n = in.nextInt();
            num = n;
            while(true)
            {
               cpy=n;
               while(cpy>0)
               {
                   if(num%cpy==0)
                   cpy--;
                   else
                   break;
               }
               if(cpy==0)
               {
                   System.out.println(num);
                   break;
               }
               else
                   num++;
            }
        }
    }
}
