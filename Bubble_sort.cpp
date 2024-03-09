//Bubble Sort

#include<iostream>
using namespace std;

int main()
{
int arr[100],n,key,i,j,swap;
cout<<"Enter no. of Elements: ";
cin>>n;
cout<<"Enter Values: ";

for (i=0;i<n;i++)
{
   cin>>arr[i];
}

for (i=0;i<n;i++)
{
    for (j=i+1;j<n;j++)
        {
           if (arr[i]<arr[j])
            {
                swap=arr[i];
                arr[i]=arr[j];
                arr[j]=swap;
            }
        }
}

  for (i=0;i<n;i++)
    {
       cout<<" "<<arr[i];
    }
}
