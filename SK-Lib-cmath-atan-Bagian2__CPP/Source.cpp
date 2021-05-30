// CPP code to illustrate
// the use of atan function

#include <iostream>
#include <cmath>
#include <conio.h>

/*	Source by GeeksForGeeks
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019
*/

using namespace std;

#define PI 3.14159265

int main() {
	double k, ret, val;

	// Take any value
	k = 1.0;
	ret = atan(k);
	val = (ret * 180) / PI;
	cout << "The arctangent of " << k << " is " << ret
		<< " radians or " << val << " degrees";

	_getch();
	return 0;
}
