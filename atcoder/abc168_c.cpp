#include <bits/stdc++.h>
using namespace std;
 
int main () {
  int A,B,H,M;
  cin >> A >> B >> H >> M;
  double a = ((double) M / 60) * 2 * M_PI;
  double b = ((double) H / 12) * 2 * M_PI + ((double) M / (60 * 12)) * 2 * M_PI;
 
  double xm = A*cos(a);
  double ym = A*sin(a);
  double xh = B*cos(b);
  double yh = B*sin(b);
  printf("%.10f\n",sqrt(pow(xm-xh,2) + pow(ym-yh,2)));
}
