import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

class EP8
{
    public static void main(String[] args) 
    {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for(int a0 = 0; a0 < t; a0++)
        {
            int n = in.nextInt();
            int k = in.nextInt();
            int max,prod,i,j;
            String num = in.next();
            max=0;
            for(i=0;i<n-k+1;i++)
            {
                prod=1;
                for(j=i;j<k+i;j++)
                    prod=prod*(Character.getNumericValue(num.charAt(j)));
                if(prod>max)
                    max=prod;
            }
            System.out.println(max);
        }
    }
}


