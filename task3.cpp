#include <iostream>
#include <vector>
//#include <string>

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













/*int main() {
	int min = 100000000; //100000000
	int max = 100100000; //999999999

	int answer = 0;

	for (int currentNumber = min; currentNumber < max; currentNumber++) {
		string str = to_string(currentNumber);
		vector<char> usedDigits;
		bool flag = false;
		for (int i = 0; i < 6; i++) {

			for (int j = 0; j < 4; j++) {

				for (int k = 0; k < usedDigits.size(); k++) 
				{
					if (str[j] == usedDigits[k]) 
						flag = true;
					else 
						usedDigits.push_back(str[j]);
				}
				if (flag)break;
			}
			if (flag)break;
		}
		if (!flag) answer++;
		else flag = false;
	}
	cout << answer;
	system("pause");
	return 0;
}*/















/*struct Point
{
	int x;
	int y;
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}
	Point() {
		x = 0;
		y = 0;
	}
};

int randInt(int min, int max) 
{
	return min + (rand() % ((max - min) + 1));
}

int euclidSquareDistance(Point p1, Point p2) 
{
	return pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2);
}

int main() {
	const int numberOfPoints = 10;
	const int minX = -100, maxX = 100;
	const int minY = -100, maxY = 100;

	vector<Point> points;
	int minSumDistance = -1;
	Point answerPoint;
	for (int i = 0; i < numberOfPoints; i++) 
	{
		points.push_back(Point(randInt(minX, maxX), randInt(minY, maxY)));
	}
	for (int y = minY; y < maxY; y++) {
		for (int x = minX; x < maxX; x++) {
			Point currentPoint = Point(x, y);
			int sumDistance = 0;
			for (int i = 0; i < points.size(); i++)
			{
				sumDistance += euclidSquareDistance(currentPoint, points[i]);
			}
			if (sumDistance < minSumDistance || minSumDistance == -1) 
			{
				minSumDistance = sumDistance;
				answerPoint = currentPoint;
			}
		}
	}


	for (int i = 0; i < points.size(); i++)
	{
		cout << "(" << points[i].x << ", " << points[i].y << ")" << endl;
	}
	cout << "(" << answerPoint.x << ", " << answerPoint.y << ")" << endl;
	system("pause");

	return 0;
}*/