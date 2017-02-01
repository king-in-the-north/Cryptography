#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream a;
	a.open("c.txt");
	string s,k,t="";
	while(1)
	{
		char temp=a.get();
		if(temp==EOF)
		break;
		t=t+temp;
	}
	a.close();
    int len=t.length();
    for(int i=0;i<len;i++)
    {if(t[i]==' ')
    t[i]='*';
    else
    {
    int r=t[i]-97;
    r=(r+3)%26;
    t[i]=97+r;
    }
    }
    ofstream b;
    b.open("d.txt");
    for(int i=0;i<len;i++)
    b.put(t[i]);
    b.close();
	cout<<"Encrypted String is\n";
	cout<<t<<endl;
}
