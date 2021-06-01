#include<iostream>
using namespace std;

int main()
{
    int n,i=3;
    cin>>n;
    
    for(int j=1; j<=3;j++)
    {
        for (int k = 1; k <=n; k++)
        {
            if((j+k)%4==0 || (j==2&&k%4==0))
            {
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
        
    }
}