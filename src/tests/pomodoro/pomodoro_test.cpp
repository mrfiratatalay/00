//#define ENABLE_pomodoro_TEST  // Uncomment this line to enable the pomodoro tests

#include "gtest/gtest.h"
#include "../../pomodoro/header/pomodoro.h"  // Adjust this include path based on your project structure

using namespace Coruh::pomodoro;

class pomodoroTest : public ::testing::Test {
 protected:
  void SetUp() override {
    // Setup test data
  }

  void TearDown() override {
    // Clean up test data
  }
};

TEST_F(pomodoroTest, TestAdd) {
  double result = pomodoro::add(5.0, 3.0);
  EXPECT_DOUBLE_EQ(result, 8.0);
}

TEST_F(pomodoroTest, TestSubtract) {
  double result = pomodoro::subtract(5.0, 3.0);
  EXPECT_DOUBLE_EQ(result, 2.0);
}

TEST_F(pomodoroTest, TestMultiply) {
  double result = pomodoro::multiply(5.0, 3.0);
  EXPECT_DOUBLE_EQ(result, 15.0);
}

TEST_F(pomodoroTest, TestDivide) {
  double result = pomodoro::divide(6.0, 3.0);
  EXPECT_DOUBLE_EQ(result, 2.0);
}

TEST_F(pomodoroTest, TestDivideByZero) {
  EXPECT_THROW(pomodoro::divide(5.0, 0.0), std::invalid_argument);
}

/**
 * @brief The main function of the test program.
 *
 * @param argc The number of command-line arguments.
 * @param argv An array of command-line argument strings.
 * @return int The exit status of the program.
 */
int main(int argc, char **argv) {
#ifdef ENABLE_pomodoro_TEST
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
#else
  return 0;
#endif
}
