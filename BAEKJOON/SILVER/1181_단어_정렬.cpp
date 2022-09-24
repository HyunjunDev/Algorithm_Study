#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int n;
vector<string> words;

bool compare(const string& a, const string& b)
{
	if (a.length() > b.length())
		return false;
	else if (a.length() < b.length())
		return true;
	else
	{
		for (int i = 0; i < a.length(); i++)
		{
			if (a[i] > b[i])
				return false;
			else if (a[i] < b[i])
				return true;
		}
	}

}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		words.push_back(s);
	}

	sort(words.begin(), words.end());
	words.erase(unique(words.begin(), words.end()), words.end());
	sort(words.begin(), words.end(), compare);

	for (int i = 0; i < words.size(); i++)
		cout << words[i] << endl;

	return 0;
}