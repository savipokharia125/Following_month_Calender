#include<stdio.h>
#include<iostream>
using namespace std;
class calender
{
	int mm,dd,wd,initial,totaldays,temp,k,flag;
	
	public:
	void getdata()
	{
		cout<<"Enter today's date and month: ";
		cin>>dd>>mm;
		cout<<"\nEnter today's week day(1-7)(Remember Week start with Sunday!): ";
		cin>>wd;
	}
	void weekHead()
	{
		cout<<"  Su  Mo  Tu  Wd  Th  Fr  Sa\n";
		cout<<"-------------------------------\n";
	}
	int tdays(int m)
	{
		if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
			totaldays=31;
	else
		if(m==2)
	totaldays=28;
		else
	totaldays=30;
	
	
	return totaldays;	
	}
	int findInitial30()
	{
		while(dd<=30)
	dd+=7;
	dd=dd-30;
	if(dd==0)
	initial=wd+1;
	else
	if(dd==1)
	initial=wd;
	else if(dd==2)
	initial=wd+6;
	else if(dd==3)
	initial=wd+5;
	else if(dd==4)
	initial=wd+4;
	else if(dd==5)
	initial=wd+3;
	else if(dd==6)
	initial=wd+2;
	else if(dd==7)
	initial=wd+1;
	
	
	
	if(initial==8)
	initial=1;
	else
	if(initial==9)
	initial=2;
	else
	if(initial==10)
	initial=3;
	else
	if(initial==11)
	initial=4;
	else if(initial==12)
	initial=5;
	else if(initial==13)
	initial=6;
	else if(initial==-14)
	initial=7;
		
		return initial;
	}
	int findInitial28()
	{
		while(dd<=28)
	dd+=7;
	dd=dd-28;
	
	
	if(dd==0)
	initial=wd+1;
	else
	if(dd==1)
	initial=wd;
	else if(dd==2)
	initial=wd+6;
	else if(dd==3)
	initial=wd+5;
	else if(dd==4)
	initial=wd+4;
	else if(dd==5)
	initial=wd+3;
	else if(dd==6)
	initial=wd+2;
	else if(dd==7)
	initial=wd=1;
	
	
	if(initial==8)
	initial=1;
	else
	if(initial==9)
	initial=2;
	else
	if(initial==10)
	initial=3;
	else
	if(initial==11)
	initial=4;
	else if(initial==12)
	initial=5;
	else if(initial==13)
	initial=6;
	else if(initial==-14)
	initial=7;
		
		return initial;
	}
	int findInitial31()
	{
	
	while(dd<=31)
	dd+=7;
	
	dd-=31;
	if(dd==0)
	initial=wd+1;
	else
	if(dd==1)
	initial=wd;
	else if(dd==2)
	initial=wd+6;
	else if(dd==3)
	initial=wd+5;
	else if(dd==4)
	initial=wd+4;
	else if(dd==5)
	initial=wd+3;
	else if(dd==6)
	initial=wd+2;
	else if(dd==7)
	initial=wd+1;
	
	
	if(initial==8)
	initial=1;
	else
	if(initial==9)
	initial=2;
	else
	if(initial==10)
	initial=3;
	else
	if(initial==11)
	initial=4;
	else if(initial==12)
	initial=5;
	else if(initial==13)
	initial=6;
	else if(initial==14)
	initial=7;
	
	
	return initial;
	}
		void followingMonth()
	{
	int i,j,m;
	k=1;
		
		totaldays=tdays(mm);
		if(totaldays==31)
		initial=findInitial31();
		else if(totaldays==28)
		initial=findInitial28();
		else
		initial=findInitial30();
cout<<initial<<endl;
		m=mm+1;
		totaldays=tdays(m);
		j=1;
	weekHead();
	
	for(i=1;i<initial;i++)
{
		cout<<"    ";
		
		if(j%7==0)
		cout<<endl;	
		j++;
		
	}
j-=1;
	temp=j;
	
	for(i=initial;i<=totaldays+temp;i++)

{       if(k<=9)
		cout<<"   "<<k;
		else
		cout<<"  "<<k;
		j++;
		k++;
		if(j%7==0)
		cout<<endl;	
		
	}
	
}


};



int main()
{
	calender cal;
	cal.getdata();
	cal.followingMonth();
}
