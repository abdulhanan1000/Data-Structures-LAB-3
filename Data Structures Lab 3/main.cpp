#include<iostream>

using namespace std;


//**********************************IS THE 6 DIGIT VALUE A PALINDROME?**************************
 /*int main() {

	int arr[6];
	int size = 5;
	
	bool check = true;

	cout << "Enter values: " << endl;

	for (int i = 0; i < 6; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < 3; i++) {
		if (arr[i] == arr[size]) {
			check = true;

		}
		else {
			check = false;
			
		}
		break;
	}
	if (check == true) {
		cout << "The value is palindrome";
	}
	else { cout << "value not palindrome"; }
}*/


//*********************************Q2 SEARCHING IN AN ARRAY****************************

 /*int main() {
	int arr[10];
	int searched;
	
	

	cout << "Enter values: " << endl;
	
		for (int i = 0; i < 10; i++) {
			cin >> arr[i];
		}

		cout << "Enter value to be searched: " << endl;
		cin >>searched;

		for (int i = 0; i < 10; i++) {

			if (arr[i] == searched) {
				cout << "found on index: " << i << endl;

			}

		}

}*/


//*****************CHECK IF THERE'S A DIAGNAL IN 2D ARRAY*******************

 /*int main() {
	int arr[3][3];
	cout << "enter 2d array values: " << endl;
	int j = 0;
	bool diagnal = false;
	for (int i=0;i<3;i++){

		
		for (j = 0; j < 3; j++) {

			cin >> arr[i][j];
	}
	
	
	}
	for (int i = 0; i < 3; i++) {


		for (j = 0; j < 3; j++) {

			cout<< arr[i][j]<<"  ";
		}
		cout << endl;


	}
	
	for (int i = 1; i < 3; i++) {


		if (arr[0][0] == arr[i][i]) {
			diagnal = true;

		}

		else {
			diagnal = false;
			break;
		}
		
	}


	if (diagnal == true) {
		cout << "There is a diagnal\n";

	}
	else if (diagnal == false) {

		cout << "No diagnal\n";
	}
}*/



//********************2D ARRAY MULTIPLICATION******************
int main() {



	int arr1[3][3];
	int arr2[3][3];
	int arr3[3][3];

	cout << "Enter first 2d array: " << endl;
	


	for (int i = 0; i < 3; i++) {


		for (int j = 0; j < 3; j++) {

			cin >> arr1[i][j];
		}


	}


	cout << "\nEnter 2nd 2D array: " << endl;
	for (int i = 0; i < 3; i++) {


		for (int j = 0; j < 3; j++) {

			cin >> arr2[i][j];
		}


	}


	cout << "\n Performing multiplication: " << endl;
	
	for (int i = 0; i < 3; i++) {
		int k = 0;

		for (int j = 0; j < 3; j++) {
			
			
			arr3[i][j]=(arr1[i][j] * arr2[j][i])+(arr1[k][j] * arr2[j][i]);
			k++;
			
		}
		


	}

	for (int i = 0; i < 3; i++) {


		for (int j = 0; j < 3; j++) {

			cout << arr3[i][j] << "  ";
		}
		cout << endl;


	}

}