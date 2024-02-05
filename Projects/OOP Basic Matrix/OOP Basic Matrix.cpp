// OOP Basic Matrix.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdint.h>
#include "matrix.h"
#include "iomatrix.h"
#include "user_exceptions.h"

int main()
{
	int32_t size_1, size_2;
	SquareMatrixInt int_matrix1, int_matrix2, int_matrix_sum, int_matrix_diff, int_matrix_mul, n_time_of_int_matrix, int_matrix_exponent;
	SquareMatrixFloat float_matrix1, float_matrix2, float_matrix_sum, float_matrix_diff, float_matrix_mul, n_time_of_float_matrix, float_matrix_exponent;
	cout << "Choose your action \n";
	cout << "1. Summation\n2. Substraction \n3. Multiply two matrix \n4. Multiply a matrix with a number\n5. Get transpose of a matrix\n6. Exponentiation \n7. Nothing! \n" ;
	int32_t action;
	cin >> action;
	while (action != 7)
	{
		if (action == 1) {
			cout << "Interger Matrix (1) or Float Matrix(2)\n";
			int32_t choice;
			cin >> choice;
			if (choice == 1) {
				cout << "Size of the first matrix is:\n";
				cin >> size_1;
				cout << "Size of the second matrix is: \n";
				cin >> size_2;
				try {
					while (size_1 != size_2) throw MatrixDifferentSizeException();
				}
				catch (MatrixDifferentSizeException size_exception) {
					cout << size_exception.what();
					cout << "Size of the first matrix is:\n";
					cin >> size_1;
					cout << "Size of the second matrix is: \n";
					cin >> size_2;
				}
				int_matrix1.setMatrix(createSquareMatrixInt(size_1));
				int_matrix2.setMatrix(createSquareMatrixInt(size_2));
				int_matrix_sum = int_matrix1 + int_matrix2;
				int_matrix_sum.showMatrix();
			}
			else
			{
				cout << "Size of the first matrix is:\n";
				cin >> size_1;
				cout << "Size of the second matrix is: \n";
				cin >> size_2;
				try {
					while (size_1 != size_2) throw MatrixDifferentSizeException();
				}
				catch (MatrixDifferentSizeException size_exception) {
					cout << size_exception.what();
					cout << "Size of the first matrix is:\n";
					cin >> size_1;
					cout << "Size of the second matrix is: \n";
					cin >> size_2;
				}
				float_matrix1.setMatrix(createSquareMatrixFloat(size_1));
				float_matrix2.setMatrix(createSquareMatrixFloat(size_2));
				float_matrix_sum = float_matrix1 + float_matrix2;
				float_matrix_sum.showMatrix();
			}
		}
		else if (action == 2) {
			cout << "Interger Matrix (1) or Float Matrix(2)\n";
			int32_t choice;
			cin >> choice;
			if (choice == 1) {
				cout << "Size of the first matrix is:\n";
				cin >> size_1;
				cout << "Size of the second matrix is: \n";
				cin >> size_2;
				try {
					while (size_1 != size_2) throw MatrixDifferentSizeException();
				}
				catch (MatrixDifferentSizeException size_exception) {
					cout << size_exception.what();
					cout << "Size of the first matrix is:\n";
					cin >> size_1;
					cout << "Size of the second matrix is: \n";
					cin >> size_2;
				}
				int_matrix1.setMatrix(createSquareMatrixInt(size_1));
				int_matrix2.setMatrix(createSquareMatrixInt(size_2));
				int_matrix_diff = int_matrix1 - int_matrix2;
				int_matrix_sum.showMatrix();
			}
			else
			{
				cout << "Size of the first matrix is:\n";
				cin >> size_1;
				cout << "Size of the second matrix is: \n";
				cin >> size_2;
				try {
					while (size_1 != size_2) throw MatrixDifferentSizeException();
				}
				catch (MatrixDifferentSizeException size_exception) {
					cout << size_exception.what();
					cout << "Size of the first matrix is:\n";
					cin >> size_1;
					cout << "Size of the second matrix is: \n";
					cin >> size_2;
				}
				float_matrix1.setMatrix(createSquareMatrixFloat(size_1));
				float_matrix2.setMatrix(createSquareMatrixFloat(size_2));
				float_matrix_diff = float_matrix1 - float_matrix2;
				float_matrix_diff.showMatrix();
			}
		}
		else if (action == 3) {
			cout << "Interger Matrix (1) or Float Matrix(2)\n";
			int32_t choice;
			cin >> choice;
			if (choice == 1) {
				cout << "Size of the first matrix is:\n";
				cin >> size_1;
				cout << "Size of the second matrix is: \n";
				cin >> size_2;
				try {
					while (size_1 != size_2) throw MatrixDifferentSizeException();
				}
				catch (MatrixDifferentSizeException size_exception) {
					cout << size_exception.what();
					cout << "Size of the first matrix is:\n";
					cin >> size_1;
					cout << "Size of the second matrix is: \n";
					cin >> size_2;
				}
				int_matrix1.setMatrix(createSquareMatrixInt(size_1));
				int_matrix2.setMatrix(createSquareMatrixInt(size_2));
				int_matrix_mul = int_matrix1 * int_matrix2;
				int_matrix_mul.showMatrix();
			}
			else
			{
				cout << "Size of the first matrix is:\n";
				cin >> size_1;
				cout << "Size of the second matrix is: \n";
				cin >> size_2;
				try {
					while (size_1 != size_2) throw MatrixDifferentSizeException();
				}
				catch (MatrixDifferentSizeException size_exception) {
					cout << size_exception.what();
					cout << "Size of the first matrix is:\n";
					cin >> size_1;
					cout << "Size of the second matrix is: \n";
					cin >> size_2;
				}
				float_matrix1.setMatrix(createSquareMatrixFloat(size_1));
				float_matrix2.setMatrix(createSquareMatrixFloat(size_2));
				float_matrix_mul = float_matrix1 * float_matrix2;
				float_matrix_mul.showMatrix();
			}
		}
		else if (action == 4) {
			cout << "Interger Matrix (1) or Float Matrix(2)\n";
			int32_t choice;
			cin >> choice;
			if (choice == 1) {
				cout << "Size of the matrix is:\n";
				cin >> size_1;
				cout << "Type a number :\n";
				int32_t number;
				cin >> number;
				int_matrix1.setMatrix(createSquareMatrixInt(size_1));
				n_time_of_int_matrix = int_matrix1 * number;
				int_matrix_sum.showMatrix();
			}
			else{
				cout << "Size of the matrix is:\n";
				cin >> size_1;
				cout << "Type a number :\n";
				int32_t number;
				cin >> number;
				float_matrix1.setMatrix(createSquareMatrixFloat(size_1));
				n_time_of_float_matrix = float_matrix1 * number;
				n_time_of_float_matrix.showMatrix();
			}
		}
		else if (action == 5) {
			cout << "Interger Matrix (1) or Float Matrix(2)\n";
			int32_t choice;
			cin >> choice;
			if (choice == 1) {
				cout << "Size of the matrix is:\n";
				cin >> size_1;
				int_matrix1.setMatrix(createSquareMatrixInt(size_1));
				int_matrix1.showTranspose();
			}
			else {
				cout << "Size of the matrix is:\n";
				cin >> size_1;
				float_matrix1.setMatrix(createSquareMatrixFloat(size_1));
				float_matrix1.showTranspose();
			}
		}
		else if (action == 6) {
			cout << "Interger Matrix (1) or Float Matrix(2)\n";
			int32_t choice;
			cin >> choice;
			if (choice == 1) {
				cout << "Size of the matrix is:\n";
				cin >> size_1;
				int_matrix1.setMatrix(createSquareMatrixInt(size_1));
				cout << "Type a number:\n";
				int32_t number;
				cin >> number;
				int_matrix_exponent = int_matrix1 ^ number;
				int_matrix_exponent.showMatrix();
			}
			else {
				cout << "Size of the matrix is:\n";
				cin >> size_1;
				float_matrix1.setMatrix(createSquareMatrixFloat(size_1));
				cout << "Type a number:\n";
				int32_t number;
				cin >> number;
				float_matrix_exponent = float_matrix1 ^ number;
				float_matrix_exponent.showMatrix();
			}
		}
		cout << "Choose your action \n";
		cout << "1. Summation\n2. Substraction \n3. Multiply two matrix \n4. Multiply a matrix with a number \n5. Get transpose of a matrix\n6.Exponentiation \n7.Nothing! \n";
		cin >> action;
	}
	if(action == 7) {
		cout << "Have a nice day!\n";
	}
}

