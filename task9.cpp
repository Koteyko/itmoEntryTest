#include <iostream>
#include <vector>

using namespace std;


struct Point
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
}