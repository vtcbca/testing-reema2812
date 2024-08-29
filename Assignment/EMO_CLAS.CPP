#include<iostream.h>
#include<conio.h>
class emp
{       public:
	int id,mobile_no;
	char city[10],name[10];
	void getdata()
	{
		cout<<"enter id,name, city,mobile_no : ";
		cin>>id>>name>>city>>mobile_no;
	}
	void putdata()
	{
		cout<<"id is :"<<id;
		cout<<"name is : "<<name;
		cout<<"city is : "<<city;
		cout<<"ph no. is : "<<mobile_no;
	}
};
void main()
{
	emp aa;
	aa.getdata();
	aa.putdata();
	getch();
}