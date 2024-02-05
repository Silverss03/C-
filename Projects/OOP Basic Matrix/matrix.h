#pragma once
#include <iostream>
#include <vector>
#include <cstdint>
#include "iomatrix.h"

using namespace std; 

class SquareMatrixInt {
private:
	vector<vector<int64_t>> matrix;
public :
	SquareMatrixInt() { }
	
	SquareMatrixInt(vector<vector<int64_t>> matrix) {
		this->matrix = matrix;
	}
	
	void setMatrix(vector<vector<int64_t>> matrix) { this->matrix = matrix; }

	SquareMatrixInt getThis() { return *this; }

	vector<vector<int64_t>> getMatrix() { return this->matrix;  }

	vector<vector<int64_t>> getTranspose() {
		vector<vector<int64_t>> output;
		for (int64_t i = 0; i < this->matrix.size(); i++) {
			vector<int64_t> vt;
			for (int64_t j = 0; j < this ->matrix[i].size(); j++){
				vt.push_back(matrix[j][i]);
			}
			output.push_back(vt);
		}
		return output;
	}

	int64_t getIndex(int32_t row, int32_t col) {
		return this->matrix[row][col];
	}

	void showMatrix() {
		showSquareMatrixInt(this->matrix);
	}

	void showTranspose() {
		SquareMatrixInt output(this->matrix);
		showSquareMatrixInt(output.getTranspose());
	}

	SquareMatrixInt operator + (SquareMatrixInt guest) {
		vector<vector<int64_t>> tmp;
		for (int64_t i = 0; i < this->matrix.size(); i++) {
			vector<int64_t> vt;
			for (int64_t j = 0; j < this->matrix[i].size(); j++) {
				vt.push_back((getIndex(i, j) + guest.getIndex(i, j)));
			}
			tmp.push_back(vt);
		}
		SquareMatrixInt output(tmp);
		return output;
	}

	SquareMatrixInt operator - (SquareMatrixInt guest) {
		vector<vector<int64_t>> tmp;
		for (int64_t i = 0; i < this->matrix.size(); i++) {
			vector<int64_t> vt;
			for (int64_t j = 0; j < this->matrix[i].size(); j++) {
				vt.push_back((getIndex(i, j) - guest.getIndex(i, j)));
			}
			tmp.push_back(vt);
		}
		SquareMatrixInt output(tmp);
		return output;
	}

	SquareMatrixInt operator * (SquareMatrixInt guest) {
		vector<vector<int64_t>> tmp;
		for (int64_t i = 0; i < matrix.size(); i++) {
			vector<int64_t> vt;
			for (int64_t j = 0; j < matrix[i].size(); j++) {
				int n = 0;
				for (int64_t k = 0; k < matrix[i].size(); k++) {
					n += (getIndex(i, j) * guest.getIndex(i, j));
				}
				vt.push_back(n);
			}
			tmp.push_back(vt);
		}
		SquareMatrixInt output(tmp);
		return output;
	}

	SquareMatrixInt operator *(int64_t n) {
		vector<vector<int64_t>> tmp;
		for (int64_t i = 0; i < this->matrix.size(); i++) {
			vector<int64_t> vt;
			for (int64_t j = 0; j < this->matrix[i].size(); j++) {
				vt.push_back(getIndex(i, j) * n);
			}
		}
		SquareMatrixInt output(tmp);
		return output;
	}

	SquareMatrixInt operator ^(int32_t exponent){
		SquareMatrixInt output(this->matrix);
		vector<int64_t> rank;
		while (exponent > 1){
			rank.push_back(exponent);
			exponent /= 2; 
		}
		for (auto i : rank){
			output = output * output;
			if (i % 2 == 1) {
				output = output * this->matrix;
			}
		}
		return output;
	}
};

class SquareMatrixFloat {
private:
	vector<vector<double>> matrix;
public:
	SquareMatrixFloat() { }

	SquareMatrixFloat(vector<vector<double>> matrix) {
		this->matrix = matrix;
	}

	void setMatrix(vector<vector<double>> matrix) { this->matrix = matrix; }

	SquareMatrixFloat getThis() { return *this; }

	vector<vector<double>> getMatrix() { return this->matrix; }

	vector<vector<double>> getTranspose() {
		vector<vector<double>> output;
		for (int64_t i = 0; i < this->matrix.size(); i++) {
			vector<double> vt;
			for (int64_t j = 0; j < this->matrix[i].size(); j++) {
				vt.push_back(matrix[j][i]);
			}
			output.push_back(vt);
		}
		return output;
	}

	double getIndex(int32_t row, int32_t col) {
		return this->matrix[row][col];
	}

	void showMatrix() {
		showSquareMatrixFloat(this->matrix);
	}

	void showTranspose() {
		SquareMatrixFloat output(this->matrix);
		showSquareMatrixFloat(output.getTranspose());
	}

	SquareMatrixFloat operator + (SquareMatrixFloat guest) {
		vector<vector<double>> tmp;
		for (int64_t i = 0; i < this->matrix.size(); i++) {
			vector<double> vt;
			for (int64_t j = 0; j < this->matrix[i].size(); j++) {
				vt.push_back((getIndex(i, j) + guest.getIndex(i, j)));
			}
			tmp.push_back(vt);
		}
		SquareMatrixFloat output(tmp);
		return output;
	}

	SquareMatrixFloat operator - (SquareMatrixFloat guest) {
		vector<vector<double>> tmp;
		for (int64_t i = 0; i < this->matrix.size(); i++) {
			vector<double> vt;
			for (int64_t j = 0; j < this->matrix[i].size(); j++) {
				vt.push_back((getIndex(i, j) - guest.getIndex(i, j)));
			}
			tmp.push_back(vt);
		}
		SquareMatrixFloat output(tmp);
		return output;
	}

	SquareMatrixFloat operator * (SquareMatrixFloat guest) {
		vector<vector<double>> tmp;
		for (int64_t i = 0; i < matrix.size(); i++) {
			vector<double> vt;
			for (int64_t j = 0; j < matrix[i].size(); j++) {
				int n = 0;
				for (int64_t k = 0; k < matrix[i].size(); k++) {
					n += (getIndex(i, j) * guest.getIndex(i, j));
				}
				vt.push_back(n);
			}
			tmp.push_back(vt);
		}
		SquareMatrixFloat output(tmp);
		return output;
	}

	SquareMatrixFloat operator *(int64_t n) {
		vector<vector<double>> tmp;
		for (int64_t i = 0; i < this->matrix.size(); i++) {
			vector<int64_t> vt;
			for (int64_t j = 0; j < this->matrix[i].size(); j++) {
				vt.push_back(getIndex(i, j) * n);
			}
		}
		SquareMatrixFloat output(tmp);
		return output;
	}

	SquareMatrixFloat operator ^(int32_t exponent) {
		SquareMatrixFloat output(this->matrix);
		vector<int64_t> rank;
		while (exponent > 1) {
			rank.push_back(exponent);
			exponent /= 2;
		}
		for (auto i : rank) {
			output = output * output;
			if (i % 2 == 1) {
				output = output * this->matrix;
			}
		}
		return output;
	}
};