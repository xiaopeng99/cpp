#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <math.h>
using namespace std;
struct Point
{
	int x;
	int y;

	Point() {};
	Point(int x_, int y_) : x(x_), y(y_) {};
};

struct VerticalLine
{
	int x;
	int minY;
	int maxY;

	VerticalLine() {};
	VerticalLine(int x_, int min_, int max_) :x(x_), minY(min_), maxY(max_) {};
};

// 计算线段上的格子
void PointLine(std::vector<Point*>& result, Point p0, Point p1)
{
	int dx = p1.x - p0.x;
	int dy = p1.y - p0.y;

	int N = std::max<int>(abs(dx), abs(dy));

	float divN = (N == 0) ? 0.0 : 1.0 / N;
	float xStep = dx * divN;
	float yStep = dy * divN;

	float x = p0.x;
	float y = p0.y;

	for (int step = 0;step <= N; step++) {
		result.push_back(new Point(round(x), round(y)));

		x += xStep;
		y += yStep;
	}
}

// 计算三角形覆盖的格子
void TrianglePoint(std::vector<Point*>& result, Point p0, Point p1, Point p2)
{
	std::map<int, VerticalLine*> data;

	std::vector<Point*> list;
	PointLine(list, p0, p1);
	PointLine(list, p1, p2);
	PointLine(list, p2, p0);

	Point* tmpPoint;
	VerticalLine* tmpVerLine;

	std::map<int, VerticalLine*>::iterator mIter;
	for (auto p : list) 
	{
		mIter = data.find(p->x);
		if (mIter == data.end())
		{
			data.insert(std::pair<int, VerticalLine*>(p->x, new VerticalLine(p->x, p->y, 0)));
			continue;
		}

		tmpVerLine = (*mIter).second;
		if (p->y >= tmpVerLine->minY) {
			tmpVerLine->maxY = p->y;
			continue;
		}

		tmpVerLine->maxY = tmpVerLine->minY;
		tmpVerLine->minY = p->y;
	}

	for (auto item : data) {
		tmpVerLine = item.second;

		for (int y = tmpVerLine->minY;y <= tmpVerLine->maxY;y++)
		{
			result.push_back(new Point(tmpVerLine->x, y));
		}
	}
}

int main()
{
	std::vector<Point*> res;
	Point p0(1, 4);
	Point p1(4, 6);
	Point p2(6, 3);

	TrianglePoint(res, p0, p1, p2);
    cout<<res.size();
	return 0;
}
