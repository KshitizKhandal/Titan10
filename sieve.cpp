
/*Implementation of sieve of eratosthenes algorithm
 * This program takes a user input n and prints all prime less than equal to n,with time complexity of O(nloglogn)
 * */


#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ar[n+1];
    ar[0]=1;
    ar[1]=1;
    for(int i=2;i<=n;i++){
        ar[i]=0;
    }
    for(int i=2;i<=n;i++){
        if(ar[i]==0){
            for(int j=i*i;j<=n;j+=i)
            ar[j]=1;
        }
    }
    for(int i=2;i<=n;i++)
    if(ar[i]==0){
        cout<<i<<" ";
    }
}
