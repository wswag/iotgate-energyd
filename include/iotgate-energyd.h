#ifndef IOTGATE_ENERGYD_H
#define IOTGATE_ENERGYD_H

#define GRID(x)               .withProperty("grid", x)
#define POWERSOURCE           .withProperty("type", "S")
#define EXT_POWERSOURCE       .withProperty("type", "S").withProperty("ext", true)
#define WHITE_LOAD            .withProperty("type", "L")
#define CONTROLLABLE_LOAD     .withProperty("type", "CL")
#define BATTERY(cap_kwh)      .withProperty("type", "B").withProperty("cap", cap_kwh)
#define SWITCH_CONTROLLER(x)  .withProperty("type", "SC").withProperty("an", #x)
#define TRIGGER_CONTROLLER(x) .withProperty("type", "TC").withProperty("an", #x)
#define DUTY_CONTROLLER(x)    .withProperty("type", "DC").withProperty("an", #x)
#define SWITCH_REQUEST(x)     .withProperty("type", "SR").withProperty("an", #x)
#define DUTY_CYCLE_REQUEST(x) .withProperty("type", "DR").withProperty("an", #x)
#define RUNTIME_REQUEST(x)    .withProperty("type", "RR").withProperty("an", #x)
#define ENERGY_REQUEST(x)     .withProperty("type", "ER").withProperty("an", #x)
#define AUTOMATIC_CAPABLE     .withProperty("auto", 1)    
#define PRIORITY(x)           .withProperty("prio", x)
#define TIMEFRAME(x)          .withProperty("timeframe", x)
#define DEBOUNCE(x)           .withProperty("db", x)
#define LAZY                  .withProperty("lazy", true)
#define BASIC_PROVISION(x)    .withProperty("bp", x)

double soc_to_requesttime(double soc, double capacityKwh, double chargePowerKw);

#endif /* IOTGATE-ENERGYD_H */
