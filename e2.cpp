#include <stdio.h>
#include <iostream>

using namespace std;
int main()
{
	long long X, tmp;
	cin>>X;
	float *vect=(float*)malloc(sizeof(float)*(X)), scal=0;
	for(int i=0; i<X; ++i) cin>>vect[i];
	for(int i=0; i<X; ++i)
	{
		cin >> tmp;
		vect[i] *= tmp;
		scal += vect[i];
	}
	
	printf("%.4f", scal);
}
