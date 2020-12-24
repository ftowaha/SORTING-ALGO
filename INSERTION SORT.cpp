#include<bits/stdc++.h>
using namespace std;
void insertion(int A[],int n)
{
    int temp;
    for(int i=1;i<=n-1;i++)
    {
        int j=i;
        while(j>0&&A[j-1]>A[j])
        {
            temp=A[j];
            A[j]=A[j-1];
            A[j-1]=temp;
            j--;
        }
    }
}
int main()
{
    int n=7,A[7]={1,4,2,3,9,5,8};
    insertion(A,n);
    for(int i=0;i<n;i++)
    cout<<A[i]<<endl;
    return 0;
}

