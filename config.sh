set +x
LD_LIBRARY_PATH=/usr/local/lib
LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/home/aarav/BugTesting/cppunit/
export LD_LIBRARY_PATH


g++ -std=c++17 main.cc -o main

g++ -std=c++17 Test.cc -lcppunit -o Test


chmod +x main
./Test