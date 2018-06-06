#include <iostream>
#include <iomanip>

using namespace std;

int main () {
	
	double a, b;
	cin >> a >> b;
	a = (a * 0.35);
	b = (b * 0.75);
	cout << fixed << setprecision(5) << "MEDIA = " << ((a+b)/1.1) << endl;	
	
	return 0;
}