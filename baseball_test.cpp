#include "gmock/gmock.h"
#include "baseball.cpp"

using namespace testing;
class BaseballFixture : public testing::Test {
public:
	Baseball game;
	void assertIlLegalArgument(const std::string& guessNumber) {
		try {
			game.guess(std::string(guessNumber));
			FAIL();
		}
		catch (const std::exception& e) {
			//	PASS
		}
	}
};


//TEST_F(BaseballFixture, ThrowExceptionWhenInputLengthIsUnmatched) {
//	assertIlLegalArgument("12");
//}
//
//TEST_F(BaseballFixture, ThrowExceptionWhenInvalidChar) {
//	assertIlLegalArgument("12s");
//}

TEST_F(BaseballFixture, ThrowExceptionWhenInvalidCase) {
	assertIlLegalArgument("12");
	assertIlLegalArgument("12s");
}



























//using namespace testing;
//class PrimeFixture : public Test {
//public:
//	PrimeFactors prime_factor;
//	std::vector<int> expected;
//};
//
//TEST_F(PrimeFixture, Of1) {
//	expected = {};
//	EXPECT_EQ(expected, prime_factor.of(1));
//}
//
//TEST_F(PrimeFixture, Of2) {
//	expected = { 2 };
//	EXPECT_EQ(expected, prime_factor.of(2));
//}
//
//TEST_F(PrimeFixture, Of3) {
//	expected = { 3 };
//	EXPECT_EQ(expected, prime_factor.of(3));
//}
//
//TEST_F(PrimeFixture, Of4) {
//	expected = { 2, 2 };
//	EXPECT_EQ(expected, prime_factor.of(4));
//}
//
//TEST_F(PrimeFixture, Of6) {
//	expected = { 2, 3 };
//	EXPECT_EQ(expected, prime_factor.of(6));
//}
//
//TEST_F(PrimeFixture, Of9) {
//	expected = { 3, 3 };
//	EXPECT_EQ(expected, prime_factor.of(9));
//}
//
//TEST_F(PrimeFixture, Of12) {
//	expected = { 2, 2, 3};
//	EXPECT_EQ(expected, prime_factor.of(12));
//}
