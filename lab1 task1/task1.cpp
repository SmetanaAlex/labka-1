//Знайти біномінальний коефіцієнт n!/k!(n-k)!. Та розкласти на прості множники
#include <iostream>
using namespace std;
unsigned long long combinations(unsigned long long k, unsigned long long n);
int main()
{
	unsigned long long k, n, x, y, i, b;
	cout << "Enter n" << endl;
	cin >> n;
	cout << "Enter k" << endl;
	cin >> k;
	x = combinations(k, n);
	cout << x << endl;
	y = x;
	i = 2;
	cout << "Simple multiples :";
	while (i <= y) {
		b = y % i;
		if (b == 0) {
			cout <<" "<< i << ";";
			y = y / i;
			i = 1;
		}
		i++;
	}
	cout << endl;
	system("pause");

}
unsigned long long combinations(unsigned long long k, unsigned long long n) {

	unsigned long long u = 1, v = 1;
	for (unsigned long long i = 1; i <= n - k; i++)
	{
		u *= k + i;
		v *= i;

	}
	return  u / v;
}