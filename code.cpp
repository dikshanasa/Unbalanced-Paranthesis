#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	char str[100];
	int i,j,end=0;
	
	cin>>str;
	for(i=0;str[i];i++)
	{
		if(str[i]=='(')
		{ 
			for(end+=1;str[end]!=')'&&str[end]!='\0';end++);
			if(str[end]=='\0')                         
			{
				for(j=i;str[j]=str[j+1];j++);    
				i--;
			}
			if(end<i)
			{
				for(j=end;str[j]=str[j+1];j++);    /
				i-=1;
			}
		}
		if(str[i]==')')                                    
		        if(i>end || i==0)
			{
				for(j=i;str[j]=str[j+1];j++);
				i--;}

	}
	cout<<str;
	return 0;
}
