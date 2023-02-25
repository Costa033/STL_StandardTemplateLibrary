#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> ve;
	ve.push_back(10);
	ve.push_back(20);
	ve.push_back(30);
	ve.push_back(40);
	ve.push_back(50);

	//ve.pop_back();
	vector<int>v2 = { 0,11,22,33 };
	//ve.swap(v2);

	cout << ve.front() << endl;
	cout << ve.back() << endl;
	cout << v2[2] << endl;
	cout << v2.at(2) << endl;
	cout << "the Size= " << ve.size() << endl;
	cout << "the capacity is= " << ve.capacity() << endl;

	for (int i = 0;i < ve.size();i++)
	{
		cout << ve[i] << endl;
	}

	if (ve.empty())
		cout << "vector is Empty\n";
	else
		cout << "Not empty\n";


	return 0;
}