#include <iostream>
#include <vector>
#include <set>

using namespace std;

int gcd(int a, int b)
{
	int t;
	while (b != 0) {
		t = b;
		b = a%b;
		a = t;
	}
	return a;
}

int main()
{
	int n, a;
	vector<int> v;
	vector<int> w;
	set<int> s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		v.push_back(a);
	}
	for (int e : v) {
		s.insert(e);
	}
	int r;
	bool cont = true;
	while (v.size() > 1 && cont) {
		cont = false;
		for (int i = 0; i < v.size()-1; i++) {
			r = gcd(v[i],v[i+1]);
			auto sret = s.emplace(r);
			if (sret.second) { cont = true; } 
			w.push_back(r);
		}
		v = w;
		w.clear();
	}
	s.insert(v[0]);
	cout << s.size();
	return 0;
}
