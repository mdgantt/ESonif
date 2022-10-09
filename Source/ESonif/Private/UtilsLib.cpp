// Fill out your copyright notice in the Description page of Project Settings.


#include "UtilsLib.h"
#include <random>
#include <cmath>
#include "Math/UnrealMathUtility.h"

UtilsLib::UtilsLib()
{
}

UtilsLib::~UtilsLib()
{
}

float UtilsLib::NormalDistGen(float mu,float sigma )
{
    std::random_device rd{};
    std::mt19937 gen{ rd() };
    std::normal_distribution<float> d{ mu, sigma };
    return d(gen); 

}
