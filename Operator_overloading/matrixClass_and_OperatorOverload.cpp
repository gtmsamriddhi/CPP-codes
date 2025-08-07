#include <iostream>
using namespace std;

const int SIZE = 3; 

class Matrix {
private:
    int mat[SIZE][SIZE];

public:
   
    void input() {
        cout << "Enter elements of " << SIZE << "x" << SIZE << " matrix:\n";
        for (int i = 0; i < SIZE; i++)
            for (int j = 0; j < SIZE; j++)
                cin >> mat[i][j];
    }

    
    void display() {
        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++)
                cout << mat[i][j] << "\t";
            cout << endl;
        }
    }

   
    Matrix operator+(Matrix m) {
        Matrix result;
        for (int i = 0; i < SIZE; i++)
            for (int j = 0; j < SIZE; j++)
                result.mat[i][j] = mat[i][j] + m.mat[i][j];
        return result;
    }

  
    Matrix operator-(Matrix m) {
        Matrix result;
        for (int i = 0; i < SIZE; i++)
            for (int j = 0; j < SIZE; j++)
                result.mat[i][j] = mat[i][j] - m.mat[i][j];
        return result;
    }
};

int main() {
    Matrix A, B, sum, diff;

    cout << "Matrix A:\n";
    A.input();

    cout << "\nMatrix B:\n";
    B.input();

    sum = A + B;
    diff = A - B;

    cout << "\nMatrix A + B:\n";
    sum.display();

    cout << "\nMatrix A - B:\n";
    diff.display();

  
    cout << "\nSamriddhi Gautam : BIT28 : Matrix Operator Overloading\n";

    return 0;
}
