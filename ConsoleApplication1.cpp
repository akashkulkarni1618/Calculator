#include <iostream>
#include <cmath>
using namespace std;
double operation(double a, double b)
{
	int c;
	cout << "Enter the operator: " << endl;
	cin >> c;
	switch (c)
	{
	case 1:
		return a + b;
		break;
	case 2:
		return a - b;
		break;
	case 3:
		return a * b;
		break;
	case 4:
		if (b == 0)
		{
			cout << "Error: Division by 0.\n";
		}
		else
			return a / b;
		break;
	case 5:
		return pow(a, b);
		break;
	case 6:
		return (int)a % (int)b;
		break;
	case 7:
		return abs(a);
		break;
	default:
		cout << "Error\n";
	}
	return 0;
}
//The following values of c have been assigned for different mathematical operators:
//1 - Addition
//2 - Subtraction
//3 - Multiplication
//4 - Division
//5 - Exponentiation
//6 - Remainder after division
//7 - Absolute value (Modulus) of a
int main()
{
	double x, y;
	cout << "Enter the value of x: " << endl;
	cin >> x;
	cout << "Enter the value of y: " << endl;
	cin >> y;
	double z = operation(x, y);
	cout << "The result is: " << z << endl;
	return 0;
}




