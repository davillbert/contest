#include <iostream>

using namespace std;
using T = unsigned long long;

T pow(T x, T n)
{
        if (n == 0)
            return 1;

        if((n & 1) != 0)
            return pow(x, n-1) * x;
	else
	{
                auto t = pow(x, n >> 1);
                return (t * t);
	}
}

T palindrom(T N)
{
    T K, n = N;
    int L = 0;
    K = N / 10;

    while(K)
    {
        K = N / 10;
        N = N / 10;
        L++;
    }

    T revN = 0;

    for(int i = 0; i <= L; i++)
    {
            revN = revN + (n%10) * pow(10, abs(L - i));
            n = n / 10;
    }

    return revN;
}
int main()
{
        T A, B;
        cin >> A;
        cin >> B;
//	cout<<palindrom(A)<<endl;
        cout << (palindrom(A) + palindrom(B)) / 10 << endl;
}
