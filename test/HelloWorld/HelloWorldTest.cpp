#include <HelloWorld.hpp>

#include <gmock/gmock.h>
#include <gtest/gtest.h>

class HelloWorldTest : public ::testing::Test{
public:

  HelloWorld helloworld;
};

TEST_F(HelloWorldTest, TestPrint){
  helloworld.print();

  ASSERT_TRUE(true);
}
