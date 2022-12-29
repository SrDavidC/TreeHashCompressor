#include "../include/Interface.hpp" 

/**
 * @brief App class
 * 
 */
class App {
  private:
    Interface interface; /**<  Instance of Interface member */
    void compressProcess(); /**<  Aux fuction for compress process */
    void decompressProcess(); /**<  Aux fuction for decompress process */
  public:
    /**
     * @brief Construct a new App object
     * 
     */
    App();
    /**
     * @brief Destroy the App object
     * 
     */
    ~App();
    /**
     * @brief Run the app
     * 
     */
    void run();
};