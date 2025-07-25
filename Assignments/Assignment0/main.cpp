#include<cmath>
#include<eigen3/Eigen/Core>
#include<eigen3/Eigen/Dense>
#include<iostream>

int main(){

    // Basic Example of cpp
    std::cout << "Example of cpp \n";
    float a = 1.0, b = 2.0;
    std::cout << a << std::endl;
    std::cout << a/b << std::endl;
    std::cout << std::sqrt(b) << std::endl;
    std::cout << std::acos(-1) << std::endl;
    std::cout << std::sin(30.0/180.0*acos(-1)) << std::endl;

    // Example of vector
    std::cout << "Example of vector \n";
    // vector definition
    Eigen::Vector3f v(1.0f,2.0f,3.0f);
    Eigen::Vector3f w(1.0f,0.0f,0.0f);
    // vector output
    std::cout << "Example of output \n";
    std::cout << v << std::endl;
    // vector add
    std::cout << "Example of add \n";
    std::cout << v + w << std::endl;
    // vector scalar multiply
    std::cout << "Example of scalar multiply \n";
    std::cout << v * 3.0f << std::endl;
    std::cout << 2.0f * v << std::endl;

    // Example of matrix
    std::cout << "Example of matrix \n";
    // matrix definition
    Eigen::Matrix3f i,j;
    i << 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0;
    j << 2.0, 3.0, 1.0, 4.0, 6.0, 5.0, 9.0, 7.0, 8.0;
    // matrix output
    std::cout << "Example of output \n";
    std::cout << i << std::endl;
    // matrix add i + j
    std::cout << "Example of matrix add" << std::endl;
    std::cout << i + j << std::endl;
    // matrix scalar multiply i * 2.0
    std::cout << "Example of matrix scalar multiply" << std::endl;
    std::cout << i * 2.0f << std::endl;
    // matrix multiply i * j
    std::cout << "Example of matrix multiply" << std::endl;
    std::cout << i * j << std::endl;
    // matrix multiply vector i * v
    std::cout << "Example of matrix multiply vector" << std::endl;
    std::cout << i * v << std::endl;

    std::cout << "Assignment0" << std::endl;
    /**
     * 给定一个点P=(2,1),将该点绕原点先逆时针旋转45◦，再平移(1,2),计算出
     * 变换后点的坐标（要求用齐次坐标进行计算）。
     */
    Eigen::Vector3f P(2.0, 1.0, 1.0);
    Eigen::Matrix3f  TransMatrix;

    std::cout << "Before transform" << std::endl;
    std::cout << P << std::endl;

    float angle = std::acos(-1) / 4;
    TransMatrix << std::cos(angle), std::sin(-1 * angle), 1.0, std::sin(angle), std::cos(angle), 2.0, 0, 0, 1;

    //Eigen::Matrix3f TransedMatrix;
    Eigen::Vector3f TransedMatrix;
    TransedMatrix = TransMatrix * P;

    std::cout << "After otate and move" << std::endl;
    std::cout << TransedMatrix << std::endl;
    
    float transed_x = TransedMatrix[0];
    float transed_y = TransedMatrix[1];

    Eigen::Vector2f TransedVector(transed_x, transed_y);
    std::cout<< TransedVector << std::endl;
    return 0;
}