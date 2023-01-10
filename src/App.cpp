#include "../include/App.hpp"

App::App() {
  // Constructor
}
App::~App() {
  // Destructor
}

void App::run() {
  // Run the app
  interface.printMainMenu();
  int input = interface.standartInputInt( 3 );
  switch (input) {
    case 1:
      compressProcess();      
      break;
    case 2:
      decompressProcess();
      break;
    case 3:
      std::cout << "Exiting..." << std::endl;
      break;
    default:
      break;
  }

}

void App::compressProcess(){
  interface.printCompressMenu();
  int input = interface.standartInputInt( 3 );
  // TODO
}

void App::decompressProcess(){
  interface.printDecompressMenu();
  int input = interface.standartInputInt( 3 );
  // TODO
}
