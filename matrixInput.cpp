#include <iostream>
#include <vector>

std::vector<std::vector<int>> inputMatrix(int numRows, int numCols) {
  std::vector<std::vector<int>> matrix(numRows, std::vector<int>(numCols));

  std::cout << "Enter the elements for the matrix. This matrix is " << numRows
            << " x " << numCols << "." << std::endl;

  for (int i = 0; i < numRows; i++) {
    for (int j = 0; j < numCols; j++) {
      std::cout << "Enter element at row " << i + 1 << ", column " << j + 1
                << ": ";
      std::cin >> matrix[i][j];
    }
  }
  return matrix;
}

void printMatrix(const std::vector<std::vector<int>> &matrix) {
  for (const auto &row : matrix) {
    for (int val : row) {
      std::cout << val << " ";
    }
    std::cout << std::endl;
  }
}

int main() {
  int numRows;
  int numCols;

  std::cout << "Specify the size of the matrix: " << std::endl;
  std::cout << "Rows: ";
  std::cin >> numRows;
  std::cout << "Columns: ";
  std::cin >> numCols;

  std::vector<std::vector<int>> matrix = inputMatrix(numRows, numCols);

  std::cout << "The matrix entered is: " << std::endl;
  printMatrix(matrix);

  return 0;
}
