#include <bits/stdc++.h>
using namespace std;
int main()
{
    int no_of_gadgets;
    cin >> no_of_gadgets;
    int price[10000];
    for(int i=0;i<no_of_gadgets;++i){
        cin >>price[i];

    }
    
    int customer_money;
    while( cin >> customer_money){


        int c=0;
        for(int j=0;j<no_of_gadgets;++j){
            if(customer_money%price[j]==0)
            c++;
        }
        int robot_says;
       
        cin >> robot_says;
        if(robot_says==c)
        cout << "Right\n";
        else
        cout << "Wrong\n";
    }
}