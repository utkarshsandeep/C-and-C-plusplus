/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Main
{
	public static void main (String[] args) throws Exception
	{
		// your code goes here
		int x;
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		try {
		    x=Integer.parseInt(br.readLine());
		    int i,j;
		    for(i=1;i<=x;i++)
		    {
		    	String a=br.readLine();
		    	String b="";
		    	if(a.charAt(0)!='A')
		    	{
		    		b="N";
				}
				else
				{
					int p=0,q=0,r=0;
					for(j=0;j<a.length();j++)
					{
						char ch=a.charAt(j);
						if(ch=='A')
						{
							p++;
						}
						if(ch=='B')
						{
							q++;
						}
						if(ch=='.')
						{
							r++;
						}
					}
					if(p==0||q==0||r==0)
					{
						b="N";
					}
					else if(p==1&&q>=r)
					{
						b="Y";
					}
					else
					{
						b="N";
					}
				}
				System.out.println("Case #"+i+": "+b);
			}
		}
        catch(NumberFormatException ne){
        System.out.println("");
        }
		    
		}
}

