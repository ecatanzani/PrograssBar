#include "progHeader.h"

void pBar(double ptg)   //ptg is a percentage from 0 to 100
{
    normalize(ptg);     //normalize the percentage from 0 to 1
    int barWidth = 70;
    std::cout << "[";
    int pos = barWidth * ptg;
    for (int idx = 0; idx < barWidth; ++idx)
    {
        if(idx < pos)
            std::cout << "|";
        //else if(idx == pos)
        //    std::cout << ">";
        else
            std::cout << " ";
    }
    std::cout << "] " << int(ptg * 100.0 + 1) << " %\r";
    std::cout.flush();
}

double normalize(double &ptg)
{
    return ptg /= 100;
}
