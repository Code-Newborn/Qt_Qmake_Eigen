#include <Eigen/Dense>
#include <QCoreApplication>
#include <iostream>

int main(int argc, char *argv[]) {
  QCoreApplication a(argc, argv);

  Eigen::Matrix2d m1;
  m1 << 1, 2, 3, 4;

  Eigen::MatrixXd m2(2, 2);
  m2 << 2, 3, 1, 4;

  std::cout << "a + b =\n" << m1 + m2 << std::endl << std::endl;
  std::cout << "a - b =\n" << m1 - m2 << std::endl << std::endl;
  std::cout << "Doing a += b;" << std::endl;
  m1 += m2;
  std::cout << "Now a =\n" << m1 << std::endl << std::endl;

  Eigen::Vector3d v(1, 2, 3);
  Eigen::Vector3d w(1, 0, 0);

  std::cout << "w + v =\n" << w + v << std::endl;
  return a.exec();
}
