#include <iostream>
#include<cstring>
using namespace std;


int main(){

    char a[] = "abcdefghi";
    //or this way-{'a','b','h','\0'};//
    cout<<a<<endl;

    char b[100];
    cin>>b;//has flaws as it doesn't take the word after space
    cout<<b<<endl;
    

    cout<<sizeof(a)<<endl;//number of visible characters
    cout<<strlen(a)<<endl;//+1 because of null value stored

    return 0;
}