#include "../include/App.hpp"
int main ( int argc , char * argv []) { // Create a new application instance. Application app ; // Create a new window. Window * window = new Window (); // Set the window title. window -> setTitle ( "Hello World" ); // Set the window size. window -> setSize ( 800 , 600 ); // Show the window. window -> setVisible ( true ); // Run the application. return app . run (); }
  App app;
  app.run();
  return 0;
}