import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws Exception
	{
		// your code goes here
		int x;
		BufferedReader b=new BufferedReader(new InputStreamReader(System.in));
		try {
		    x=Integer.parseInt(b.readLine());
		    int i;
		    for(i=1;i<=x;i++)
		    {
		    	String s1,s2;
		    	String str=b.readLine();
		    	int j,s=str.length();
		    	int q=s/2;
		    	if(s%2==0)
		    	{
		    		a=str.substring(0,(q+1));
		    		b=str.substring(q+1);
				}
				else
				{
					a=str.substring(0,(q+1));
		    		b=str.substring(q+2);
				}
				int m=a.length();
				int count1=1,count2=1;
				for(int k=0;k<m;k++)
				{
					char c1=a.charAt(k);
					char c2=b.charAt(k);
					if(c1!=c2)
					{
						count1=0;
					}
				}
				for(int k=0,int l=m-1;k<m;k++,l--)
				{
					char c1=a.charAt(k);
					char c2=b.charAt(l);
					if(c1!=c2)
					{
						count2=0;
					}
				}
				if(count1==1&&count2==1)
				{
					System.out.println("YES\n");
				}
				else
				{
					System.out.println("NO\n");
				}
			}
		}
        catch(NumberFormatException ne)
		{
        	System.out.println("");
        }
	}
}
