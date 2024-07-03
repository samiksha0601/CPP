//  Write a C++ program to swap the first and last digits of any number.
//   Sample Output: Input no:2345 after swapping no:5342

#include<iostream>
using namespace std;


// void swap(int n)
// {
// int quo;
// int rem=n%10;
// while(n>1)
// {
//     quo=n/10;

// }
// int temp=rem;
// rem=quo;
// quo=temp;
// cout<<rem<<quo;
// }


int swap(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
  int temp=arr[0];
  arr[0]=arr[n];
  arr[n]=temp;
 }
// cout<<arr[i];
}
int main()
{
 int n;
 int arr[n];
 cout<<"Enter the size of array";
 cin>>n;
cout<<"Enter a number";
for(int i=0;i<n;i++)
cin>>arr[i];
for(int i=0;i<n;i++)
cout<<arr[i]=swap(arr[n],n);
//int arr[i]=swap(arr[n]);
cout<<"Swapped number";
// for(int i=0;i<n;i++)
// cout<<arr[i];


}


