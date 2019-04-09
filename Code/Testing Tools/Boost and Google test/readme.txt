Execute google Test file

g++ file_name.cpp -lgtest -lgtest_main -pthread
./a.out

Execute Boost Test File
g++ file_name.cpp -lboost_unit_test_framework
./a.out --log_level=test_suite