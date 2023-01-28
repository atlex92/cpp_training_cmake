#include <tasks.h>
#include <gtest/gtest.h>

TEST(Task1004, Task1004) {
	Task1004 task;

	task.Setup({ 1,1,1,0,0,0,1,1,1,1,0 }, 2u);
	EXPECT_EQ(6u, task.GetAnswer());

	task.Setup({ 0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1 }, 3u);
	EXPECT_EQ(10u, task.GetAnswer());
}

int main(int argc, char** argv) {

    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}