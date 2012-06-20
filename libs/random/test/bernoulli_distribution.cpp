#ifndef SPROUT_LIBS_RANDOM_TEST_BERNOULLI_DISTRIBUTION_CPP
#define SPROUT_LIBS_RANDOM_TEST_BERNOULLI_DISTRIBUTION_CPP

#include <sprout/random/bernoulli_distribution.hpp>
#include "./distribution_generic.hpp"
#include <testspr/tools.hpp>

namespace testspr {
	void random_bernoulli_distribution_test() {
		using namespace sprout;

		testspr::random_distribution_test_generic<sprout::random::bernoulli_distribution<> >();
	}
}	// namespace testspr

#ifndef TESTSPR_CPP_INCLUDE
#	define TESTSPR_TEST_FUNCTION testspr::random_bernoulli_distribution_test
#	include <testspr/include_main.hpp>
#endif

#endif	// #ifndef SPROUT_LIBS_RANDOM_TEST_BERNOULLI_DISTRIBUTION_CPP