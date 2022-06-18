#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter array size: ";
    cin>> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    sort(arr,arr+n); // sort(array_name,array_name+last_index)
    //in ascending order
    cout<<"After sorting array: ";
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
}
