
#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n>0)
    {
        string str;
        cin>>str;
        int X=str.length()-1;
        auto first=str.begin()+1;
        auto last =str.begin()+X;
        str.erase(first,last);
        string F=to_string(X);
       string Xu=str[0]+to_string(X-1)+str[X];
        cout<<Xu<<endl;
        
        n--;
        


    }

}