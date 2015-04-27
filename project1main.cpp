#include <iostream>

#include "Double_node.h"
#include "Double_sentinel_list.h"

using namespace std;

int main()
{
	Double_sentinel_list<int> list;

	list.push_front(15);
	list.push_front(14);
	list.push_back(16);
	list.push_back(17);

	cout << list << endl;

	Double_sentinel_list<int> listCopy(list);

	cout << "List copy: " << listCopy << endl;
	/*cout << list << endl;

	cout << "List size: " << list.size() << endl;

	//list.pop_front();	

	cout << list << endl;

	cout << "front: " << list.pop_front() << endl;
	cout << "back: " << list.pop_back() << endl;


	cout << list << endl;

	cout << "count=1 as is: " << list.erase(15) << endl;
	cout << list << endl;
	//list.~Double_sentinel_list<int> list();
	//cout << list << endl;
	//list.push_front(15);
	//cout << list << endl;*/


	return 0;
}