
/*
 * Copyright(c) 2015 Xiao Hui <xhui.xiao@gmail.com>. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 */
#include <time.h>

struct OHLC {
    double open;
    double close;
    double high;
    double close;
    unsigned int volume;
};


template<typename T> class TimeSeries {
    time_t time;
    T *data;
};

typedef TimeSeries<OHLC> CandleStickData;