#include<iostream>
using namespace std;
int main(){
    char button;
    cout<<"Input a Character:";
    cin>>button;
    switch (button)
    {
    case 'a':
        cout<<"Hello"<<endl;
        break;
    case 'b':
        cout<<"Jas"<<endl;
        break;
    case 'c':
        cout<<"Dhami"<<endl;
        break;
    
    default:
        cout<<"I am Still a Learning";
        break;
    }
}
    