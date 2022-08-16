/*

Macros Vs Template 

1)Macros does not do type checking
2) It error prone as it is simply search and replace
3) It is difficult to debug

All this problems can be overcame from template

Template is great to avoid rewritting the code for different data type */

#include<bits/stdc++.h>
using namespace std;

template <typename T>

T findmax(T x, T y){
    return (x > y ) ? x : y;
 }

 int main(){
    cout<<findmax<int>(1,2)<<endl;

    cout<<findmax<char>('a','j')<<endl;

    return 0;
 }