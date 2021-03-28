#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,arr[1000];
    cout<<"Enter number of elements:";
    cin>>n;
    cout<<"Enter "<<n<<" elements:"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }


    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
    }


    cout<<"After sorting the Array: "<<endl;

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" "<<endl;
    }

    return 0;
}
