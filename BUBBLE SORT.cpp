#include<bits/stdc++.h>
using namespace std;
void bubble(int ARR[],int n)
{
    int intmin;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(ARR[j]>ARR[j+1])
            {
                intmin=ARR[j+1];
                ARR[j+1]=ARR[j];
                ARR[j]=intmin;
            }
        }
    }
}
int main()
{
    int n=7,ARR[7]={1,4,2,3,9,5,8};
    bubble(ARR,n);
    for(int i=0;i<n;i++)
        cout<<ARR[i]<<endl;
    return 0;
}
