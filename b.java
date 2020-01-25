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
		try 
		{
		    x=Integer.parseInt(b.readLine());
		    //System.out.println(x);
		    int i;
		    for(i=1;i<=x;i++)
		    {
		    	String str=b.readLine();
		    	char s2[]=new char[100];
		    	String str2="";
		    	int j,c2=0;
		    	for(j=0;j<str.length();j++)
		    	{
		    		char c=str.charAt(j);
		    		if(c!=')')
		    		{
		    			if(c=='+'||c=='-'||c=='*'||c=='/'||c=='%'||c=='^')
		    			{
		    				s2[c2++]=c;
						}
						else
						{
							if(c=='(')
						    {
						        continue;
						    }
						    else
						    {
								str2+=c;
							}
						}
					}
					else
					{
						str2+=s2[--c2];
					}
				}
				System.out.println(str2);
			}
			
		}
        catch(NumberFormatException ne){
        System.out.println("");
        }
	}
}

