#include<vector>
#include"Player.h"

using std::cout;
using std::endl;
using std::string;
using std::vector;


int main()
{
	vector<Player*> vec;
	vector<Player*>::iterator iter;

	vec.push_back(new Player("A", 10, 10, 5, 3));
	vec.push_back(new Player("B", 11, 10, 5, 3));
	vec.push_back(new Player("C", 12, 10, 5, 3));
	vec.push_back(new Player("D", 13, 10, 5, 3));

	for (iter = vec.begin(); iter != vec.end(); ++iter)
	{
		(**iter).ToString();
	}

	cout << "size : " << vec.size() << endl;
	cout << "capacity : " << vec.capacity() << endl;

}

