#pragma once

#include<iostream>
#include"matrix.h"

using namespace std;

class Application {
public: 
	//����������� ����������� ����������
	Application();
	~Application();
	//������� ���� � �������
	void displayMenu();
private:
	//���� ������ � �������
	void matrixInit();
	//���������� � ����� ������������ � �������
	void determinantPrint();
	//������� � ����� ����������������� �������
	void transposePrint();
	//��������� � ������� ���� �������
	void rankPrint();
	//����� �������
	void printMatrix();
	//����� �� ����������
	void close();

	Matrix* matrix = new Matrix();
};