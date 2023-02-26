#include<iostream>
using namespace std;
int main()
{
    int arr[]= {12,9,37,86,2,17,5};
    int i;
    int flag=0;
	int n=7;
	int x=37;
    for(i=0;i<n;i++)
    {
        if(x==arr[i])
        {
            cout<<"Number found at index "<<i;
            flag=1;
        }
    }
    if(flag==0)
    {
        cout<<"Number not found";
    }
    return 0;
}
