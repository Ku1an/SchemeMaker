#pragma once
#include <string>

class LoginProfile {


    private:
    std::string username;
    std::string password;
    protected:

    public:

    LoginProfile();
    LoginProfile(std::string username, std::string password);
    ~LoginProfile();




    void setUsername(std::string username);
    std::string getUsername();
    void setPassword(std::string password);
    std::string getPassword();


};