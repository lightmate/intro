#include <iostream>
using namespace std;

int main(){
    //Uses of Continue and Break loop
/*    int pocketmoney = 900;
    for (int date = 0; date < 10; date++)

    {
        if (date%2 == 0)
        {
            continue; // Used to skip to the new iternation
        }

        else if (pocketmoney == 0)
        {
            cout<<"You are exhasted\n";
            break; //Used to Break the loop
        }
        cout<<"You can go out today, however it will cost you 300, date: "<<date<<"\n";
        pocketmoney = pocketmoney - 300;

 
    }*/

/*    // DOn't Print it num is divisible by 2
    for (int i = 0; i < 20; i++)
    {
       if (i%2 ==0)
       {
           continue;
       }
       cout<<i<<endl;
       
    }*/
    
/*    // Check if a num is prim or not
    cout<<"Enter a number for which is Prime to be checked\n";
    int num, i;
    cin>>num;
    for ( i = 2; i < num; i++)
    {   cout<<i;
        if (num%i == 0)
        {
            cout<<"Not Prime"<<endl;
            break;
        }
        
    }
    if (i==num)
    {
        cout<<"Prime"<<endl;
    }*/
    
    //Print all prime nums between two given points
    int a, b, k;
    cin>>a>>b;
    cout<<a + b;
    for (int i = a; i < b; i++)
    {
            for ( k = 2; k < i; k++)
                {
                    if (i%k ==0)
                    {
                        break;
                    }
                    
                }
                if (k == i)
                {
                    cout<<"Prime"<< i <<endl;
                }
                
    }
    

    
        return 0;   
}