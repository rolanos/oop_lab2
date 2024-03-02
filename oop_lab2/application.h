#pragma once

#include<iostream>
#include"matrix.h"

using namespace std;

class Application {
public: 
	//Конструктор консольного приложения
	Application();
	~Application();
	//Выводит меню в консоль
	void displayMenu();
private:
	//Ввод данных в матрицу
	void matrixInit();
	//Вычисление и вывод определителя в консоль
	void determinantPrint();
	//Подсчет и вывод транспонированной матрицы
	void transposePrint();
	//Вычисляет и выводит ранг матрицы
	void rankPrint();
	//Вывод матрицы
	void printMatrix();
	//Выход из приложения
	void close();

	Matrix* matrix = new Matrix();
};