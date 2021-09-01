#include <iostream>
#include <vector>

using namespace std;

int recurs(int x, int y) {

	if (x <= 2 && y >= 3) 
	{
		return 0;
	}
	else if (x == 5 && y == 5) 
	{
		return 1;
	}
	else 
	{
		int sum = 0;
		if (x < 5)sum += recurs(x + 1, y);
		if (y < 5)sum += recurs(x, y + 1);
		return sum;
	}
}


int main() {
	int arr[5][5];

	cout << recurs(0, 0);

	system("pause");
	return 0;
}
