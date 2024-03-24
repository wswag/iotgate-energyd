#ifndef IOTGATE-ENERGYD_H
#define IOTGATE-ENERGYD_H

#include <iotgate.h>

#define GRID(x)               .withProperty("grid", x)
#define POWERSOURCE           .withProperty("type", "S")
#define EXT_POWERSOURCE       .withProperty("type", "S").withProperty("ext", true)
#define WHITE_LOAD            .withProperty("type", "L")
#define CONTROLLABLE_LOAD     .withProperty("type", "CL")
#define SWITCH_CONTROLLER(x)  .withProperty("type", "SC").withProperty("an", #x)
#define TRIGGER_CONTROLLER(x) .withProperty("type", "TC").withProperty("an", #x)
#define DUTY_CONTROLLER(x)    .withProperty("type", "DC").withProperty("an", #x)
#define SWITCH_REQUEST(x)     .withProperty("type", "SR").withProperty("an", #x)
#define DUTY_CYCLE_REQUEST(x) .withProperty("type", "DR").withProperty("an", #x)
#define RUNTIME_REQUEST(x)    .withProperty("type", "RR").withProperty("an", #x)
#define PRIORITY(x)           .withProperty("prio", x)
#define TIMEFRAME(x)          .withProperty("timeframe", x)
#define LAZY                  .withProperty("lazy", true)

double soc_to_requesttime(double soc, double capacityKwh, double chargePowerKw);

#endif /* IOTGATE-ENERGYD_H */
