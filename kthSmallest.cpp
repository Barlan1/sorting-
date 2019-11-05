//kth smallest element

#include<iostream>
using namespace std;
void insort(int a[],int n)
{
int j, key ,i;

for( j=1; j<n;j++)
{
key = a[j];
i=j-1;

while(i>=0 && a[i]>key)
{
a[i+1]=a[i];
i=i-1;
}
a[i+1] =key;
}
}

int kth(int a[], int n, int k)
{
insort(a, n);

return a[k-1];
}
int main()
{
int a[]= { 12,123,87,6, 5, 7, 19};
int n = sizeof(a)/sizeof(a[0]);
cout<<kth(a,n,6);
return 0;
}

