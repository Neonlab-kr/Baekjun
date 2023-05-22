//#include <bits/stdc++.h>
//using namespace std;
//typedef complex<double> base;
//typedef long long lint;
//const double PI = acos(-1);
//
//typedef complex<double> base;
//void fft(vector<base> &a, bool inv = false) {
//	int n = a.size(), j = 0;
//	vector<base> roots(n / 2);
//	for (int i = 1; i < n; i++) {
//		int bit = (n >> 1);
//		while (j >= bit) {
//			j -= bit;
//			bit >>= 1;
//		}
//		j += bit;
//		if (i < j) swap(a[i], a[j]);
//	}
//	double ang = 2 * acos(-1) / n * (inv ? -1 : 1);
//	for (int i = 0; i < n / 2; i++) {
//		roots[i] = base(cos(ang * i), sin(ang * i));
//	}
//	for (int i = 2; i <= n; i <<= 1) {
//		int step = n / i;
//		for (int j = 0; j < n; j += i) {
//			for (int k = 0; k < i / 2; k++) {
//				base u = a[j + k], v = a[j + k + i / 2] * roots[step * k];
//				a[j + k] = u + v;
//				a[j + k + i / 2] = u - v;
//			}
//		}
//	}
//	if (inv) for (int i = 0; i < n; i++) a[i] /= n;
//}
//
//vector<lint> multiply(vector<lint> &v, vector<lint> &w) {
//	vector<base> fv(v.begin(), v.end()), fw(w.begin(), w.end());
//	int n = 2; while (n < v.size() + w.size()) n <<= 1;
//	fv.resize(n); fw.resize(n);
//	fft(fv, 0); fft(fw, 0);
//	for (int i = 0; i < n; i++) fv[i] *= fw[i];
//	fft(fv, 1);
//	vector<lint> ret(n);
//	for (int i = 0; i < n; i++) ret[i] = (lint)round(fv[i].real());
//	return ret;
//}
//void fastIO() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//}
//int main() {
//	fastIO();
//	int n;
//	cin >> n;
//	vector<lint> a(n * 2), b(n);
//	for (int i = 0; i < n; i++) { cin >> a[i]; a[i + n] = a[i]; }
//	for (int i = 1; i <= n; i++) cin >> b[n - i];
//	vector<lint> ret = multiply(a, b);
//	lint ans = 0;
//	for (lint a : ret) {
//		ans = max(a, ans);
//	}
//	cout << ans << "\n";
//}
//
///*
//고속푸리에변환 활용
//FFT방식
//만약 1234와 5678이 주어질 경우
//12341234
//5678
//이렇게 놓고 5678을 한칸씩 이동시키면서 위의 숫자와 곱하고 해당 값을 저장하여 비교
//*/