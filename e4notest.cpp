#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;
using ULL = unsigned long long;

int main(void)
{
    int old_base;
    char N[1024], *subnumber = (char*)&N;
    ULL answer = 0;

    cin >> old_base >> N;

    while(strlen(subnumber) > 0)
    {
        if(subnumber[0] >= '0' && subnumber[0] <= '9')
            answer += (subnumber[0] - '0') * pow(old_base, strlen(subnumber) - 1);
        if(subnumber[0] >= 'A' && subnumber[0] <= 'Z')
            answer += (subnumber[0] - 'A' + 10) * pow(old_base, strlen(subnumber) - 1);
        if(subnumber[0] >= 'a' && subnumber[0] <= 'z')
            answer += (subnumber[0] - 'a' + 10) * pow(old_base, strlen(subnumber) - 1);
        subnumber++;
    }

    cout << answer;
}

