
#include <iostream>
#include <random>

// Generate a random number between min and max (inclusive)
// Assumes srand() has already been called
// Assumes max - min <= RAND_MAX

int getRandomNumber(int min, int max) {
    static std::random_device rd;
	static std::mt19937 mersenne{ rd() };
	// Note: Due to a bug in the Code::Blocks compiler, if using Code::Blocks on Windows, delete the two lines above and uncomment this line:
	// static std::mt19937 mersenne(static_cast<unsigned int>(time(0))); // initialize our mersenne twister with a random seed
	static const double fraction = 1.0 / (static_cast<double>(mersenne.max()) + 1.0);
	return min + static_cast<int>((max - min + 1) * (mersenne() * fraction));
}

int main(void) {
    std::cout << getRandomNumber(22, 1000) << std::endl;
    return 0;
}