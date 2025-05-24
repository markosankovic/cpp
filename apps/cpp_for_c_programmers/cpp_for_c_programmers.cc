#include "cpp_for_c_programmers.h"

#include <iostream>

class Point {
 public:
  Point(double x = 0.0, double y = 0.0) : x_(x), y_(y) {}
  double getX() const { return x_; }
  void setX(double x) { x_ = x; }
  double getY() const { return y_; }
  void setY(double y) { y_ = y; }

  friend std::ostream& operator<<(std::ostream& os, const Point& point) {
    os << "Point(" << point.x_ << ", " << point.y_ << ")";
    return os;
  }

  Point operator+(const Point& other) const {
    return Point(x_ + other.x_, y_ + other.y_);
  }

 private:
  double x_;
  double y_;
};

int main() {
  std::cout << "C++ for C Programmers app running!" << std::endl;

  auto p1 = Point(1.0, 2.0);
  auto p2 = Point(3.0, 4.0);
  auto p3 = p1 + p2;
  std::cout << "p3: " << p3 << std::endl;

  return 0;
}
