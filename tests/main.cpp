#include <tasks.h>
#include <gtest/gtest.h>

using namespace std;
TEST(Task1004, Task1004) {
	Task1004 task;

	EXPECT_EQ(3, task.longestOnes({ 1,1,1 }, 0u));

	EXPECT_EQ(1, task.longestOnes({ 1,0,1 }, 0u));

	EXPECT_EQ(3, task.longestOnes({ 0,0,0,0,0 }, 3u));

	EXPECT_EQ(5, task.longestOnes({ 0,0,0,0,0 }, 5u));

	//  example from leetcode
	EXPECT_EQ(6, task.longestOnes({ 1,1,1,0,0,0,1,1,1,1,0 }, 2u));

	//  example from leetcode
	EXPECT_EQ(10, task.longestOnes({ 0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1 }, 3u));

	//  example from my wife teacher Math Nadezhda
	EXPECT_EQ(15, task.longestOnes({ 1,1,1,0,1,1,0,0,0,0,1,1,1,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,1,0,0,0,1,1,1,1,0,1,1,1,1,0,0,1,1,1,1 }, 3u));
	
	EXPECT_EQ(32, task.longestOnes({ 1,0,0,1,0,0,1,0,1,1,1,1,0,1,1,1,1,0,1,1,1,1,1,1,0,1,1,1,0,0,1,1,1,0,0,1,0,1,0,0,1,0,0,1,1 }, 9u));
	
}

TEST(Task209, Task209) {
	Task209 task;
	//  not initialized, zero length num array
	EXPECT_EQ(0u, task.minSubArrayLen(0,{}));

	//  summ == 0, so any array with length >= 1 will have solution == 1
	EXPECT_EQ(1u, task.minSubArrayLen(0, {0}));

	//  example from leetcode
	EXPECT_EQ(2u, task.minSubArrayLen(7, { 2,3,1,2,4,3 }));

	EXPECT_EQ(1u, task.minSubArrayLen(4, { 1, 4, 4 }));

	//  example from leetcode
	EXPECT_EQ(0u, task.minSubArrayLen(11, { 1,1,1,1,1,1,1,1 }));

	//  example from leetcode
	EXPECT_EQ(3u, task.minSubArrayLen(11, { 1,2,3,4,5 }));
	
}

TEST(Task1109, Task1109) {
	Task1109 task;
	//  example from leetcode
	EXPECT_EQ((vector<int>{10,55,45,25,25}), (task.corpFlightBookings({{1,2,10},{2,3,20},{2,5,25}}, 5)));
	//  example from leetcode
	EXPECT_EQ((vector<int>{10,25}), (task.corpFlightBookings({{1,2,10},{2,2,15}}, 2)));
}

TEST(Task141, Task141) {
	Task141 task;
	//  example from leetcode
	ListNode n1{3};
	ListNode n2{2};
	ListNode n3{0};
	ListNode n4{-4};
	n1.next = &n2;
	n2.next = &n3;
	n3.next = &n4;
	n4.next = &n2;
	EXPECT_TRUE(task.hasCycle(&n2));

	n2.next = &n1;
	EXPECT_TRUE(task.hasCycle(&n1));

	n1.next = nullptr;
	EXPECT_FALSE(task.hasCycle(&n1));
}

int main(int argc, char** argv) {

    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}