#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0)
    {
        int n;
        int sum=0;
        
        cin>>n;

        char arr[n][4];
        for (int i = 0; i <n; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cin>>arr[i][j];
            }
            
         
        }
       
        for (int  i = n-1; i >=0; i--)
        {
            for (int  j = 0; j < 4; j++)
            {
                if(arr[i][j]=='#')
                {
                    cout<<j+1<<" ";
                    sum+=j+1;
                }
            }
            

            
         
        }
        if(sum>500){
            break;
        }
t--;

        
    }
}