if(EXISTS "/mnt/c/Users/FIRAT/Desktop/00/00/build_linux/src/tests/utility/utility_tests[1]_tests.cmake")
  include("/mnt/c/Users/FIRAT/Desktop/00/00/build_linux/src/tests/utility/utility_tests[1]_tests.cmake")
else()
  add_test(utility_tests_NOT_BUILT utility_tests_NOT_BUILT)
endif()
