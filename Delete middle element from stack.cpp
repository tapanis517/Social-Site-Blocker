#include<bits/stdc++.h>

using namespace std;

int main(){
        int n;
        cin>>n;
        int a=0,i=0, c=-1;
        int n1=n;
        while(n1){
            c++;
            n1=n1/10;
        }
        while(n){
            a+=(n%10)*pow(10,c);
            c--;
            n=n/10;
        }
        a=a+1;
        cout<<a;

}


