#include <iostream>
#include <vector>
#include <math.h>
#include <tuple>
#include <algorithm>
using namespace std;
int n;
int unf[101];
vector<tuple<int, int, float>> dis;
float a, b, ans;


struct Star
{
	float x, y;
	Star(float a, float b)
	{
		x = a;
		y = b;
	}
};

bool comapre(tuple<int, int, float> a, tuple<int, int, float> b)
{
	return get<2>(a) < get<2>(b);
}

float FindCost(float x1, float y1, float x2, float y2)
{
	float tempX = abs(x1) - abs(x2) > 0 ? abs(x1) - abs(x2) : abs(x2) - abs(x1);
	float tempY = abs(y1) - abs(y2) > 0 ? abs(y1) - abs(y2) : abs(y2) - abs(y1);
	return sqrt(pow(tempX, 2) + pow(tempY, 2));
}

int Find(int v)
{
	if (v == unf[v])
		return v;
	else
		return unf[v] = Find(unf[v]);
}

void Union(int a, int b)
{
	int x = Find(a);
	int y = Find(b);
	if (x != y)
		unf[x] = y;
}

vector<Star> star;
int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		unf[i] = i;
	star.push_back(Star(0, 0));
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		star.push_back(Star(a, b));
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = i + 1; j <= n; j++)
		{
			float cost = FindCost(star[i].x, star[i].y, star[j].x, star[j].y);
			dis.emplace_back(i, j, cost);
		}
	}
	sort(dis.begin(), dis.end(), comapre);

	for (int i = 0; i < dis.size(); i++)
	{
		int a = Find(get<0>(dis[i]));
		int b = Find(get<1>(dis[i]));
		float cost = get<2>(dis[i]);
		if (a != b)
		{
			ans += cost;
			Union(a, b);
		}
	}
	printf("%.2f", ans);
	return 0;
}