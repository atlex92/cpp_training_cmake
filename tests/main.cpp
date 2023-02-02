#include <tasks.h>
#include <gtest/gtest.h>

TEST(Task1004, Task1004) {
	Task1004 task;
	//  not initialized, zero length num array

	task.Setup({0}, 0);
	EXPECT_EQ(0, task.GetAnswer());

	task.Setup({ 1,1,1 }, 0);
	EXPECT_EQ(3, task.GetAnswer());

	task.Setup({ 1,0,1 }, 0);
	EXPECT_EQ(1, task.GetAnswer());

	task.Setup({ 0,0,0,0,0 }, 3);
	EXPECT_EQ(3, task.GetAnswer());

	task.Setup({ 0,0,0,0,0 }, 5);
	EXPECT_EQ(5, task.GetAnswer());

	//  example from leetcode
	task.Setup({ 1,1,1,0,0,0,1,1,1,1,0 }, 2);
	EXPECT_EQ(6, task.GetAnswer());

	//  example from leetcode
	task.Setup({ 0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1 }, 3);
	EXPECT_EQ(10, task.GetAnswer());

	//  example from my wife teacher Math Nadezhda
	task.Setup({ 1,1,1,0,1,1,0,0,0,0,1,1,1,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,1,0,0,0,1,1,1,1,0,1,1,1,1,0,0,1,1,1,1 }, 3);
	EXPECT_EQ(15, task.GetAnswer());
}

TEST(Task209, Task209) {
	Task209 task;

	//  not initialized, zero length num array
	EXPECT_EQ(0u, task.GetAnswer());

	//  summ == 0, so any array with length >= 1 will have solution == 1
	task.Setup({0}, 0u);
	EXPECT_EQ(1u, task.GetAnswer());

	task.Setup({1,2}, 3u);
	EXPECT_EQ(2u, task.GetAnswer());

	task.Setup({7}, 7u);
	EXPECT_EQ(1u, task.GetAnswer());

	//  all elements == 0, so no change to get summ == 1
	task.Setup({0,0,0,0,0}, 1u);
	EXPECT_EQ(0u, task.GetAnswer());

	//  example from leetcode
	task.Setup({ 2,3,1,2,4,3 }, 7u);
	EXPECT_EQ(2u, task.GetAnswer());

	//  example from leetcode
	task.Setup({ 1,1,1,1,1,1,1,1 }, 11u);
	EXPECT_EQ(0u, task.GetAnswer());

	task.Setup({ 5,1,7,2,4,2,3,6 }, 9u);
	EXPECT_EQ(2u, task.GetAnswer());

	task.Setup({ 5,1,7,2,4,2,3,6 }, 13u);
	EXPECT_EQ(3u, task.GetAnswer());
}

int main(int argc, char** argv) {

    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}