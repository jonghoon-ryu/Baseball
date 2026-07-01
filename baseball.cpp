#include <vector>
#include <string>
#include <stdexcept>

class Baseball {
public:
	void guess(const std::string& guessNumber) {
		assertIllegalArgument(guessNumber);
	}

	void assertIllegalArgument(const std::string& guessNumber)
	{
		if (guessNumber.length() != 3) {
			throw std::length_error("Must be 3 digits");
		}

		for (char ch : guessNumber) {
			if ('0' <= ch || ch <= '9') continue;
			throw std::invalid_argument("Must be numbers");
		}

		if (isDuplicateNumber(guessNumber)) {
			throw std::invalid_argument("Must not have the same numbers");
		}
	}

	bool isDuplicateNumber(const std::string& guessNumber)
	{
		return ((guessNumber[0] == guessNumber[1])
			|| (guessNumber[0] == guessNumber[2])
			|| (guessNumber[1] == guessNumber[2]));
	}
};