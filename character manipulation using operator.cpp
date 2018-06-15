#include<iostream>
#include<string.h>
using namespace std;
class Test
{
	char str[50];
	public:
		Test()
		{
			
		}
		Test(char ch[])
		{
			strcpy(str,ch);
		}
		void show()
		{
			cout<<str;
		}
		Test operator+(Test);
		int operator>(Test);
};
Test Test ::operator+(Test t)
{
	Test temp;
	strcpy(temp.str,str);
	strcat(temp.str,t.str);
	return temp;
}
int Test::operator >(Test t)
{
	if(strcmp(str,t.str)>0)
	{
	return 1;
	}
	else 
	return 0;
}
main()
{
	Test t1("HELLO"),t2("WORLD"),t3;
	t3=t1+t2;
	t3.show();
	if(t1>t2)
	{
		cout<<"t1 is greater than t2";
		
	}
	else{
		cout<<"t2 is less than t1";
	}
}
