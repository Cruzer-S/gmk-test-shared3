#include "gmk-test-shared3.h"

#include <stdio.h>

#include "gmk-test-static2.h"
#include "gmk-test-shared2.h"

void gmk_test_shared3(void)
{
	printf("gmk_test_shared3()\n");

	gmk_test_static2(5, "gmk_test_shared3()");
	gmk_test_shared2(5, "gmk_test_shared3()");
}
