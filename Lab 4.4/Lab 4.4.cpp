#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, start, end, step, y, R;
	int p = atan(1.0) * 4;
	cout << "xp = "; cin >> start;
	cout << "xk = "; cin >> end;
	cout << "dx = "; cin >> step;
	cout << "R = "; cin >> R;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = start;
	while (x <= end)
	{
		if (x <= -7 - R)
			y = R;
		else
			if (x > -7 - R && x <= -7 + R)
				y = -sqrt(pow(R, 2) - pow(x + 7, 2));
			else
				if (x > -7 + R && x <= -4)
					y = R;
				else
					if (x > 4 && x <= 0)
						y = -(x - R) / 4;
					else
						if (x > 0 && x <= p) {
							y = sin(x);
						}
						else
							y = tan((45 * p) / 180) * x - p;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += end;
	}
	cout << "---------------------------" << endl;
	return 0;
}
