#include <cmath>
// bee bee im sheep
double hlgs(int x1, int y1, int x2, int y2, int x3, int y3)
{
	double p1 = sqrt(pow(abs(x1 - x2), 2)+pow(abs(y1 - y2), 2));
	double p2 = sqrt(pow(abs(x1 - x3), 2)+pow(abs(y1 - y3), 2));
	double p3 = sqrt(pow(abs(x2 - x3), 2)+pow(abs(y2 - y3), 2));
	double p = (p1 + p2 + p3) / 2;
	return sqrt(p * (p - p1) * (p - p2) * (p - p3));
}
