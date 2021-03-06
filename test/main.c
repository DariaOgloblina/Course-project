#define CTEST_MAIN
#define CTEST_COLOR_OK
#include <ctest.h>
#include <foo.h>

int main(int argc, const char** argv)
{
    return ctest_main(argc, argv);
}

CTEST(square__test, result_test)
{
    // Given
    const double x = 169;

    // When
    const double result = sqrt(x);

    // Then
    const double expected = 13;
    ASSERT_EQUAL(expected, result);
}

CTEST(square__test2, result_test)
{
    // Given
    const double x = 156;

    // When
    const double result = sqrt(x);

    // Then
    const double expected = 12.489996;
    const double tol = 0.0001;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}
CTEST(square__test3, result_test)
{
    // Given
    const double x = 568.798;

    // When
    const double result = sqrt(x);

    // Then
    const double expected = 23.849486;
    const double tol = 0.0001;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}
CTEST(percent_test, result_test)
{
    // Given
    const double x = 6;
    const double n = 50;

    // When
    const double result = percent(x, n);

    // Then
    const double expected = 3;
    ASSERT_EQUAL(expected, result);
}
CTEST(persent__test2, result_test)
{
    // Given
    const double x = 354.768;
    const double n = 23;

    // When
    const double result = percent(x, n);

    // Then
    const double expected = 81.59664;
    const double tol = 0.00001;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}
CTEST(persent__test3, result_test)
{
    // Given
    const double x = 586807.687;
    const double n = 97.67;

    // When
    const double result = percent(x, n);

    // Then
    const double expected = 573135.068;
    const double tol = 0.001;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}
CTEST(persent__test4, result_test)
{
    // Given
    const double x = -7849.965;
    const double n = 349;

    // When
    const double result = percent(x, n);

    // Then
    const double expected = -27396.3778;
    const double tol = 0.0001;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}
CTEST(calc_plus_test1, result_test)
{
    // Given
    const double num1 = 159;
    const double num2 = 248;
    const char s = '+';

    // When
    const double result = calc(num1, num2, s);

    // Then
    const double expected = 407;
    ASSERT_EQUAL(expected, result);
}
CTEST(calc_plus_test2, result_test)
{
    // Given
    const double num1 = -19.275;
    const double num2 = -62.8863;
    const char s = '+';

    // When
    const double result = calc(num1, num2, s);

    // Then
    const double expected = -82.1613;
    const double tol = 0.0001;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}
CTEST(calc_minus_test1, result_test)
{
    // Given
    const double num1 = 76;
    const double num2 = 121;
    const char s = '-';

    // When
    const double result = calc(num1, num2, s);

    // Then
    const double expected = -45;
    ASSERT_EQUAL(expected, result);
}
CTEST(calc_minus_test2, result_test)
{
    // Given
    const double num1 = 53.414;
    const double num2 = -74.1543;
    const char s = '-';

    // When
    const double result = calc(num1, num2, s);

    // Then
    const double expected = 127.568;
    const double tol = 0.001;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}
CTEST(calc_multy_test1, result_test)
{
    // Given
    const double num1 = -65;
    const double num2 = -34;
    const char s = '*';

    // When
    const double result = calc(num1, num2, s);

    // Then
    const double expected = 2210;
    ASSERT_EQUAL(expected, result);
}
CTEST(calc_multy_test2, result_test)
{
    // Given
    const double num1 = 0.14241;
    const double num2 = 543;
    const char s = '*';

    // When
    const double result = calc(num1, num2, s);

    // Then
    const double expected = 77.3286;
    const double tol = 0.0001;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}
CTEST(calc_divide_test1, result_test)
{
    // Given
    const double num1 = 42;
    const double num2 = 7;
    const char s = '/';

    // When
    const double result = calc(num1, num2, s);

    // Then
    const double expected = 6;
    ASSERT_EQUAL(expected, result);
}
CTEST(calc_divide_test2, result_test)
{
    // Given
    const double num1 = 53.25;
    const double num2 = -84.12;
    const char s = '/';

    // When
    const double result = calc(num1, num2, s);

    // Then
    const double expected = -0.633024;
    const double tol = 0.000001;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}
CTEST(cosinus_test_pi, result_test)
{
    // Given
    const double x = 3.14159265;

    // When
    const double result = cosinus(x);

    // Then
    const double expected = -1;
    const double tol = 0.0000001;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}
CTEST(cosinus_test_6pi, result_test)
{
    // Given
    const double x = 18.8495559;

    // When
    const double result = cosinus(x);

    // Then
    const double expected = 1;
    const double tol = 0.0000001;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}
CTEST(cosinus_test_05pi, result_test)
{
    // Given
    const double x = 1.5708;

    // When
    const double result = cosinus(x);

    // Then
    const double expected = 0;
    const double tol = 0.0001;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}
CTEST(cosinus_test_7_5pi, result_test)
{
    // Given
    const double x = 10.9956;

    // When
    const double result = cosinus(x);

    // Then
    const double expected = 0;
    const double tol = 0.0001;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}
CTEST(cosinus_test_30, result_test)
{
    // Given
    const double x = 30;

    // When
    const double result = cosinus(x);

    // Then
    const double expected = 0.1543;
    const double tol = 0.0001;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}
CTEST(cosinus_test_123_56, result_test)
{
    // Given
    const double x = 123.56;

    // When
    const double result = cosinus(x);

    // Then
    const double expected = -0.508044;
    const double tol = 0.00001;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}
CTEST(sinus_test_pi, result_test)
{
    // Given
    const double x = 3.14159265;

    // When
    const double result = sinus(x);

    // Then
    const double expected = 0;
    const double tol = 0.00001;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}
CTEST(sinus_test_8pi, result_test)
{
    // Given
    const double x = 25.132765;

    // When
    const double result = sinus(x);

    // Then
    const double expected = 0;
    const double tol = 0.00001;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}
CTEST(sinus_test_9_2pi, result_test)
{
    // Given
    const double x = 14.1371803;

    // When
    const double result = sinus(x);

    // Then
    const double expected = 1;
    const double tol = 0.00001;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}
CTEST(sinus_test_11_2pi, result_test)
{
    // Given
    const double x = 17.27877559;

    // When
    const double result = sinus(x);

    // Then
    const double expected = -1;
    const double tol = 0.00001;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}
CTEST(sinus_test_174pi, result_test)
{
    // Given
    const double x = 174;

    // When
    const double result = sinus(x);

    // Then
    const double expected = -0.936462;
    const double tol = 0.0001;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}
CTEST(sinus_test_365_345pi, result_test)
{
    // Given
    const double x = 365.345;

    // When
    const double result = sinus(x);

    // Then
    const double expected = 0.7955;
    const double tol = 0.0001;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}
CTEST(tangent_test_pi, result_test)
{
    // Given
    const double x = 3.14159562;

    // When
    const double result = tangent(x);

    // Then
    const double expected = 0;
    const double tol = 0.0001;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}
CTEST(tangent_test_10pi, result_test)
{
    // Given
    const double x = 31.4159562;

    // When
    const double result = tangent(x);

    // Then
    const double expected = 0;
    const double tol = 0.0001;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}
CTEST(tangent_test_1_4pi, result_test)
{
    // Given
    const double x = 0.7853989;

    // When
    const double result = tangent(x);

    // Then
    const double expected = 1;
    const double tol = 0.0001;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}
CTEST(tangent_test_3_4pi, result_test)
{
    // Given
    const double x = 2.35619672;

    // When
    const double result = tangent(x);

    // Then
    const double expected = -1;
    const double tol = 0.0001;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}
CTEST(tangent_test_194, result_test)
{
    // Given
    const double x = 194;

    // When
    const double result = tangent(x);

    // Then
    const double expected = -0.9872;
    const double tol = 0.0001;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}
CTEST(tangent_test_876_23, result_test)
{
    // Given
    const double x = 876.23;

    // When
    const double result = tangent(x);

    // Then
    const double expected = -0.2825;
    const double tol = 0.0001;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}
CTEST(tangent_test_0_5pi, result_test)
{
    // Given
    const double x = 1.5708;

    // When
    const double result = tangent(x);

    // Then
    const double expected = 10;
    const double tol = 0.0001;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}
CTEST(cotangent_test_pi, result_test)
{
    // Given
    const double x = 3.14159562;

    // When
    const double result = cotangent(x);

    // Then
    const double expected = 10;
    const double tol = 0.0001;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}
CTEST(cotangent_test_0_5pi, result_test)
{
    // Given
    const double x = 1.5708;

    // When
    const double result = cotangent(x);

    // Then
    const double expected = 0;
    const double tol = 0.0001;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}
CTEST(cotangent_test_10pi, result_test)
{
    // Given
    const double x = 31.4159562;

    // When
    const double result = cotangent(x);

    // Then
    const double expected = 10;
    const double tol = 0.0001;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}
CTEST(cotangent_test_3_4pi, result_test)
{
    // Given
    const double x = 2.35619672;

    // When
    const double result = cotangent(x);

    // Then
    const double expected = -1;
    const double tol = 0.0001;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}
CTEST(cotangent_test_786, result_test)
{
    // Given
    const double x = 786;

    // When
    const double result = cotangent(x);

    // Then
    const double expected = 1.459;
    const double tol = 0.001;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}
CTEST(cotangent_test_34_37, result_test)
{
    // Given
    const double x = 34.37;

    // When
    const double result = cotangent(x);

    // Then
    const double expected = -5.2701;
    const double tol = 0.001;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}
CTEST(factorial__test_0, result_test)
{
    // Given
    const int x = 0;

    // When
    const int result = factorial(x);

    // Then
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
CTEST(factorial__test_otr, result_test)
{
    // Given
    const int x = -234;

    // When
    const int result = factorial(x);

    // Then
    const int expected = -1;
    ASSERT_EQUAL(expected, result);
}
CTEST(factorial__test_11, result_test)
{
    // Given
    const int x = 11;

    // When
    const int result = factorial(x);

    // Then
    const int expected = 39916800;
    ASSERT_EQUAL(expected, result);
}
CTEST(factorial__test_1, result_test)
{
    // Given
    const int x = 1;

    // When
    const int result = factorial(x);

    // Then
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
CTEST(exponentiation__test_0_8, result_test)
{
    // Given
    const int x = 0;
    const int n = 8;

    // When
    const int result = exponentiation(x, n);

    // Then
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
CTEST(exponentiation__test_8_0, result_test)
{
    // Given
    const int x = 8;
    const int n = 0;

    // When
    const int result = exponentiation(x, n);

    // Then
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
CTEST(exponentiation__test_1_24, result_test)
{
    // Given
    const int x = 1;
    const int n = 24;

    // When
    const int result = exponentiation(x, n);

    // Then
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
CTEST(exponentiation__test_1__4, result_test)
{
    // Given
    const int x = 1;
    const int n = -4;

    // When
    const int result = exponentiation(x, n);

    // Then
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
CTEST(exponentiation_test_3_37_7, result_test)
{
    // Given
    const double x = 3.37;
    const int n = 8;

    // When
    const double result = exponentiation(x, n);

    // Then
    const double expected = 16635.62826;
    const double tol = 0.001;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}
CTEST(exponentiation_test_5_34__4, result_test)
{
    // Given
    const double x = 5.34;
    const int n = -4;

    // When
    const double result = exponentiation(x, n);

    // Then
    const double expected = 0.0012298;
    const double tol = 0.00001;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}
CTEST(exponentiation_test__5__5, result_test)
{
    // Given
    const double x = -5;
    const int n = -5;

    // When
    const double result = exponentiation(x, n);

    // Then
    const double expected = -0.00032;
    const double tol = 0.00001;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}
CTEST(inf_calc_test_error_1, result_test)
{
    // Given
    int n = 0;
    const int sys1 = -2;
    const int sys2 = 10;
    const int num = 1;
    int a[20];
    char str[20];

    // When
    const int result = inf_calc(a, str, &n, sys1, sys2, num);

    // Then
    const int expected = -1;
    ASSERT_EQUAL(expected, result);
}
CTEST(inf_calc_test_error_2, result_test)
{
    // Given
    int n = 0;
    const int sys1 = 2;
    const int sys2 = 20;
    const int num = 1;
    int a[20];
    char str[20];

    // When
    const int result = inf_calc(a, str, &n, sys1, sys2, num);

    // Then
    const int expected = -1;
    ASSERT_EQUAL(expected, result);
}
CTEST(inf_calc_test_2_10, result_test)
{
    // Given
    int n = 0;
    const int sys1 = 2;
    const int sys2 = 10;
    const long num = 1010011;
    int a[20];
    char str[20];

    // When
    const long result = inf_calc(a, str, &n, sys1, sys2, num);

    // Then
    const long expected = 83;
    ASSERT_EQUAL(expected, result);
}
CTEST(inf_calc_test_3_7, result_test)
{
    // Given
    int n = 0;
    const int sys1 = 3;
    const int sys2 = 7;
    const long num = 1221;
    int a[20];
    char str[20];

    // When
    const long result = inf_calc(a, str, &n, sys1, sys2, num);

    // Then
    const long expected = 103;
    ASSERT_EQUAL(expected, result);
}
CTEST(inf_calc_test_4_11, result_test)
{
    // Given
    int n = 0;
    const int sys1 = 4;
    const int sys2 = 11;
    const long num = 3321;
    int a[20];
    char str[20];

    // When
    const long result = inf_calc(a, str, &n, sys1, sys2, num);

    // Then
    const long expected = 9;
    ASSERT_EQUAL(expected, result);
}
CTEST(inf_calc_test_5_16, result_test)
{
    // Given
    int n = 0;
    const int sys1 = 5;
    const int sys2 = 16;
    const long num = 1423412;
    int a[20];
    char str[20];

    // When
    const long result = inf_calc(a, str, &n, sys1, sys2, num);

    // Then
    const long expected = 22;
    ASSERT_EQUAL(expected, result);
}
CTEST(inf_calc_test_6_3, result_test)
{
    // Given
    int n = 0;
    const int sys1 = 6;
    const int sys2 = 3;
    const long num = 51531;
    int a[20];
    char str[20];

    // When
    const long result = inf_calc(a, str, &n, sys1, sys2, num);

    // Then
    const long expected = 100110101;
    ASSERT_EQUAL(expected, result);
}
CTEST(inf_calc_test_7_13, result_test)
{
    // Given
    int n = 0;
    const int sys1 = 7;
    const int sys2 = 13;
    const long num = 6233631;
    int a[20];
    char str[20];

    // When
    const long result = inf_calc(a, str, &n, sys1, sys2, num);

    // Then
    const long expected = 24;
    ASSERT_EQUAL(expected, result);
}
CTEST(inf_calc_test_8_4, result_test)
{
    // Given
    int n = 0;
    const int sys1 = 8;
    const int sys2 = 4;
    const long num = 77007;
    int a[20];
    char str[20];

    // When
    const long result = inf_calc(a, str, &n, sys1, sys2, num);

    // Then
    const long expected = 13320013;
    ASSERT_EQUAL(expected, result);
}
CTEST(inf_calc_test_9_14, result_test)
{
    // Given
    int n = 0;
    const int sys1 = 9;
    const int sys2 = 14;
    const long num = 8708;
    int a[20];
    char str[20];

    // When
    const long result = inf_calc(a, str, &n, sys1, sys2, num);

    // Then
    const long expected = 24;
    ASSERT_EQUAL(expected, result);
}
CTEST(inf_calc_test_10_2, result_test)
{
    // Given
    int n = 0;
    const int sys1 = 10;
    const int sys2 = 2;
    const long num = 163;
    int a[20];
    char str[20];

    // When
    const long result = inf_calc(a, str, &n, sys1, sys2, num);

    // Then
    const long expected = 10100011;
    ASSERT_EQUAL(expected, result);
}
CTEST(inf_calc_test_11_16, result_test)
{
    // Given
    int n = 0;
    const int sys1 = 11;
    const int sys2 = 16;
    const long num = 0;
    int a[20];
    char str[20] = {'A', 'A', '2', '3'};

    // When
    const long result = inf_calc(a, str, &n, sys1, sys2, num);

    // Then
    const long expected = 25;
    ASSERT_EQUAL(expected, result);
}
CTEST(inf_calc_test_12_6, result_test)
{
    // Given
    int n = 0;
    const int sys1 = 12;
    const int sys2 = 6;
    const long num = 0;
    int a[20];
    char str[20] = {'9', '4', 'B', 'A'};

    // When
    const long result = inf_calc(a, str, &n, sys1, sys2, num);

    // Then
    const long expected = 203154;
    ASSERT_EQUAL(expected, result);
}
CTEST(inf_calc_test_13_9, result_test)
{
    // Given
    int n = 0;
    const int sys1 = 13;
    const int sys2 = 9;
    const long num = 0;
    int a[20];
    char str[20] = {'C', 'C', 'B', 'A'};

    // When
    const long result = inf_calc(a, str, &n, sys1, sys2, num);

    // Then
    const long expected = 43136;
    ASSERT_EQUAL(expected, result);
}
CTEST(inf_calc_test_14_11, result_test)
{
    // Given
    int n = 0;
    const int sys1 = 14;
    const int sys2 = 11;
    const long num = 0;
    int a[20];
    char str[20] = {'0', 'D', '9', 'A', '0'};

    // When
    const long result = inf_calc(a, str, &n, sys1, sys2, num);

    // Then
    const long expected = 16;
    ASSERT_EQUAL(expected, result);
}
CTEST(inf_calc_test_15_3, result_test)
{
    // Given
    int n = 0;
    const int sys1 = 15;
    const int sys2 = 3;
    const long num = 0;
    int a[20];
    char str[20] = {'B', 'C', 'E', 'A'};

    // When
    const long result = inf_calc(a, str, &n, sys1, sys2, num);

    // Then
    const long expected = 2000221011;
    ASSERT_EQUAL(expected, result);
}
CTEST(inf_calc_test_16_10, result_test)
{
    // Given
    int n = 0;
    const int sys1 = 16;
    const int sys2 = 10;
    const long num = 0;
    int a[20];
    char str[20] = {'A', 'B', 'C', 'D', 'E', 'F'};

    // When
    const long result = inf_calc(a, str, &n, sys1, sys2, num);

    // Then
    const long expected = 11259375;
    ASSERT_EQUAL(expected, result);
}
