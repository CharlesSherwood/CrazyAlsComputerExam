/*Charles Sherwood 
	Exam1
Date:3/10/25
*/

#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

//Get Sales Numbers Nothing below 0
double Sales()
{
	double sales;
	cout << "Please Enter The Ammount Of Commision made this month:";
	cin >> sales;
	while (sales < 0)
	{
		cout << "Please Enter A Valid Amount Of Sales:";
		cin >> sales;
	}
	return sales;

}
//get Advanced Pay they used nothing below 0
double Advanced()
{
	double advanced;
	cout << "Please Enter The Amount Of Advance Pay Used:";
	cin >> advanced;
	while(advanced<0)
	{
		cout << "Please Enter A Valid Number:";
		cin >> advanced;
	}
	return advanced;

}
 
int main()
{
	double sales =Sales();
	double advanced = Advanced();
	double ComRate, Com, Remaining;

	//Check Which Commision u would use
	if (sales < 10000)
		ComRate = .5;

	else if (sales < 15000)
		ComRate = .10;

	else if (sales < 18000)
		ComRate = .12;

	else if (sales < 22000)
		ComRate = .14;

	else
		ComRate=.16;


	//Do The Math
	Com = sales * ComRate;
	Remaining = Com - advanced;


	//Format And Display The Results 
	cout << endl<< "Pay Results" << endl;
	cout << "-----------" << endl;



	cout << fixed << setprecision(2) << "Sales: "<<sales << endl;
	cout << "Commision Rate: " << ComRate << endl;
	cout << fixed << setprecision(2) << "Commision: " << Com << endl;
	cout << fixed << setprecision(2) << "Avanced Pay: " << advanced << endl;
	cout << fixed << setprecision(2) << "Remaining: " << Remaining << endl;

	//Added for user experience
	if (Remaining < 0)
		cout << endl << "!!You Owe Money Back To Crazy Als!!" << endl;
	else
		cout << endl << "You Dont Owe AnyThing Back Good Job" << endl;
	
	cout << "---------------------------------------"<<endl;
	cout << "|!!!Thank You For Using The Program!!!|"<<endl;
	cout << "---------------------------------------" << endl;


	 

}
