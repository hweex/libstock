#include <stock.h>

int main() {
    OHCL o = {19.1, 19.2, 19.3, 19.0};
    TimeSeries<OHCL> ts;
    time_t now = time_t();
    ts.insert(now, o);
    return 0;
}