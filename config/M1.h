/*
 * @file
 * Defines default strategy parameter values for the given timeframe.
 */

// Defines indicator's parameter values for the given pair symbol and timeframe.
struct Indi_ASI_Params_M1 : ASIIndiParams {
  Indi_ASI_Params_M1() : ASIIndiParams(indi_asi_defaults, PERIOD_M1) { shift = 0; }
} indi_asi_m1;

// Defines strategy's parameter values for the given pair symbol and timeframe.
struct Stg_ASI_Params_M1 : StgParams {
  // Struct constructor.
  Stg_ASI_Params_M1() : StgParams(stg_asi_defaults) {}
} stg_asi_m1;
