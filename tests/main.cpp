#include <tasks.h>
#include <gtest/gtest.h>

TEST(Task1004, Task1004) {
	Task1004 task;
	//  not initialized, zero length num array
	EXPECT_EQ(0u, task.GetAnswer());

	task.Setup({ 1,1,1 }, 0u);
	EXPECT_EQ(3u, task.GetAnswer());

	task.Setup({ 1,0,1 }, 0u);
	EXPECT_EQ(1u, task.GetAnswer());

	task.Setup({ 0,0,0,0,0 }, 3u);
	EXPECT_EQ(3u, task.GetAnswer());

	task.Setup({ 0,0,0,0,0 }, 5u);
	EXPECT_EQ(5u, task.GetAnswer());

	//  example from leetcode
	task.Setup({ 1,1,1,0,0,0,1,1,1,1,0 }, 2u);
	EXPECT_EQ(6u, task.GetAnswer());

	//  example from leetcode
	task.Setup({ 0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1 }, 3u);
	EXPECT_EQ(10u, task.GetAnswer());

	//  example from my wife teacher Math Nadezhda
	task.Setup({ 1,1,1,0,1,1,0,0,0,0,1,1,1,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,1,0,0,0,1,1,1,1,0,1,1,1,1,0,0,1,1,1,1 }, 3u);
	EXPECT_EQ(15u, task.GetAnswer());
}

TEST(Task209, Task209) {
	Task209 task;

	//  not initialized, zero length num array
	EXPECT_EQ(0u, task.GetAnswer());

	//  summ == 0, so any array with length >= 1 will have solution == 1
	task.Setup({0}, 0u);
	EXPECT_EQ(1u, task.GetAnswer());

	//  example from leetcode
	task.Setup({ 2,3,1,2,4,3 }, 7u);
	EXPECT_EQ(2u, task.GetAnswer());

	//  example from leetcode
	task.Setup({ 1,1,1,1,1,1,1,1 }, 11u);
	EXPECT_EQ(0u, task.GetAnswer());
}

int main(int argc, char** argv) {

    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}