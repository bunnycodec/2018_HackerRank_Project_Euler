import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class EP3 
{

   public static void main(String[] args) 
    {
        long num,a0,factor,lastfactor,maxfactor;
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for(a0 = 0; a0 < t; a0++)
        {
            factor=3;
            lastfactor=1;
            num = sc.nextLong();
            if(num%2==0)
            {
                num=num/2;
                factor=3;
                lastfactor=2;
                while(num%2==0)
                    num=num/2;
            }
            maxfactor=(long)Math.sqrt(num);
            while(num>1 && factor<=maxfactor)
            {
                if(num%factor==0)
                {
                    lastfactor=factor;
                    num=num/factor;
                    while(num%factor==0)
                    num=num/factor;
                }
                maxfactor=(long)Math.sqrt(num);
                factor+=2;
            }
            if(num==1)
                System.out.println(lastfactor);
            else
                System.out.println(num);
        }
    }
}
