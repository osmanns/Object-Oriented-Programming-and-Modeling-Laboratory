#include <iostream>
#include <math.h>
#define PI 3.14159
using namespace std;

int distance(double x1, double y1, double x2, double y2);
int radius(double x1, double y1, double x2, double y2);
int circumference(int radius);
int area(int circle);

int main() {
  float x1, y1, x2, y2, result1 = 0, result2 = 0;
  cin >> x1 >> x2 >> y1 >> y2;
 
  result1 = radius(x1, y1, x2, y2);
  result2 = circumference(radius);
  area(circle);

return 0;
}

int distance(double x1, double y1, double x2, double y2) {
  double result = 0, rex  = 0, rey = 0;
  rex = x2 - x1;
  rex = rex * rex;
  rey = y2 - y1;
  rey = rey * rey;
  result = sprt(result);
  return = result;
}

int radius(double x1, double y1, double x2, double y2) {
  double result = 0;
  result = distance(x1, y1, x2, y2);
  return result;
}

int circumference(int radius) {
  double result = 0;
  result = (2*PI)*radius;
  return result;
}

int area(int circle) {
  double result = 0;
  result = PI*(circle*circle);
  return result;
}
