#define BOOST_TEST_MODULE OHCL_TEST
#include <boost/test/included/unit_test.hpp>

BOOST_AUTO_TEST_SUITE (timeseries_test)

BOOST_AUTO_TEST_CASE (timeseries_create) {
    OHCL o = {19.1, 19.2, 19.3, 19.0};
    TimeSeries<OHCL> ts;
}

BOOST_AUTO_TEST_CASE (timeseries_insert) {
    OHCL o = {19.1, 19.2, 19.3, 19.0};
    TimeSeries<OHCL> ts;
    time_t now = time_t();
    ts.insert(now, o);
}

BOOST_AUTO_TEST_SUITE_END()