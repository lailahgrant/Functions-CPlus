//payroll system using sinle inhertience
#include<iostream>
using namespace std;
class emp
{
	public:
		int eno;
		char name[25];
		void input1()
		{
			cout<<"Enter employee number:"<<eno<<endl;
			cout<<"Enter employee name:"<<name<<endl;
		}
};
class salary: public emp
{
	public:
		float bp,hra,da,pf,np;
		void input2()
		{
			cout<<"Enter the basic pay:"<<bp<<endl;
			cout<<"Enter the human resource allowance:"<<hra<<endl;
			cout<<"Enter the dearness allowance:"<<da<<endl;
			cout<<"Enter the profitable fund:"<<pf<<endl;
		}

void calculate()
{
	np=(bp+hra+da)-pf;
}
void display()
{
	cout<<eno<<"\t"<<name<<"\t"<<bp<<"\t"<<hra<<"\t"<<da<<"\t"<<pf<<"\t"<<np<<"\n";
}
};int main()
{
    int i,n;
    char ch;
    salary s[10];
    cout<<"Enter the number of employee:";
    cin>>n;
    for(i=0;i<n;i++)
    {
              s[i].input1();
              s[i].input2();
              s[i].calculate();
    }
    cout<<"\n e_no \t e_name\t bp \t hra \t da \t pf \t np \n";
    for(i=0;i<n;i++)
    {
              s[i].display();
    }
    return 0;
}


