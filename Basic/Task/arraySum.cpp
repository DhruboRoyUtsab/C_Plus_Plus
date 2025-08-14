#include <iostream>
using namespace std;

int main()
{
    int i, sum = 0, size;
    float avg;

    cout<<"Please Enter the size of the array: ";
    cin>>size;

    int arr[size];

    cout<<"Please enter the numbers: "<<endl;
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    cout<<"\nReverse Order: "<<endl;
    for(i=size-1; i>=0; i--)
    {
        cout<<arr[i]<<endl;
    }

    cout<<"\nThe summation is: "<<endl;
    for(i=0; i<size; i++)
    {
        sum = sum + arr[i];
    }
    cout << sum <<endl;

    avg = sum/size;
    cout<<"\nThe Average is: " << avg<<endl;

    return 0;
}
