


#ifndef BIN_FILES_INCLUDED
#define BIN_FILES_INCLUDED

#include <fstream> /*For basic I/O.*/
#include <sstream> /*For basic I/O.*/
#include <iostream> /*For basic I/O.*/
#include <iterator> /*For basic I/O.*/
#include <string>
#include <vector>

namespace BinaryFileUtils {
  bool writeBinaryFile(std::string fileName, std::string fileData ) {
    std::ofstream out_stream(fileName, std::ios::binary );
    bool writeStatus = false; 
    if ( out_stream.is_open() ) {
      out_stream << fileData ; // write the data to the file
      writeStatus = true; // set the write status to true
      out_stream.close(); // close the file
    } else {
      std::string ex_str = "Error: couldn't open " + fileName + " for output";
	  	//throw std::exception(ex_str.c_str());
    }
    return writeStatus;
  }

  /**
   * @description - Read any ASCII,BINARY or HEX file.
   * @param - Source file name and file type.
   * @return - Returns data in tuple format,use std::get<TUPLE_ID>(TUPLE_OBJ) to get data.
   */
  std::vector<uint8_t> readBinaryFile(std::string fileName) {
    std::ifstream bin_file(fileName, std::ios::binary);
    std::vector<uint8_t> buffer;
    try {
      // copies all data into buffer of bytes
      //Open the stream in binary mode.
      if (bin_file.good()) {
        //Read Binary data using streambuffer iterators.
        std::vector<uint8_t> bufferAux((std::istreambuf_iterator<char>(bin_file)),
          (std::istreambuf_iterator<char>()));
        buffer = bufferAux;
        bin_file.close();
      } else {
        throw std::exception();
      }
    } catch (std::exception & e) {
      std::string ex_str = "Error: " + fileName + ": No such file or directory";
      //throw std::exception(ex_str.c_str());

    }
    return buffer; // return buffer of bytes readed from file
    // in this way we can send the buffer to huffman algorithm to compress the data
  }
};

#endif