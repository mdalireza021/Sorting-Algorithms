#include<bits/stdc++.h>

using namespace std;

void quicksort(int arr[] ,int ,int );
int partition(int arr[] ,int ,int );

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
    quicksort(arr,0,n-1 );
    cout<<"After sorting the Array: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    return 0;

}
void quicksort(int arr[],int low,int high)
{
    if(high>low)
    {
        int p=partition(arr,low,high);
        quicksort(arr,low,p-1);
        quicksort(arr,p+1,high);

    }

}
int partition(int arr[],int low,int high)
{
    int pivot=arr[high];
    int i=low-1;

    for(int j=low; j<high; j++)
    {
        if(pivot>=arr[j])
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return (i+1);

}
