#pragma once

#include <iostream>

#include "vec3.h"

class ray
{
public:
    ray() {}
    ray(const &point3 orig, const &point3 dir) :ori_(orig), dir_(dir), tm(0){}
    point3 origin() const { return ori_;}
    vec3 direction() const { return dir_;}

    point3 at(double t) { return ori_ + dir_ * t; }



public:
    point3 ori_;
    vec3 dir_;
    double tm;


};