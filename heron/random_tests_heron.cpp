/* Will give random double floating
 * point numbers in the range
 * [0,1)
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <climits>
int main() {

	double random;

	srand((unsigned)time(NULL));

	for ( int c = 0; c < 1000000; c++ ) {
	
		printf("%.10f\n", (double)rand()/RAND_MAX * (DBL_MAX)/3. );
	}
