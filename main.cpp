#include <iostream>
#include <string>
using namespace std;

//main function to calculate bmi

void bmi() {
	float weight;
	float height;
	cout << "Hello, Welcome to my shitty BMI calculator \n\n";
	cout << "Please type your height in 'M': \n";
	cin >> height;
	cout << "Now enter your weight in 'KG': \n";
	cin >> weight;

	float bmical = weight / (height * height);
	cout << "Your BMI is: " << bmical << endl;

	if (bmical <= 18.5)
	{
		cout << "Your are under weight" << endl;
	}
	else if (bmical <= 24.9)
	{
		cout << "Your are fit brah, Good job. Zyzz is proud of you" << endl;
	}
	else if (bmical <= 29.9)
	{
		cout << "Your are fat brah build your dream body!" << endl;
	}
	else
	{
		cout << "You are really fucking fat brah, Rejcet modernity, Embrace gym!!" << endl;
	}
}

int main() {
	bmi();
	system("pause");
	return 0;
}