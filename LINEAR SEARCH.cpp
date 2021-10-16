#include<iostream>
using namespace std;
int main()
{
    int i, arr[10], n, l, r, mid;
    cout<<"Enter 10 Elements (in ascending order): ";
    for(i=0; i<10; i++)
        cin>>arr[i];
    cout<<"\nEnter Element to be Search: ";
    cin>>n;
    l = 0;
    r = 9;
    mid = (l+r)/2;
    while(l <= r)
    {
        if(arr[mid]<n)
            l = mid+1;
        else if(arr[mid]==n)
        {
            cout<<"\nThe number, "<<n<<" found at Position "<<mid+1;
            break;
        }
        else
        r = mid-1;
        mid = (l+r)/2;
    }
    if(l>r)
        cout<<"\nThe number, "<<n<<" is not found in given Array"<<endl;
    return 0;
}
