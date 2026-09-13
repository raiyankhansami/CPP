#include<bits/stdc++.h>
using namespace std;

class YoutubeAccount
{
    private:
    string password;
    int subscriber;

    public:

    void setAccount(string p,int s)
    {
        password=p;
        subscriber=s;
    }

    void login()
    {
        string pass;
        cout<<"<==========Login==========>"<<endl;
        cout<<"Enter Password Here :";
        cin>>pass;

        if(pass==password)
        {
            cout<<"Login successful"<<endl;
        }
        else
        {
            cout<<"Invalid Password"<<endl;
        }
    }

    void changePassword()
    {
        string oldPass,newPass;
         cout<<"<==========Change Password==========>"<<endl;
        cout<<"Enter Your Old password here :";
        cin>>oldPass;
        
        if(oldPass==password)
        {
            cout<<"Enter New Password Here : ";
            cin>>newPass;
            password=newPass;
            cout<<"Password Change Successful!";
        }
        else
        {
            cout<<"Invalid Password!"<<"Please Try Again.........."<<endl;
        }
    }

    void showSubscriber()
    {
        cout<<"Subscriber : "<<subscriber<<endl;
    }

};

int main()
{
    string p;
    int s;

    cout<<"Input Password Here : ";
    cin>>p;

    cout<<"Input Subscriber Count here : ";
    cin>>s;

    YoutubeAccount account;
    account.setAccount(p,s);
    
    int choice,stop;
    
    while(true)
    {
    cout<<"<==========Select Option from below==========>"<<endl;
    cout<<"1.Login"<<endl<<"2.Change Password"<<endl<<"3.Show Subscriber"<<endl;
    
        cout<<"Select Option : ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                account.login();
                cout<<endl;
                break;
            
            case 2:
                account.changePassword();
                cout<<endl;
                break;
            
            case 3:
                account.showSubscriber();
                cout<<endl;
                break;
            
            default:
                cout<<"Invalid Option";
                
        }   

         cout << "Enter -1 to stop, or enter another option to continue: ";
         cin >> stop;

         if(stop==-1)
         {
            break;
         }
    }

    cout<<"Program Stopped!!!!!!";
    
    return 0;
}