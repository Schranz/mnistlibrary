/*
 *  MnistLibrary.hpp
 *  MnistLibrary
 *
 *  Created by Alexander on 3/26/17.
 *  Copyright © 2017 Alexander Savchukov. All rights reserved.
 *
 */

#ifndef MnistLibrary_
#define MnistLibrary_

/* The classes below are exported */
#pragma GCC visibility push(default)

#include <string>
#include <vector>

class MnistLibrary
{
    public:
    int Predict(std::vector<float>& pixelData,uint length,std::string& error);
};

#pragma GCC visibility pop
#endif
