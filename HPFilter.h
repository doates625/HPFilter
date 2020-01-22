/**
 * @file HPFilter.h
 * @brief Class for first-order high-pass filters
 * @author Dan Oates (WPI Class of 2020)
 */
#pragma once
#include <LTIFilter.h>

/**
 * Class Declaration
 */
class HPFilter : public LTIFilter
{
public:
	HPFilter(float fc, float fs);
};
