/*
 * Copyright(c) 2015 Xiao Hui <xhui.xiao@gmail.com>. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 */

#ifndef __STOCK_H__
#define __STOCK_H__
#include <ctime>
#include <list>

class Source;
class Sink;
class Node;
class WorkFlow;
class Stream;

template<typename T> class TimeSeries {
    struct TimedData {
        time_t time;
        T& data;
    };

    std::list<TimedData> timeseries;

public:
	void insert(time_t time, T& data) {
		TimedData td = {time, data};
        // TODO: should insert in order (by time)
		timeseries.push_back(td);
	}

    void remove();

/*
	T at(unsigned int i) {
		return timeseries[i];
	}
	*/
};

struct OHCL {
    double open;
    double close;
    double high;
    double low;
    /* unsigned int volume; */
};

struct OHCL_V {
    double open;
    double close;
    double high;
    double low;
    unsigned int volume;
};

extern void ma(int period,
               const Stream<TimeSeries<OHCL>> &ohcl,
               Stream<TimeSeries<double>> &ma);

extern void ema(int period,
                const Stream<TimeSeries<OHCL>> &ohcl,
                stream<TimeSeries<double>> &ma);

struct MACD {
    double dif;
    double dem;
    double osc;
};

extern void macd(int slow, int fast, int average,
                 const Stream<TimeSeries<OHCL>> &ohcl,
                 Stream<TimeSeries<MACD>> &macd);

#endif
