#include <iostream>
using namespace std;

int main() {
	double height;
	int mass;

	cout << "Boyunuzu daxil edin: ";
	cin >> height;
	cout << "Cekinizi daxil edin: ";
	cin >> mass;
	
	double bmi = mass / pow(height,2); 

	if (bmi <= 18.5)
		cout << bmi << ": You are underweight.";

	else if (bmi > 18.5 && bmi <= 24.9)
		cout << bmi << ": Your BMI is normal.";

	else if (bmi > 24.9 && bmi <= 29.9)
		cout << bmi << ": You are overwight.";

	else
		cout << bmi << ": Obesity.";
}