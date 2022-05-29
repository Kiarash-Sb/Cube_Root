#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float num, ans;
	cout << "Enter a number:	";
	cin >> num;
	ans = cbrt(num);
	cout << "Cube root of " << num << " is " << ans;
	return 0;
}
