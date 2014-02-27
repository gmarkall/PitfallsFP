/**
 * Utilities for the floating point example codes.
 */

/**
 * The bitdouble is used to get access to the bits of a double
 */
typedef union {
  unsigned int bits;
  float flt;
} bitfloat;

/**
 * The bitdouble is used to get access to the bits of a double
 */
typedef union {
  unsigned long long bits;
  double dbl;
} bitdouble;

