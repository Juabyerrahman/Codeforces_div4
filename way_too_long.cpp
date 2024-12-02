
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
        int X=str.length();
        if(X>10){
        auto first=str.begin()+1;
        auto last =str.begin()+X-1;
        str.erase(first,last);
        string F=to_string(X);
       string Xu=str[0]+to_string(X-2)+str[X-1];    
        cout<<Xu<<endl;
        }
        else{
            court<<str<<endl;
        }
        
        n--;
        


    }

}
