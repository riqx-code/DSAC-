#include <bits/stdc++.h>
using namespace std;

pair<int,int> subarraySum(int A[], int n, long long s)
{   
    pair<int,int> res;
    long long sum = 0, st = 0;
    vector<long long> lrs(n), rls(n);
    for (int i = 0; i < n; i++)
    {
        sum += A[i];
        lrs[i] = sum;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        st += A[i];
        rls[i] = st;
    }
    // for(auto i : lrs){
    //     cout << i << " ";
    // }
    // cout << endl;
    // for(auto i : rls){
    //     cout << i << " ";
    // }
    // cout << endl;
    if(s = sum ){
        return {0,n-1};
    }

    if(s = sum-lrs[0]){
        return {1,n-1};
    }

    if(s = sum-rls[n-1]){
        return {0,n-2};
    }
    long long pre = 0;
    int one = 0 , two = n-1;
    for(int i =0;i<n;i++){
        for(int j = n-1;j<n;j++){
            if(sum-lrs[i])
        }
    }

}

int main(){
    int A[] = {1,2,3,4,5,6,7};
    subarraySum(A,7,1);
}