#include <tasks.h>
#include <gtest/gtest.h>

TEST(Task1004, Task1004) {
	Task1004 task;
	//  not initialized, zero length num array
<<<<<<< HEAD
	task.Setup({0}, 0);
=======
>>>>>>> c52fed8 ( On branch dev/p.dvorcov)
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
<<<<<<< HEAD
	task.Setup({ 1,1,1,0,0,0,1,1,1,1,0 }, 2);
	EXPECT_EQ(6, task.GetAnswer());

	//  example from leetcode
	task.Setup({ 0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1 }, 3);
	EXPECT_EQ(10, task.GetAnswer());

	//  example from my wife teacher Math Nadezhda
	task.Setup({ 1,1,1,0,1,1,0,0,0,0,1,1,1,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,1,0,0,0,1,1,1,1,0,1,1,1,1,0,0,1,1,1,1 }, 3);
=======
	task.Setup({ 1,1,1,0,0,0,1,1,1,1,0 }, 2u);
	EXPECT_EQ(6, task.GetAnswer());

	//  example from leetcode
	task.Setup({ 0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1 }, 3u);
	EXPECT_EQ(10, task.GetAnswer());

	//  example from my wife teacher Math Nadezhda
	task.Setup({ 1,1,1,0,1,1,0,0,0,0,1,1,1,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,1,0,0,0,1,1,1,1,0,1,1,1,1,0,0,1,1,1,1 }, 3u);
>>>>>>> c52fed8 ( On branch dev/p.dvorcov)
	EXPECT_EQ(15, task.GetAnswer());
}

/*TEST(Task209, Task209) {
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
}*/

int main(int argc, char** argv) {

    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}