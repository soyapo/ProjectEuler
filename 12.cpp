#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define s second
#define f first
map <long long int, bool> p;
bool is_prime(long long int n){
    if (n == 1) return false;    
    long long int i = 2;
    while (i * i <= n){
        if (n % i == 0) return false;
        i += 1;
    }
    return true;
}
long long int count(long long int n){
    long long int t = 1, n2 = n; 
    for(long long int i = 2; i <= n2 / 2; i++){
        if(p[i] && !(n % i)){
            long long int c = 0;
            while(!(n % i))
                n /= i, c++;
            t *= c + 1;
        }
    }
    return (p[n2] ? t + 1 : t);
}
int main(){
    fst
    long long int i = 2, t;
    pair <long long int, long long int> n = {3, 3};
    while(i){
        p[i] = is_prime(i), t = n.s;
        if(i == n.s){
            if(count(n.s) > 200)
                return cout<<n.s, 0;
            n.s += n.f, n.f += 1;
        }
        i++;
    }
    return 0;
}