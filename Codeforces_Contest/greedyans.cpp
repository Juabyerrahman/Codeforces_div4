#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    int sum;
    cin>>n;
    while(n>0)
    {
        int x,k;
        sum=0;
        
        cin>>x;
        cin>>k;
        vector<int> chest(x);
        for(int i=0;i<x;i++){  
            cin>>chest[i]; 
    
        }
        
        sort(chest.begin(),chest.end(),greater<int>());
        
        for(int i =0;i<x;i++){
            sum+=chest[i];
            if(sum>k)
            {
                sum-=chest[i];
                break;
            }
        }
        cout<<k-sum<<endl;
        n--;

    }
    

}