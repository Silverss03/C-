#pragma once
#include <iostream>
#include <vector>
#include <cstdint>
#include <exception>
using namespace std;

class MatrixDifferentSizeException : public exception{
	public :
        const char* what() const noexcept{
            return "Two Matrix must have the same size!\n";
        }
};
