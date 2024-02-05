#pragma once
#include <iostream>
#include <vector>
#include <cstdint>

using namespace std;

// Input matrix functions
vector<vector<int64_t>> createSquareMatrixInt(int32_t size) {
	cout << "Your matrix's size is: " << size << endl;
	cout << "Type your matrix \n";
	vector<vector<int64_t>> result;
	result.resize(size);
	for (int32_t i = 0; i < size; i++) {
		result[i].resize(size);
	}

	for (int32_t i = 0; i < size; i++) {
		for (int32_t j = 0; j < size; j++) {
			cin >> result[i][j];
		}
	}

	return result;
}

vector<vector<double>> createSquareMatrixFloat(int32_t size) {
	cout << "Your matrix's size is: " << size << endl;
	cout << "Type your matrix \n";
	vector<vector<double>> result;
	result.resize(size);
	for (int32_t i = 0; i < size; i++) {
		result[i].resize(size);
	}

	for (int32_t i = 0; i < size; i++) {
		for (int32_t j = 0; j < size; j++) {
			cin >> result[i][j];
		}
	}

	return result;
}



// Output matrix functions to console
void showSquareMatrixInt(vector<vector<int64_t>> matrix) {
	for (size_t i = 0; i < matrix.size(); i++) {
		for (size_t j = 0; j < matrix[i].size(); j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

void showSquareMatrixFloat(vector<vector<double>> matrix) {
	for (size_t i = 0; i < matrix.size(); i++) {
		for (size_t j = 0; j < matrix[i].size(); j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}