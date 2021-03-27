#include<bits/stdc++.h>
using namespace std;
int arr[1000];
int temp[1000];
void sorting(int,int);
int main()
{
    int n;
    cout<<"Enter number of elements:";
    cin>>n;
    cout<<"Enter "<<n<<" elements:"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    sorting(0,n-1);

    cout<<"After sorting the Array: ";

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" "<<endl;
    }

    return 0;
}


void sorting(int start,int end)
{
    int mid;
    if(start==end)
        return;

    mid=(start+end)/2;
    sorting(start,mid);
    sorting(mid+1,end);
    int i,j,k;
    for(i=start,j=mid+1,k=start; k<=end; k++)
    {
        if(i==mid+1)
        {
            temp[k]=arr[j++];
        }
        else if(j==end+1)
        {
            temp[k]=arr[i++];

        }
        else if(arr[i]>arr[j])
        {
            temp[k]=arr[j++];
        }
        else
            temp[k]=arr[i++];
    }

    for(k=start; k<=end; k++)
    {
        arr[k]=temp[k];
    }

}
