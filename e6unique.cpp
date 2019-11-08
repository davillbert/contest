#include<iostream>
#include<vector>

using namespace std;
using ULL = unsigned long long;

ULL unique (ULL vec, ULL N, ULL A)
{
    ULL k = 0;
    for (ULL i = 0; i < N; ++i)
    {
        if(vec[i] == A) k++;
    }
    if (k) return 1;
    else return 0;

}

int main()
{

    ULL N = 0;
    cin >> N;
    vector<ULL>sequence;

    ULL S=0, seq, o = 1000000000;

    for(ULL i = 0; i < N; ++i)
        {
            cin >> seq;
            sequence.push_back(seq%o);
            S = S + seq%o;
        }
    for(ULL i = 0; i < N; ++i)
        {
            cin >> seq;
            if(unique(sequence, N + i, seq%o) == 0 && i % 2 == 0)
            {
                sequence.push_back(seq%o);
                S = S + seq%o;
            }
            if(unique(sequence, N + i, seq%o) == 1 && i % 2 == 1)
            {
                sequence.push_back(seq%o);
                S = S + seq%o;
            }
    cout << S << endl;
}
