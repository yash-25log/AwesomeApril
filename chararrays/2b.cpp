#include <iostream>
using namespace std;


int main(){

    char sentence[1000];

    char temp = cin.get();

    int len = 1;
    while(temp!='#'){
        len++;
        cout<<temp;
        

        temp = cin.get();

    }
    cout<<"Length "<<len<<endl;

    return 0;
}