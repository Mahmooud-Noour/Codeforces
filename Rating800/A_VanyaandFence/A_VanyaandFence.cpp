
#include <iostream>
using namespace std;

int main()
{
	int n, h;
	int Counter = 0;

	cin >> n >> h;
	while (n--)
	{
		int Length; cin >> Length;
		if (Length <= h)
			++Counter;
		else
			Counter += 2;
	}
	cout << Counter << endl;
	return 0;

}