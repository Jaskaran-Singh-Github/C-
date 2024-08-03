#include<iostream>
using namespace std;
int main(){
    int savings;
    cin>>savings;
    if(savings>5000){
        if(savings>12000){
            cout<<"GO WITH NEHA ROADTRIP";
        }
        else{
            cout<<"GO WITH NEHA SHOPPING";
        }
        
    }
    else if(savings>2000){
        cout<<"GO WITH SIMRAN";
    }
    else{
        cout<<"GO WITH FRIENDS";
    }
    return 0;
}