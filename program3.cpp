#include <iostream>
using namespace std;
int a,b,x,y,r;
int main(){
    cout<<"Introdu doua numere : "<<endl;
    cin>>a;
    cin>>b;
    x=a;
    y=b;
    r=a%b;
    while(r!=0){
        a=b;
        b=r;
        r=a%b;}
    if(b==1)
    cout<<"Numerele introduse sunt prime intre ele ."<<endl;
    else cout<<"Numerele introduse nu sunt prime intre ele ."<<endl;

    return 0;}

