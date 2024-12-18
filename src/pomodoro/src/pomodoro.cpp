#include "../header/pomodoro.h"
#include <stdexcept>

using namespace Coruh::pomodoro;

double pomodoro::add(double a, double b) {
  return a + b;
}

double pomodoro::subtract(double a, double b) {
  return a - b;
}

double pomodoro::multiply(double a, double b) {
  return a * b;
}

double pomodoro::divide(double a, double b) {
  if (b == 0) {
    throw std::invalid_argument("Division by zero is not allowed.");
  }

  return a / b;
}
