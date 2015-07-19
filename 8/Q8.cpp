#include <cstdlib>
#include <cstdio>
#include <string>

#include "GlobalDefines.hpp"

#include "Common.hpp"
#include "Q8.hpp"

namespace Q8 {

long long solveAndPrint() {
    const int seqLength = 13;
    long long product = solve<seqLength>("files/seq.txt");
    printf("Q8: The greatest product of a sequence of %d numbers is "
        "%" LL_FMT_STR "d", seqLength, product);
    return product;
}

}