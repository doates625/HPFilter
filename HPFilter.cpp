/**
 * @file HPFilter.cpp
 * @author Dan Oates (WPI Class of 2020)
 */
#include <HPFilter.h>
#include <math.h>

/**
 * @brief Constructor
 * @param fc Cutoff frequency
 * @param fs Sample frequency
 */
HPFilter::HPFilter(float fc, float fs) :
	LTIFilter()
{
	A = 2;
	B = 2;
	float alpha = 1.0f / (1.0f + 2.0f * M_PI * fc / fs);
	a[0] = 1.0f;
	a[1] = -alpha;
	b[0] = +alpha;
	b[1] = -alpha;
}
