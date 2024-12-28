#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x;
    cin>>x;
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
        if(arr[i]==x)
        {
            return i;
        }
    }
    return -1;
}
