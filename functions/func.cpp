#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n==0||n==1){
        return 1;

    }
    return n*fact(n-1);
}

int nCr(int k,int r){

int num = fact(k);
int dimo = fact(r)*fact(k-r);
return num/dimo;

}
int main()
{
   cout<< nCr(8,2)<<endl;
   cout<< fact(0);
    return 0;
}