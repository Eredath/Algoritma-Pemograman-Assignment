#include <iostream>
using namespace std;

int main()
{
	int A = 3, B = 6, C = 2;
	int K = 5, L = 4, M = 3;
	
	int a, b, c, d, e;
	
	a = 4 + 2 > A && B - 2 > 3 > + 2 || B + 2 <= 6 + 2;
	b = K + 5 < M || (C * M < L && 2 * M - L > 0);
	c = L + 5 < M || C * K < L && 2 * K - L > 0;
	d = A * 4 <= 3 * M + B;
	e = K + 10 > A && L - 2 > 4 * C;
	
	cout << "Hasil a = " << a << endl;
	cout << "Hasil b = " << b << endl;
	cout << "Hasil c = " << c << endl;
	cout << "Hasil d = " << d << endl;
	cout << "Hasil e = " << e << endl;
	
	return 0;
}
