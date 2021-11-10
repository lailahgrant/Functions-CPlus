//program demo using multiple inheritence
#include<iostream>
using namespace std;
class student
{
	protected:
		int rno,m1,m2;
		public:
		void get()
		{
			cout<<"enter the roll no";
			cin>>rno;
			cout<<"enter the two marks";
			cin>>m1>>m2;
		}
};
class sports
{
	protected:
		int sm;   //sm=sports mark
		public:
			void getsm()
			{
				cout<<"\n Enter the sports mark"<<sm<<endl;
			
				
			}
};
class statement: public student,public sports
{
	int tot, avg;
	public:
		void display()
		{
			tot=(m1+m2+sm);
			avg=tot/3;
			cout<<"\n\n\tRoll no:"<<rno<<"\n\tTotal:"<<tot;
			cout<<"\n\tAverage:"<<avg;
		}
};
int main()
{
	statement obj;
	obj.get();
	obj.getsm();
	obj.display();
	return 0;
}
