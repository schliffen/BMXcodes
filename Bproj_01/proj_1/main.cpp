//
#include <iostream>
#include "stest.hpp"
#include <map>
#include <string>
#include <fstream>
#include <vector>
//#include "utils.h"
#include "mxnet-cpp/MxNetCpp.h"

int main(int argc, char* argv[]){

    std::cout<< "Starting the program" <<std::endl;

    geometry gmy;
    //double radius;
    double radius=2.1;
    double area;
    area = gmy.circle( radius );

    std::cout<< "Ending the program with results: "<< area <<std::endl;

    return 0;
}
