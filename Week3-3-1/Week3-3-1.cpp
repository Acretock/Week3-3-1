#include <set>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool toLow(string a, string b) {
	for (char& j : a)
		j = tolower(j);
	for (char& j : b)
		j = tolower(j);
	return (a < b);
}

class SortedStrings
{
public:
	SortedStrings();
	~SortedStrings();
	void AddString(const string& s) {
		values.push_back(s);
		sort(begin(values), end(values), toLow);
	}
	vector<string>GetSortedStrings() { return values; }
private:
	vector<string> values;
};


SortedStrings::SortedStrings()
{
}

SortedStrings::~SortedStrings()
{
}

void PrintSortedString(SortedStrings& strings) {
	for (const string& i : strings.GetSortedStrings())
		cout << i << ' ';
	cout << endl;
}
int main()
{
	SortedStrings arr;
	arr.AddString("first");
	arr.AddString("third");
	arr.AddString("second");
	PrintSortedString(arr);
	arr.AddString("second");
	PrintSortedString(arr);
}
