#include<bits/stdc++.h>
#include<stack>
#include<vector>
using namespace std;

int main(){
        vector<int> a={3,12,120,24,1};
        sort(a.begin(), a.end());
        int flag=0;

        for(int i=0;i<a.size();i++){
            for(int j=i+1;j<a.size();j++){
                if(a[j]%a[i]==0)
                    flag=1;
            }
            if(flag==0)
            {
                cout<<"false";
                break;
            }
        }
        cout<<"true";
}





