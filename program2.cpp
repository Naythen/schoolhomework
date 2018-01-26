#include <iostream>
using namespace std;
int main(){
    int a,b,c,s1,s2,d1,d2;
    cout<<"Indrodu un numar :"<<endl;
    cin>>a;
    for(b=1;b<=a;b++)
        for(c=1;c<=a;c++)
        if(b+c==a){
            s1=0;
            s2=0;
            for(d1=1;d1<=b;d1++)
                if(b%d1==0)
                    s1++;
            for(d2=1;d2<=b;d2++)
                if(c%d2==0)
                    s2++;
            if(s1==2&&s2==2){
                cout<<b<<"+"<<c<<"="<<a<<endl;
                return 0;}}

    return 0;}
