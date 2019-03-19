/*
 * Copyright(c) 2015 Xiao Hui <xhui.xiao@gmail.com>. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 */

#include "include/gtest/gtest.h"

#include "../include/stock.h"
#include <iostream>

using namespace std;

TEST(TimeSeriesTest, Create) {
	OHCL o = {19.1, 19.2, 19.3, 19.0};
	TimeSeries<OHCL> ts;
}

int main(int argc, char **argv) {
	testing::InitGoogleTest(&argc, argv);
	RUN_ALL_TESTS();
	return 0;
}

