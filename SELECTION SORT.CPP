#include<bits/stdc++.h>
using namespace std;
void selection(int ARR[],int n)
{
    int intmin;
    for(int i=0;i<n;i++)
    {
        intmin=i;
        for(int j=i+1;j<n;j++)
        {
            if(ARR[intmin]>ARR[j])
                intmin=j;
        }
        if(intmin!=i)
        {
            int x=ARR[i];
            ARR[i]=ARR[intmin];
            ARR[intmin]=x;
        }
    }
}
int main()
{
    int n=7,ARR[7]={1,4,2,3,9,5,8};
    selection(ARR,n);
    for(int i=0;i<n;i++)
        cout<<ARR[i]<<endl;
    return 0;
}
