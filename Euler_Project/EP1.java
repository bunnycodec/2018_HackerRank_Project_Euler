import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

class EP1
{

    public static void main(String[] args) 
    {
        long n,t,a0,sum;
        Scanner sc = new Scanner(System.in);
        t = sc.nextInt();
        for(a0 = 0; a0 < t; a0++)
        {
            sum=0;
            n = sc.nextInt();
            n=n-1;
            sum=sumof(n,3)+sumof(n,5)-sumof(n,15);
            System.out.println(sum);
        }
    }
    
    static long sumof(long n,long x)
    {
        int rest;
        rest=n/x;
        return x*(rest*(rest+1))/2;
    }
}
