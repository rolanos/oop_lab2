#pragma once
#include"number.h"

class Matrix {

private:
	int dimension;
	number** matrix;

	void createMatrixWithDimension(int n);

public: 
	// ���������� ��������� ������������
	Matrix& operator=(const Matrix& other);
	//����������� ������ �� ���������
	Matrix();
	//����������� ������ ��� ������������� �������
	Matrix(int n);
	//���������� ������
	~Matrix();
	//���� ��������� � �������
	void inputValue(number value, int row, int column);
	//���������� ������������
	number calculateDetermenant();
	//��������� ����������������� �������
	Matrix calculateTranspose();
	//�������� ���� �������
	int getRank();
	//�������� ����������� �������
	int getDimension();
	//����� �������
	void print();
};