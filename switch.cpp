#include<iostream>
using namespace std;
int main(){
    char button;
    cout<<"Input Characters:";
    cin>>button;
    if(button=='a'){
        cout<<"Hello"<<endl;
    }
    else if(button=='b'){
        cout<<"sat Shri Akal"<<endl;
    }
    else if(button=='c'){
        cout<<"Waheguru ji ka khalsa Waheguru ji ki fateh"<<endl;
    }
    else if(button=='d'){
        cout<<" Akal hi Akal hai"<<endl;
    }
    else{
        cout<<"I am still Learning more";
    }
    return 0;

}