#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n; cin >> n;
	const auto& x = static_cast<int>(sqrt(n));
	auto ans = int{ x };
	for (auto i = x - 1; i <= x + 1; ++i) {
		if (i * i <= n) {
			ans = i;
		}
	}

	cout << "The largest square has side length " << ans << ".";

	return 0;
}