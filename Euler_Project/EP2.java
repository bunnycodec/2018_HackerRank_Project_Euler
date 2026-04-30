import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class EP2 
{

    public static void main(String[] args) 
    {
        long t,a0,n,sum,a,b,c;
        Scanner sc = new Scanner(System.in);
        t = sc.nextLong();
        for(a0 = 0; a0 < t; a0++)
        {
            sum=2;
            n = sc.nextLong();
            if(n==1)
                System.out.println(0);
            else if(n==2)
                System.out.println(2);
            else
            {
                a=1; b=2; c=0;
                while(c<n)
                {
                   if(c%2==0)
                    sum=sum+c;
                   c=a+b;
                   a=b;
                   b=c;
                }
                System.out.println(sum);
            }
        }
    }
}
