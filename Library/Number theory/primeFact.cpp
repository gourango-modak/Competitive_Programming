

void primeFact(ll n) {
	vector<pair<int, long long>> val;
	for (long long i = 2; i * i <= n; ++i) {
		int cnt = 0;
		while (n % i == 0) {
			++cnt;
			n /= i;
		}
		if (cnt > 0) {
			val.push_back({cnt, i});
		}
	}
	if (n > 1) {
		val.push_back({1, n});
	}
}