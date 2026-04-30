import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class EP4 
{

    public static void main(String[] args) 
    {
        long a,b,n,ans;
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for(int a0 = 0; a0 < t; a0++)
        {
            n = sc.nextLong();
            a=100; ans=0;
            while(a<=999)
            {
                b=100;
                while(b<=999 && a*b<n)
                {
                    if(a*b>=101101)
                        if(checkpalin(a*b) && a*b>ans)
                            ans=a*b;
                    b++;
                }
                a++;
            }
            System.out.println(ans);
        }
    }
    
    static boolean checkpalin(long n)
    {
        long num=0,cpy;
        cpy=n;
        while(cpy>0)
        {
            num=num*10+cpy%10;
            cpy/=10;
        }
        if(n==num)
        return true;
        else
        return false;
    }
}

