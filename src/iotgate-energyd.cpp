#include <iotgate-energyd.h>

double soc_to_requesttime(double soc, double capacityKwh, double chargePowerKw) {
    return (capacityKwh / chargePowerKw * (1 - soc)) * 3600;
}