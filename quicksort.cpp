#include <iostream>
#include<stdlib.h>
#include<string.h>
#include <string>
using namespace std;
long long x[1000001];
int n;
void qsort(int a,int b)
{
    int i=a, j=b;
    long long xmid=x[(a+b)/2];
    while(i<=j)
    {
        while(x[i]<xmid)i++;
        while(x[j]>xmid)j--;
        if(i<=j)
        {
            swap(x[i],x[j]);
            i++;
            j--;
        }
        if(a<j)qsort(a,j);
        if(i<b)qsort(i,b);
    }
}


int main()
{
cin>>n;
for(int i=1;i<=n;i++)cin >> x[i];

qsort(1,n);

for(int i = 1; i<=n;i++) cout << x[i]<<endl;

}
