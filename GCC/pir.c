//
#include <stdio.h>
#include <math.h>
int main(){
	long long int t;
	long int X, Y, Z, x, y, z;
	double a, b, c, d;
	double volume;
	int U, V, W, u, v, w;
	scanf("%lld", &t);
	while(t != 0){
		scanf("%d", &w);
		scanf("%d", &v);
		scanf("%d", &u);
		scanf("%d", &U);
		scanf("%d", &V);
		scanf("%d", &W);
		X = (w - U + v) * (U + v + w);
		x = (U - v + w) * (v - w + U);
		Y = (u - V + w) * (V + w + u);
		y = (V - w + u) * (w - u + V);
		Z = (v - W + u) * (W + u + v);
		z = (W - u + v) * (u - v + W);
		//printf("%d %d %d %d %d %d\n", X, x, Y, y, Z, z);
		a = sqrt(x) * sqrt(Y) * sqrt(Z);
		b = sqrt(y) * sqrt(Z) * sqrt(X);
		c = sqrt(z) * sqrt(X) * sqrt(Y);
		d = sqrt(x) * sqrt(y) * sqrt(z);
		//printf("%.4lf %.4lf %.4lf %.4lf\n", a, b, c, d);
		volume = sqrt((-a + b + c + d));
		//printf("%.4lf\n", volume);
		volume = volume * sqrt((a - b + c + d));
		//printf("%.4lf\n", volume);
		volume = volume * sqrt((a + b - c + d));
		//printf("%.4lf\n", volume);
		volume = volume * sqrt((a + b + c - d));
		//printf("%.4lf\n", volume);
		volume = volume / (192.0f * u * v * w);
		printf("%.4lf\n", volume);
		t--;
	}
	return 0;
}
