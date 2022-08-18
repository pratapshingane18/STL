#include <bits/stdc++.h>
using namespace std;

void sortpair(int a[],char b[],int n ){
    pair<int,char> parr[n];

    for(int i =0;i<n;i++){
        parr[i].first=a[i];
        parr[i].second=b[i];
    }

    sort(parr,parr+n);

    for (int i = 0; i < n; i++)
    {
        cout<<parr[i].second<<" ";
    }
    
}

int main(){

   int a[]={3,2,6,4,8,1,5};
   int n = sizeof(a)/sizeof(a[0]);

   char b[]={'s','e','a','z','x','t','b'};

   sortpair(a,b,n);





    return 0;

}