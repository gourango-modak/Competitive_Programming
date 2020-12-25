void genTestCase()
{
	fo(p, 10) {
		int dim = rand()%10+1;
		cout << dim << "\n";
		fo(i, dim) {
			fo(i, dim) cout << test[rand()%26];
			cout << "\n";
		}
	}
}