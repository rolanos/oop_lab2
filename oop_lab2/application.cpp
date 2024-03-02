#include<iostream>
#include"application.h"
#include<cstdlib>

using namespace std;

Application::Application() {}
Application::~Application() {}


void Application::displayMenu() {
	char choosenIndex;

	cout << "Choose menu function:" << endl;
	cout << "1 - Input" << endl;
	cout << "2 - Print determinant" << endl;
	cout << "3 - Print transpose matrix" << endl;
	cout << "4 - Print matrix rank" << endl;
	cout << "5 - Print matrix" << endl;
	cout << "0 - Exit" << endl;

	cin >> choosenIndex;

	switch (choosenIndex)
	{
	case '1':
		Application::matrixInit();
		break;
	case '2':
		Application::determinantPrint();
		break;
	case '3':
		Application::transposePrint();
		break;
	case '4':
		Application::rankPrint();
		break;
	case '5': 
		Application::printMatrix();
		break;
	case '0':
		Application::close();
		break;
	default:
		cout << "\nWrong input, try again\n" <<endl;
	}
	displayMenu();
}


void Application::matrixInit() {
	int n;
	cout << "Input matrix size" << endl;
	cin >> n;
	(this->matrix) = new Matrix(n);
	cout << "Input values: ";
	number value;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{

			cin >> value;
			matrix->inputValue(value, i, j);
		}
	}
}

void Application::determinantPrint() {
	cout << "Matrix determinant - " << matrix->calculateDetermenant() << endl;
}

void Application::transposePrint() {
	Matrix transpose = matrix->calculateTranspose();
	transpose.print();
}

void Application::rankPrint() {
	cout << "Matrix rank - " << matrix->getRank() << endl;
}

void Application::printMatrix() {
	matrix->print();
}

void Application::close() {
	exit(0);
}