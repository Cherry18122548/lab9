#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	int i=1;
	double pre,rate,total,Payment,itr,nb;
	cout << "Enter initial loan: ";
	cin  >> pre ;
	cout << "Enter interest rate per year (%): ";
	cin >> rate ;
	cout << "Enter amount you can pay per year: ";
	cin >> Payment;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect

	while(nb != 0){
		itr = pre*(rate/100);
		total= pre +itr;
		
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << i; 
		cout << setw(13) << left << pre;
		cout << setw(13) << left << itr;
		cout << setw(13) << left << total;
		if(total<Payment) Payment=total;
		cout << setw(13) << left << Payment;
		nb = total-Payment;
		cout << setw(13) << left << nb;
		pre = nb;
		i++;
		cout << "\n";	
		
	}
	return 0;
}
