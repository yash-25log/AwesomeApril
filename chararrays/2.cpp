#include <iostream>
using namespace std;


int main(){

    char sentence[1000];
    char temp = cin.get();

    int len = 1;
    while(temp!='\n'){
        len++;
        cout<<temp;
        //update the value
        temp = cin.get();
    }

    cout<<"Length "<<len<<endl;
    // cin>>sentence;
    // cout<<sentence;
    return 0;
}