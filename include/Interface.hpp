#ifndef INTERFACE
#define INTERFACE

#include <iostream>
#include <string>

template <typename T>
class Interface { 
  private:
  public:
    Interface(){}
    ~Interface(){}

    void printMainMenu() {
      std::cout << "Welcome to the main menu!" << std::endl;
      std::cout << "1. Compress" << std::endl;
      std::cout << "2. Decompress" << std::endl;
      std::cout << "3. Exit" << std::endl;  
    }

    void printCompressMenu() {
      std::cout << "Welcome to the compress menu!" << std::endl;
      std::cout << "1. Compress a file" << std::endl;
      std::cout << "2. Compress a folder" << std::endl;
      std::cout << "3. Back" << std::endl;
    }

    void printDecompressMenu() {
      std::cout << "Welcome to the decompress menu!" << std::endl;
      std::cout << "1. Decompress a file" << std::endl;
      std::cout << "2. Decompress a folder" << std::endl;
      std::cout << "3. Back" << std::endl;
    }

    T standartInput( char type, short range ) {
      T input;
      std::string inputStr;
      std::cout << "Insert your input: " << std::endl;
      std::cin >> inputStr;
      switch (type)
      {
      case 'i':
        while ( std::cin.fail() || !(inputStr > 0 && inputStr <= range) ) {
          std::cin.clear();
          std::cin.ignore(256,'\n');
          std::cout << "Invalid input, try again: " << std::endl;
          std::cin >> inputStr;
        }
        input = stoi(inputStr);
        break;
      case 's':
        while (std::cin.fail()) {
          std::cin.clear();
          std::cin.ignore(256,'\n');
          std::cout << "Invalid input, try again: " << std::endl;
          std::cin >> inputStr;
        }
        input = inputStr;
        break;
      default:
        break;
      }
      return input;
    }

};

#endif