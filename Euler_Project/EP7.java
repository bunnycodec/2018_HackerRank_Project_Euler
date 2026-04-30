import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class EP7 
{

    public static void main(String[] args) 
    {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for(int a0 = 0; a0 < t; a0++)
        {
            int n = in.nextInt();
            int num=1,r,f,flag;
            if(n==1)
                {
                System.out.println(2);
                continue;
            }
            n--;
            while(n>0)
            {
                num+=2;
                if(num==3)
                n--;
                else if(num%2==0)
                continue;
                else if(num<9)
                n--;
                else if(num%3==0)
                continue;
                else
                {
                   flag=0;
                   r=(int)Math.floor(Math.sqrt(num));
                   f=5;
                    while(f<=r)
                    {
                        if(num%f==0) 
                            {
                                flag=1;
                            break;
                        }
                        if(num%(f+2)==0) 
                            {
                                flag=1;
                            break;
                        }
                        f=f+6;
                    }
                    if(flag==0)
                    n--;
                }
            }
            System.out.println(num);
        }
    }
}
