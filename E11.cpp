#include <iostream>
#include <math.h>
using namespace std;
using LL = long long;

double distance(int px,int py,int XX,int YY) //возращает значение от точки до прямой px, py - координаты точки
    {
    double dist = 0;
    int vect = 0;
  vect = px * YY - XX * py;
  double dlina = sqrt(px * px + py * py);
  dist = abs(vect/dlina);
          return dist;
    }


//bool scal(int px,int py,int XX,int YY) //скалярное произведение
  //  {
  //if ( px * XX + py * YY >= 0 ) return 1;
  //else return -1;
   // }







struct circle
    {
        int X;
        int Y;
        int R;
    };
int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
   int px = x2 - x1;
   int py = y2 - y1;
    int N;
    cin >> N;


    LL *numbers = (LL*)malloc(sizeof(LL)*(N));
    for (LL i = 0; i < N; ++i)
    {
        numbers[i] = 0;
    }


    for (LL i = 0; i < N; ++i)
    {
        circle C;
        cin >> C.X >> C.Y >> C.R;
        if ((distance(px, py, C.X - x1, C.Y - y1) < C.R) && (((-1 * px) * (C.X - x1) + (-1 * py) * (C.Y - y1)) <= 0)) numbers[i] = i + 1;
        else numbers[i] = 0;
    }

    for (LL i = 0; i < N; ++i)
    {
        if (numbers[i]) cout << numbers[i] << " ";
    }
}
