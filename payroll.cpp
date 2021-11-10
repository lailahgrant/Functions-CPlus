#include<iostream>
using namespace std;
class emp
{
   public:
     int eno;
     char name[20], location[20];
     void getData1()
     {
              cout<<"Enter the employee number:";
              cin>>eno;
              cout<<"Enter the employee name:";
              cin>>name;
              cout<<"Enter the location:";
              cin>>location;
     }
};
 
class salary:public emp
{
     float bp,hra,da,pf,np;  
   public:
     void getData2()
     {             
              cout<<"Enter the basic pay:";
              cin>>bp;
              cout<<"Enter the Human Resource Allowance:";
              cin>>hra;
              cout<<"Enter the Dearness Allowance:";
              cin>>da;
              cout<<"Enter the Profitability Fund:";
              cin>>pf;
     }
     void calculate()
     {
              np = (bp + hra +da) - pf;
     }
     void display()
     {              cout<<eno<<"\t"<<name<<"\t"<<location<<"\t"<<bp<<"\t"<<hra<<"\t"<<da<<"\t"<<pf<<"\t"<<np<<"\n";
     }
};
int main()
{
    int i,n;
    char ch;
    salary s[10];
    cout<<"Enter the number of employee:";
    cin>>n;
    for(i=0;i<n;i++)
    {
              s[i].getData1();
              s[i].getData2();
              s[i].calculate();
    }
    cout<<"\n e_no \t e_name\t location \t bp \t hra \t da \t pf \t np \n";
    for(i=0;i<n;i++)
    {
              s[i].display();
    }
    return 0;
}

