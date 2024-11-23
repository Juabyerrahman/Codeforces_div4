#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n!=0)
    {
        int x;
        cin>>x;
        if(x<100)
        {
            int sum ;
            sum+=x%10;
            sum+=x/10;
            cout<<" "<<sum<<endl;
            sum=0;
        }
        n--;
    }
}
