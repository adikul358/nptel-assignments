#include <iostream>
#include <map>
#include <list>
std::map<int, int> findFrequency(std::list<int> li)
{
	std::map<int, int> fqMap;
	for (std::list<int>::iterator it = li.begin(); it != li.end(); ++it) // LINE-1
		fqMap[*it]++;
	return fqMap;
}
void print(std::map<int, int> fq)
{
	for (std::map<int, int>::iterator it = fq.begin(); it != fq.end(); ++it) // LINE-2
		std::cout << it->first << " => " << it->second << ", ";
}
int main()
{
	std::list<int> li;
	int a;
	for (int i = 0; i < 10; i++)
	{
		std::cin >> a;
		li.push_back(a);
	}
	std::map<int, int> fq = findFrequency(li);
	print(fq);
	return 0;
}