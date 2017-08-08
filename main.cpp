#include <iostream>
#include<stdlib.h>


using namespace std;


class ATM
{
public:

    int thousand_count;
    int fivehunderd_count;
    int onehundred_count;
    int fifty_count;
    int ten_count;
    int one_count;
    int fiftyp_count;
    int twentyfivep_count;
    double total_money;


    int thousand_total;
    int fivehunderd_total;
    int onehundred_total;
    int fifty_total;
    int ten_total;
    int one_total;
    double fiftyp_total;
    double twentyfivep_total;



    ATM()
    {
         thousand_count=0;
         fivehunderd_count=0;
         onehundred_count=0;
         fifty_count=0;
         ten_count=0;
         one_count=0;
         fiftyp_count=0;
        twentyfivep_count=0;
        total_money=0;
        thousand_total=0;
        fivehunderd_total=0;
        onehundred_total=0;
        ten_total=0;
        fifty_total=0;
        one_total=0;
        fiftyp_total=0;
        twentyfivep_total=0;
    }
    void addmoney()
    {
        int x;
        cout<<"\nNumber of 1000 rupee notes to be added: ";
        cin>>x;
        thousand_count+=x;
        cout<<"\nNumber of 500 rupee notes to be added: ";
        cin>>x;
        fivehunderd_count+=x;
        cout<<"\nNumber of 100 rupee notes to be added: ";
        cin>>x;
        onehundred_count+=x;
        cout<<"\nNumber of 50 rupee notes to be added: ";
        cin>>x;
        fifty_count+=x;
        cout<<"\nNumber of 10 rupee notes to be added: ";
        cin>>x;
        ten_count+=x;
        cout<<"\nNumber of 1 rupee notes to be added: ";
        cin>>x;
        one_count+=x;
        cout<<"\nNumber of 25 paise notes to be added: ";
        cin>>x;
        twentyfivep_count+=x;
        cout<<"\nNumber of 50  paise to be added: ";
        cin>>x;
        fiftyp_count+=x;

    }

    double get_total()
    {
     thousand_total=1000*thousand_count;
     fivehunderd_total=500*fivehunderd_count;
     onehundred_total=100*onehundred_count;
     fifty_total=50*fifty_count;
     ten_total=10*ten_count;
     one_total=1*one_count;
     fiftyp_total=0.5*fiftyp_count;
     twentyfivep_total=0.25*twentyfivep_count;
        return total_money=thousand_total+fivehunderd_total+onehundred_total+fifty_total+ten_total+one_total+fiftyp_total+twentyfivep_total;
    }




};

class User
{
public:

    int withdrawal;

    User()
    {

        withdrawal=0;
    }

    void set_withdrawal(int x)
    {
        withdrawal=x;
    }

};

class Withdrawal
{
public:

    int thousand_count;
    int fivehunderd_count;
    int onehundred_count;
    int fifty_count;
    int ten_count;
    int one_count;
    int fiftyp_count;
    int twentyfivep_count;

    Withdrawal()
    {
        thousand_count=0;
         fivehunderd_count=0;
         onehundred_count=0;
         fifty_count=0;
         ten_count=0;
         one_count=0;
         fiftyp_count=0;
        twentyfivep_count=0;
    }

    void Withdraw(ATM &a,User &u)
    {

        if(u.withdrawal>a.total_money)
        {
            cout<<"Not Sufficient Money Sorry :\(\n";
        }
        else
        {
          // if( u.withdrawal/1000 < a.thousand_count && u.withdrawal!=0)
          if(u.withdrawal!=0 && a.thousand_count>0)
            {
               // cout<<"here"<<endl;
              thousand_count=u.withdrawal/1000;
              //cout<<thousand_count<<endl;
              a.thousand_count-=thousand_count;
              //cout<<a.thousand_count<<endl;
                u.withdrawal-=thousand_count*1000;
               // cout<<u.withdrawal<<endl;
            }
           // if( u.withdrawal/500 < a.fivehunderd_count&& u.withdrawal!=0)
           if(u.withdrawal!=0 && a.fivehunderd_count>0)
            {
               // cout<<"here"<<endl;
              fivehunderd_count=u.withdrawal/500;
              //cout<<thousand_count<<endl;
              a.fivehunderd_count-=thousand_count;
              //cout<<a.thousand_count<<endl;
                u.withdrawal-=fivehunderd_count*500;
               // cout<<u.withdrawal<<endl;
            }
           // if( u.withdrawal/100 < a.onehundred_count&& u.withdrawal!=0)
           if(u.withdrawal!=0 &&a.onehundred_count>0)
            {
               // cout<<"here"<<endl;
              onehundred_count=u.withdrawal/100;
              //cout<<thousand_count<<endl;
              a.onehundred_count-=fifty_count;
              //cout<<a.thousand_count<<endl;
                u.withdrawal-=onehundred_count*100;
               // cout<<u.withdrawal<<endl;
            }
           // if( u.withdrawal/50 < a.fifty_count&& u.withdrawal!=0)
           if(u.withdrawal!=0 &&a.fifty_count>0)
            {
               // cout<<"here"<<endl;
              fifty_count=u.withdrawal/50;
              //cout<<thousand_count<<endl;
              a.fifty_count-=fifty_count;
              //cout<<a.thousand_count<<endl;
                u.withdrawal-=fifty_count*50;
               // cout<<u.withdrawal<<endl;
            }
           // if( u.withdrawal/10 < a.ten_count&& u.withdrawal!=0)
           if(u.withdrawal!=0 &&a.ten_count>0)
            {
               // cout<<"here"<<endl;
              ten_count=u.withdrawal/10;
              //cout<<thousand_count<<endl;
              a.ten_count-=ten_count;
              //cout<<a.thousand_count<<endl;
                u.withdrawal-=ten_count*10;
               // cout<<u.withdrawal<<endl;
            }
          //  if( u.withdrawal < a.one_count&& u.withdrawal!=0)
          if(u.withdrawal!=0 &&a.one_count>0)
            {
               // cout<<"here"<<endl;
              one_count=u.withdrawal;
              //cout<<thousand_count<<endl;
              a.one_count-=one_count;
              //cout<<a.thousand_count<<endl;
                u.withdrawal-=one_count;
               // cout<<u.withdrawal<<endl;
            }
         //   if( u.withdrawal/0.25 < a.twentyfivep_count&& u.withdrawal!=0)
         if(u.withdrawal!=0 &&a.twentyfivep_count>0)
            {
               // cout<<"here"<<endl;
              twentyfivep_count=u.withdrawal/0.25;
              //cout<<thousand_count<<endl;
              a.twentyfivep_count-=twentyfivep_count;
              //cout<<a.thousand_count<<endl;
                u.withdrawal-=twentyfivep_count*0.25;
               // cout<<u.withdrawal<<endl;
            }
           // if( u.withdrawal/0.50 < a.fiftyp_count&& u.withdrawal!=0)
           if(u.withdrawal!=0 &&a.fiftyp_count>0)
            {
               // cout<<"here"<<endl;
              fiftyp_count=u.withdrawal/0.50;
              //cout<<thousand_count<<endl;
              a.fiftyp_count-=fiftyp_count;
              //cout<<a.thousand_count<<endl;
                u.withdrawal-=fiftyp_count*0.50;
               // cout<<u.withdrawal<<endl;
            }


            if(u.withdrawal==0)
            {
                cout<<"\n /////////   Withdrawal Successful!   /////////\n";
                cout<<"Total money withdrawn: \n";
                cout<<"thousand notes:"<<thousand_count<<"\t";
                cout<<"five hundred notes:"<<fivehunderd_count<<"\t";
                cout<<"one hundred notes:"<<onehundred_count<<"\t";
                cout<<"fifty notes:"<<fifty_count<<"\t";
                cout<<"ten notes:"<<ten_count<<"\t";
                cout<<"one rupee coins:"<<one_count<<"\t";
                cout<<"fifty paise coin:"<<fiftyp_count<<"\t";
                cout<<"twenty paise coin:"<<twentyfivep_count<<endl<<endl;



            }else{
                cout<<"\n /////////    Withdrawal Incomplete!   /////////\n";
                cout<<"Total money withdrawn: \n";
                cout<<"thousand notes:"<<thousand_count<<"\t";
                cout<<"five hundred notes:"<<fivehunderd_count<<"\t";
                cout<<"one hundred notes:"<<onehundred_count<<"\t";
                cout<<"fifty notes:"<<fifty_count<<"\t";
                cout<<"ten notes:"<<ten_count<<"\t";
                cout<<"one rupee coins:"<<one_count<<"\t";
                cout<<"fifty paise coin:"<<fiftyp_count<<"\t";
                cout<<"twenty paise coin:"<<twentyfivep_count<<endl<<endl;

            }

        }

    }



};
int main()
{
    ATM a;
    User u;
    Withdrawal w;
    while(1)

    {
        int c;

        cout<<"///////////  ATM  ///////////"<<endl;
        cout<<"1.Add"<<endl;
        cout<<"2.Withdraw"<<endl;
        cout<<"3.Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>c;
        switch(c)
        {
        case 1:
                    cout<<"//////////////////////\n"<<endl;

            a.addmoney();
            cout<<"Total money in ATM : "<<a.get_total()<<endl;
                    cout<<"\n//////////////////////\n"<<endl;

            break;

        case 2:
                    cout<<"//////////////////////\n"<<endl;

            cout<<"Enter money to withdraw : ";
            int x;
            cin>>x;
            u.set_withdrawal(x);
            w.Withdraw(a,u);
            cout<<"Total money in ATM : "<<a.get_total()<<endl;
                                cout<<"\n//////////////////////\n"<<endl;

            break;



        default:
            exit(0);


        }


    }

    return 0;
}
