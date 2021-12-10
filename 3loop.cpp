#include <iostream>
using namespace std;

int main(){
/*
    // Print a number as sum of all the numbers till input
    int num, sum;
    cin>>num;
    sum = 0;
    for(int counter = 0; counter < num; counter++){
        sum += counter;
    }
    cout<<sum;
*/
/*
    //Run till input is -ve
    int num;
    cin>>num;
    while( num < 0){
        cout<<num<<endl;
        cin>>num;
    }*/
     //Doing the thing as above but with 'do while loop'--in do while loop will run at least one time 
    int num;
    cin>>num;
    do
    {
        cout<<num<<endl;
        cin>>num;
    } while (num<0);
    
    
    return 0;
}
   

