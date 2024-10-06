#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int v(){
    for(int i = 1; i < 334; i++)
        for(int j = i + 1; j < 1000; j++)
            for(int k = j + 1; k < 1000; k++)
                if(i * i + j * j == k * k && i + j + k == 1000)
                    cout<<i<<' '<<j<<' '<<k;
}
int main(){
    fst
    v();
    return 0;
}