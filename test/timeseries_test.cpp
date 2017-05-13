/*
 * Copyright(c) 2015 Xiao Hui <xhui.xiao@gmail.com>. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 */

#define BOOST_TEST_MODULE OHCL_TEST
#include <boost/test/included/unit_test.hpp>

#include "../include/stock.h"
#include <iostream>

using namespace std;

BOOST_AUTO_TEST_SUITE (timeseries_test)

BOOST_AUTO_TEST_CASE (timeseries_create) {
    OHCL o = {19.1, 19.2, 19.3, 19.0};
    TimeSeries<OHCL> ts;
}

BOOST_AUTO_TEST_CASE (timeseries_insert) {
    OHCL o = {19.1, 19.2, 19.3, 19.0};
    TimeSeries<OHCL> ts;
    time_t now;
	now = time(&now);
	cout << ctime(&now) << endl;
    ts.insert(now, o);
}

BOOST_AUTO_TEST_CASE (WorkFlow) {
	/* dummy code
    stream instream;
    stream outstream;
    WorkFlow w = new filter(new MaFlow(5)); // have instream & outstream
    Source s = new OHCL_Source(); // instream = Null
	Sink ma_array; // outstream = Null
	s >> w >> ma_array;
	cout << ma_array;
	*/
}

BOOST_AUTO_TEST_SUITE_END()
