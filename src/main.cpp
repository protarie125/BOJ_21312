#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto ov = vector<int>{};
	auto ev = vector<int>{};
	for (auto i = 0; i < 3; ++i) {
		int x;
		cin >> x;

		if (0 == x % 2) {
			ev.push_back(x);
		}
		else {
			ov.push_back(x);
		}
	}

	if (0 == ov.size()) {
		auto ans = int{ 1 };
		for (const auto& x : ev) {
			ans *= x;
		}

		cout << ans;
	}
	else {
		auto ans = int{ 1 };
		for (const auto& x : ov) {
			ans *= x;
		}

		cout << ans;
	}

	return 0;
}