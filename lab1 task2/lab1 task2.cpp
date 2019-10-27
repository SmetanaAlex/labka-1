
#include <iostream>
using namespace std;
int main()
{
	unsigned long long n,i,b,z;
	cout << "Enter n" << endl;
	cin >> n;
	b = n % 2;
	if (b == 0) {
		cout << "NO it is not  Carmichael number  because it is pair number" << endl;
		return 1;
	 }
	for (int i = 2; i < n; i++)
	{
		if (n % (i*i) == 0) {
			cout << "NO it is not  Carmichael number because it is devided by the root of the number" << endl;
			return 1;
	     }
 	
	}
	i = 3;
	while (i <= n) {
		z = n % i;
		if (z == 0) {
			cout << i << "; ";
			n = n / i;
		}
		i++;
	}
	cout << endl;
		cout << "Yes it is Carmichael number" << endl;
	system("pause");
}
