#include <iostream>
using namespace std;

int main()
{
    string email;
    int passw;
    string name;
    
    cout<<"enter your name: ";
    cin>>name;
    cout<<"welccom "<<name<<endl;
    
    cout<<"enter your email: ";
    cin>>email;
    cout<<"enter you password: ";
    cin>>passw;
    
    while(passw!=1234){
    if( passw!=1234){
        cout<<"tree againe: ";
        cin>>passw;
    }
    else{
        cout<<"welcoum "<<name<<endl;
        cout<<"your passworde is: "<<passw;
    }
    
    }
    //home
    char user;
    int nember;
    int nember2;
   while(true){
       cout<<"Enter (A) letter to add money to your account: "<<endl;
       cout<<"Enter the letter (B) to withdraw money from your account:"<<endl;
         cin>>user;    
         
       if(user== 'A'){
          cout<<"Enter your money: ";
          cin>>nember;
          cout<<"you have: "<<nember<<"$"<<endl;
       }
      
      else if(user=='B')
      {
          if (nember<=0){
           cout<<"you Dont have money in you'r account"<<endl;
       }else{
          cout<<"Type how much you want to withdraw: "<<endl;
          cin>>nember2;
          cout<<"now you have: "<<nember-nember2<<endl;
      }
      }else if (user!='A'&&user!='B'){
          cout<<"Enter (A) or (B)"<<endl;
          
      }
      
      
      
      
      
   }
   
}


// password is : 1234
