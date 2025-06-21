#include<iostream>
using namespace std;
class benk
{
    protected:
    string name;
    int account_number;
    
};
class customer:public benk
{
    public:
    int amount;
    static int total_ammount;
    static int total_customers;
    customer(string name,int account_number,int amount)
    {
        this->name=name;
        this->account_number=account_number;
        this->amount=amount;
        total_customers++;
        total_ammount+=amount;
    }
    void deposite(int money)
    {
        amount+=money;
        total_ammount+=money;
        cout<<money<<" .rs has been deposite in your account"<<endl;
    }
    void withdraw(int money)
    {
        amount-=money;
        total_ammount-=money;
        cout<<money<<" .rs has been withdraw from your account"<<endl;
    }
    static void display_total_customer_and_amount()
    {
      cout<<"Total customer in bank are "<<total_customers<<" and total accounts are "<<total_ammount<<endl;
    }
    void display()
    {
        cout<<"The name of the customer is  "<<name<<"  his account number is  "<<account_number<<" his bank balance is "<<amount<<endl;
    }


};
int customer::total_customers=0;
int customer::total_ammount=0;
int main()
{
    customer A("Ali Haider",12345,10000);
    A.deposite(5000);
    A.withdraw(200);
    customer B("Zain",678910,5000);
    B.deposite(900);
    B.deposite(400);
    A.display();
    B.display();
    A.display_total_customer_and_amount();
    B.display_total_customer_and_amount();
}