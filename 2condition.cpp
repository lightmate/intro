#include <iostream>
using namespace std;

int main(){
/*
    cout<<"How much buget do I have?\n";
    int buget ,choice;
    cin>>buget;
    if(buget > 2000){
        cout<<"I can go anywhere, How much can I spend?\n";
        cin>>choice;
        if(choice > 1000){
            cout<<"I can spend more than 1K, Let's do this";
        } else
        {
            cout<<"I can spend less than 1k, I'll go somewhere else";
        }
        
    }
    else if (1000 < buget)
    {
        cout<<"I have between 1k and 2k. Where should I go?\n";
    }
    else if (buget < 1000)
    {
        cout<<"I cannot go right now, I have below 1000";
    }
*/

/*    // Check which one of the three numbers is largest
    int a, b, c;
    cin>>a>>b>>c;
    if (a>b)
    {
        if (a>c)
        {
            cout<<a<<endl;
        }else
        {
            cout<<c<<endl;
        } }
    else
    {
        if(b>c){
            cout<<b<<endl;
        }
        else
        {
            cout<<c<<endl;
        }
        
    }
*/

    // Check if a number is odd
    cout<<"Type a number for which odd and even ti be checked\n";
    int num;
    cin>>num;
    if (num%2 == 0)
    {
        cout<<"Even"<<endl;
    } else
    {
        cout<<"Odd"<<endl;
    }
    
    

    return 0;
    
    
}