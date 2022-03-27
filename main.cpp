#include <iostream>
#include <loginproject.cpp>


int main() {
    

    LoginProfile test("simon","1732");


    cout << test.getUsername() << endl;
    cout << test.getPassword() << endl;
    
    return 0;

}