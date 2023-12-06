#include <iostream>
using namespace std;

int factorial(int num)
{
	int ans = 1;
	if (num < 0)
	{
		cout << "cant find the factorial of negetive number";
	}
	for (int i = 1; i <= num; ++i)
	{
		ans *= i;
	}
	return ans;
}
int main()
{
	int num;
	cout << "Enter the number: ";
	cin >> num;
	int ans = factorial(num);
	cout << "The factorial of " << num << "is " << ans << endl;
}
