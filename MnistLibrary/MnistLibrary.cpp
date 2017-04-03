/*
 *  MnistLibrary.cpp
 *  MnistLibrary
 *
 *  Created by Alexander on 3/26/17.
 *  Copyright © 2017 Alexander Savchukov. All rights reserved.
 *
 */

#include <iostream>
#include "MnistLibrary.hpp"
#include "MNIST.h"


int MnistLibrary::Predict(std::vector<float>& pixelData,uint length,std::string& error)
{
    MNIST mnist = MNIST("./MNIST_data/");
    return mnist.predict(pixelData,error);
};


