#ifndef INTERFACE
#define INTERFACE

#include <iostream>
#include <string>

/**
 * @brief Interface class
 * 
 */
class Interface { 
  private:
  public:
    /**
     * @brief Construct a new Interface object
     * 
     */
    Interface(){}
    /**
     * @brief Destroy the Interface object
     * 
     */
    ~Interface(){}

    /**
     * @brief Print the main menu
     * 
     */
    void printMainMenu() {
      std::cout << "Welcome to the main menu!" << std::endl;
      std::cout << "1. Compress" << std::endl;
      std::cout << "2. Decompress" << std::endl;
      std::cout << "3. Exit" << std::endl;  
    }

    /**
     * @brief Print the compress menu
     * 
     */
    void printCompressMenu() {
      std::cout << "Welcome to the compress menu!" << std::endl;
      std::cout << "1. Compress a file" << std::endl;
      std::cout << "2. Compress a folder" << std::endl;
      std::cout << "3. Back" << std::endl;
    }

    /**
     * @brief Print the decompress menu
     * 
     */
    void printDecompressMenu() {
      std::cout << "Welcome to the decompress menu!" << std::endl;
      std::cout << "1. Decompress a file" << std::endl;
      std::cout << "2. Decompress a folder" << std::endl;
      std::cout << "3. Back" << std::endl;
    }

    /**
     * @brief Get the standart input int object
     * 
     * @param range to set the range of the input menu
     * @return int 
     */
    int standartInputInt( short range ) {
      int input;
      std::string inputStr;
      std::cout << "Insert your input: " << std::endl;
      std::cin >> inputStr;
      while ( std::cin.fail() || !( stoi(inputStr) > 0 && stoi(inputStr) <= range) ) {
        std::cin.clear();
        std::cin.ignore(256,'\n');
        std::cout << "Invalid input, try again: " << std::endl;
        std::cin >> inputStr;
      }
      input = stoi(inputStr);
      
      return input;
    }

    /**
     * @brief Get the standart input string object
     * 
     * @return std::string 
     */
    std::string standartInputString() {
      std::string inputStr;
      std::cout << "Insert your input: " << std::endl;
      std::cin >> inputStr;
      while ( std::cin.fail() ) {
        std::cin.clear();
        std::cin.ignore(256,'\n');
        std::cout << "Invalid input, try again: " << std::endl;
        std::cin >> inputStr;
      }
      return inputStr;
    }

};

#endif