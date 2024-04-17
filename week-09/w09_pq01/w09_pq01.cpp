#include <iostream>
#include <algorithm>
#include <vector>
class player
{
public:
	player(int rank, std::string name) : rank_(rank), name_(name) {}
	int get_rank() { return rank_; }
	std::string get_name() { return name_; }

private:
	int rank_;
	std::string name_;
};
struct cmpByName
{
	bool operator()(player p1, player p2) {
		return p1.get_name().size() < p2.get_name().size();
	}
	// code-segment-1
};
struct cmpByRank
{
	bool operator()(player p1, player p2) {
		return p1.get_rank() < p2.get_rank();
	}
	// code-segment-2
};
int main()
{
	int a, c;
	std::string b;
	std::vector<player> pv;
	for (int i = 0; i < 4; i++)
	{
		std::cin >> a >> b;
		player p(a, b);
		pv.push_back(p);
	}
	std::cin >> c;
	if (c == 1)
		std::sort(pv.begin(), pv.end(), cmpByRank());
	else if (c == 2)
		std::sort(pv.begin(), pv.end(), cmpByName());
	for (std::vector<player>::iterator it = pv.begin(); it < pv.end(); it++)

		std::cout << it->get_rank() << " : " << it->get_name() << std::endl;
	return 0;
}