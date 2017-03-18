//
//  main.cpp
//  Sudoku
//
//  Created by cpsfaculty on 10/8/14.
//  Copyright (c) 2014 ___Ju Shen___. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

#include "VisualDisplay.h"

using namespace cv;
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    VisualDisplay display;
    display.load("imgs/sudoku.png");
    display.run();
    return 0;
}
