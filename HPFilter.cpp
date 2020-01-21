/**
 * @file HPFilter.cpp
 * @author Dan Oates (WPI Class of 2020)
 */
#include <HPFilter.h>

/**
 * @brief Constructor
 * @param fc Cutoff frequency
 * @param fs Sample frequency
 */
HPFilter::HPFilter(float fc, float fs);
{
	// Allocate data
	const uint8_t A = 2; float a[A];
	const uint8_t B = 2; float b[B];

	// Assign coefficients
	float alpha = 1.0f / (1.0f + 2.0f * M_PI * fc / fs);
	a[0] = 1.0f;
	a[1] = -alpha;
	b[0] = +alpha;
	b[1] = -alpha;

	// Construct filter
	(*this) = LTIFilter(A, a, B, b);
}
