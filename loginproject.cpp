#include <iostream>
#include "loginproject.hpp"
#include <string>


using namespace std;


LoginProfile::LoginProfile() {
    this->username = "not set username";
    this->password = "not set password";
}

LoginProfile::LoginProfile(string username, string password) {
    this->username = username;
    this->password = password;
}

LoginProfile::~LoginProfile() {

}

void LoginProfile::setUsername(string username) {
    this->username = username;
}

string LoginProfile::getUsername() {
    return this->username;
}

void LoginProfile::setPassword(string password) {
    //Maybe convert password to hash here?
    this->password = password;

}