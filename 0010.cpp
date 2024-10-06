#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
long long int s;
int is_prime(int n){
    if (n == 1) return false;    
    int i = 2;
    while (i * i <= n) {
        if (n % i == 0) return 0;
        i += 1;
    }
    return 1;
}
int main(){
    fst
    for(int i = 2; i < 2e6; i++)
        s += (is_prime(i) ? i : 0);
    cout<<s;
    return 0;
}