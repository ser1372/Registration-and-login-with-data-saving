#include <iostream>
#include <fstream>
#include <string>

bool IsLoggedIN()
{   
    std::string username,password,un,pw;

    std::cout << "Enter username:"; std::cin >> username;
    std::cout << "Enter password:"; std::cin >> password;

    std::ifstream read("D:\\" + username + ".txt");
    getline(read, un);
    getline(read,pw);

    if(un == username && pw == password)
    {

        return true;
    }

    else
    {
        
        return false;

    }

}







int main()
{
    int choice;

    std::cout << "1.Register\n2: Login\nYour choice: "; std::cin >> choice;
        if(choice == 1)
        {
            std::string username,password;
            std::cout << "select a Login:"; std::cin >> username;
            std::cout << "select a Password:"; std::cin >> password;

            std::ofstream file;
            file.open("D:\\" + username + ".txt");

            file << username << std::endl << password;
            file.close();

            main();
        }

        else if(choice == 2)
        {
            bool status = IsLoggedIN();

            if(!status)
            {
                std::cout << "False, login!" << std::endl;

                system("pause");
                return 0;
            }
            else{


                std::cout << "Succesfully, logged in!" << std::endl;
                system("pause");
                return 1;
            }
        }

    
}