#include <iostream>
#include <list>
template <typename T>
struct boundIt
{
	T ub_, lb_;
	boundIt(T lb = 0, T ub = 0) : ub_(ub), lb_(lb) {}
	bool operator()(T x) { return (x <= ub_ && x >= lb_); }
};

template <typename T, typename Pred> // LINE-1
T find_if(T first, T last, Pred prd)
{
	while (first != last && !prd(*first))
		++first; // LINE-2
	return first;
}
void print(std::list<int> li, int lb, int ub)
{
	boundIt<int> bnd(lb, ub);
	std::list<int>::iterator it = find_if (li.begin(), li.end(), bnd); // LINE-3
	while (it != li.end())
	{
		std::cout << *it << " ";
		it = find_if(++it, li.end(), bnd);
	}
}
int main()
{
	std::list<int> li{30, 70, 10, 40, 20, 50, 60, 80};
	int l, u;
	std::cin >> l >> u;
	print(li, l, u);
	return 0;
}