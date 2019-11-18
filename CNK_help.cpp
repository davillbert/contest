#include <iostream>
#include <inttypes.h>
using namespace std;

using ULL = unsigned long long;
//using ULL = unit_64;
ULL elementus[68][68];


ULL C(ULL n, ULL k)
{
   // ULL** elementus = (ULL**)malloc(n * sizeof(ULL));
   // for(ULL i = 0; i < n; ++i) elementus[i] = (ULL*)malloc(k*sizeof(ULL));
    
    if(elementus[n][k]) return elementus[n][k];
    if(n == k) elementus[n][k] = 1;
    if(k == 0) elementus[n][k] = 1;
    if(k == 1) elementus[n][k] = n;
    if((n != k) && (k != 0) && (k != 1)) elementus[n][k] = C(n - 1, k - 1) + C(n - 1, k);
    return elementus[n][k];
}

int main()
{
    ULL N, K;
    cin >> N >> K;
    cout << C(N, K);
}
