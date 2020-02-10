#include<iostream>
using namespace std;
int main()
{
	long p,q;
	cout<<"1. conjunction\n2. disjunction\n3. conditional\n4. biconditional\n"<<endl;
	cout<<"0 for false 1 for true"<<endl;
	cin>>p>>q;
	{
	if(p==1&&q==1)
	{
		cout<<"statement is TRUE"<<endl;
	}
	if(p==0&&q==1)
	{
		cout<<"statement is TRUE"<<endl;
	}
	if(p==1&&q==0)
	{
		cout<<"statement is TRUE"<<endl;
	}
	if(p==0&&q==0)
	{
		cout<<"statement is FALSE"<<endl;
	}
	{
	if(p==1&&q==1)
	{
		cout<<"statement is TRUE"<<endl;
	}
	if(p==0&&q==1)
	{
		cout<<"statement is TRUE"<<endl;
	}
	if(p==1&&q==0)
	{
		cout<<"statement is TRUE"<<endl;
	}
	if(p==0&&q==0)
	{
		cout<<"statement is FALSE"<<endl;
	}
	}
	{
	if(p==1&&q==1)
	{
		cout<<"statement is TRUE"<<endl;
	}
	if(p==0&&q==1)
	{
		cout<<"statement is TRUE"<<endl;
	}
	if(p==1&&q==0)
	{
		cout<<"statement is FALSE"<<endl;
	}
	if(p==0&&q==0)
	{
		cout<<"statement is TRUE"<<endl;	
	}
	}
	if(p==1&&q==1)
	{
		cout<<"statement is TRUE"<<endl;
	}
	if(p==0&&q==1)
	{
		cout<<"statement is FALSE"<<endl;
	}
	if(p==1&&q==0)
	{
		cout<<"statement is FALSE"<<endl;
	}
	if(p==0&&q==0)
	{
		cout<<"statement is TRUE"<<endl;
	}
	}	
	return 0;
}

	
