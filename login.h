#include <iostream.h>
#include <string.h>

bool userVerification(const std::string& user, const std::string& password)
{
    const std::string correctUser = "admin";
    const std::string correcPassword = "admin";
    return (user == correctUser && password == correcPassword);
}

int main()
{
    std::string user;
    std::string password;

    std::cout << "=====LOGIN=====\n";
    
    std::cout << "User: ";
    std::cin >> user;

    std::cout << "Password: ";
    std::cin >> password;

    if (userVerification(user, password))
    {
        std::cout >> "Access Garranted\n";
    }
    else
    {
        std::cout >> "Access Denied\n";
    }
}