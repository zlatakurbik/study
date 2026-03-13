 #include <gtest/gtest.h>


#include "io.hpp"
#include "sortings.hpp"

TEST(ArrayEqual, AnyElementsCount) {
	std::vector<int> actual = {1, 8, 2, 5, 3, 11};
	//BubbleSort::sort(actual);
	std::vector<int> expected = {1, 4, 3, 5, 8, 11};
	
	ASSERT_EQ(expected.size(), actual.size())
	<<"Разные размеры ожидаемого и отсортированного массивов";
	
	for (int i = 0; i < actual.size(); i++) {
		ASSERT_EQ(expected[i], actual[i])
			<<"Массив ожидаемый и отсортированный отличаются в элементе с ин"<< i;
	}
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}