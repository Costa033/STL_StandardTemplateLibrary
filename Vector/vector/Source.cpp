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
	ve.insert(ve.begin() + 2, 33);
	ve.emplace(ve.end() -1 , 323);

	//ve.pop_back();
	vector<int>v2 = { 0,11,22,33 };
	//ve.swap(v2);

	cout << ve.front() << endl;
	cout << ve.back() << endl;
	cout << v2[2] << endl;
	cout << v2.at(2) << endl;
	cout << "the Size= " << ve.size() << endl;
	cout << "the capacity is= " << ve.capacity() << endl;

	/*for (int i = 0;i < ve.size();i++)
	{
		cout << ve[i] << endl;
	}*/



	// Normal Iterator
	/*vector<int>::iterator it = ve.begin();
	for (it;it != ve.end();it++)
	{
		cout << *it << " ";
	}*/

	// Constant Normal Iterator
	/*vector<int>::const_iterator it = ve.cbegin();
	for (it;it != ve.cend();it++)
	{
		cout << *it << " ";
	}*/

	//Reverse Iterator  (Rbegin , Rend , Reverse_iterator)
	/*vector<int>::reverse_iterator it = ve.rbegin();
	for (it;it != ve.rend();it++)
	{
		cout << *it << " ";
	}*/

	//Constant Reverse Iterator  (Rbegin , Rend , Reverse_iterator)
	/*vector<int>::const_reverse_iterator it = ve.crbegin();
	for (it;it != ve.crend();it++)
	{
		cout << *it << " ";
	}*/

	//Auto Iterator
	auto it = ve.begin();
	for (it;it != ve.end();it++)
	{
		cout << *it << " ";
	}

	cout << "\n";
	if (ve.empty())
		cout << "vector is Empty\n";
	else
		cout << "Not empty\n";

	ve.resize(3);
	auto it2 = ve.begin();
	for (it2;it2 != ve.end();it2++)
	{
		cout << *it2 << " ";
	}

	ve.shrink_to_fit();

	return 0;
}