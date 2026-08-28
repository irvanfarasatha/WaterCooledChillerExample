#include "omc_simulation_settings.h"
#include "logic2_raw_functions.h"
#ifdef __cplusplus
extern "C" {
#endif

#include "logic2_raw_includes.h"


DLLDirection
modelica_string omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getHeaderElementTMY3(threadData_t *threadData, modelica_string _filNam, modelica_string _start, modelica_string _name, modelica_integer _position)
{
  modelica_string _element = NULL;
  modelica_string _lin = NULL;
  modelica_integer _iLin;
  modelica_integer _index;
  modelica_integer _staInd;
  modelica_integer _nexInd;
  modelica_boolean _found;
  modelica_boolean _EOF;
  modelica_string _fouDel = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  static int tmp4 = 0;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  static int tmp11 = 0;
  modelica_integer tmp12;
  modelica_integer tmp13;
  modelica_integer tmp14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  static int tmp21 = 0;
  _tailrecursive: OMC_LABEL_UNUSED
  // _element has no default value.
  // _lin has no default value.
  // _iLin has no default value.
  _index = ((modelica_integer) 0);
  // _staInd has no default value.
  // _nexInd has no default value.
  // _found has no default value.
  // _EOF has no default value.
  // _fouDel has no default value.
  _iLin = ((modelica_integer) 0);

  _EOF = 0 /* false */;

  while(1)
  {
    if(!((!_EOF) && (_index == ((modelica_integer) 0)))) break;
    _iLin = _iLin + ((modelica_integer) 1);

    _lin = omc_Modelica_Utilities_Streams_readLine(threadData, _filNam, _iLin ,&_EOF);

    _index = omc_Modelica_Utilities_Strings_find(threadData, _lin, _start, ((modelica_integer) 1), 0 /* false */);
  }

  {
    if(!(!_EOF))
    {
      tmpMeta1 = stringAppend(_OMC_LIT0,_start);
      tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT1);
      tmpMeta3 = stringAppend(tmpMeta2,_OMC_LIT2);
      {
        FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/BoundaryConditions/WeatherData/BaseClasses/getHeaderElementTMY3.mo",38,3,39,71,0};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta3));
      }
    }
  }

  _nexInd = ((modelica_integer) 1);

  tmp12 = ((modelica_integer) 1); tmp13 = 1; tmp14 = _position - ((modelica_integer) 1);
  if(!(((tmp13 > 0) && (tmp12 > tmp14)) || ((tmp13 < 0) && (tmp12 < tmp14))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp12, tmp14); _i += tmp13)
    {
      _nexInd = omc_Modelica_Utilities_Strings_find(threadData, _lin, _OMC_LIT3, _nexInd + ((modelica_integer) 1), 1 /* true */);

      {
        if(!(_nexInd > ((modelica_integer) 0)))
        {
          tmpMeta5 = stringAppend(_OMC_LIT4,_name);
          tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT5);
          tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT6);
          tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT7);
          tmpMeta9 = stringAppend(tmpMeta8,_lin);
          tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT8);
          {
            FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/BoundaryConditions/WeatherData/BaseClasses/getHeaderElementTMY3.mo",47,4,49,20,0};
            omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta10));
          }
        }
      }
    }
  }

  _staInd = _nexInd;

  _nexInd = omc_Modelica_Utilities_Strings_find(threadData, _lin, _OMC_LIT3, _nexInd + ((modelica_integer) 1), 1 /* true */);

  {
    if(!(_nexInd > ((modelica_integer) 0)))
    {
      tmpMeta15 = stringAppend(_OMC_LIT4,_name);
      tmpMeta16 = stringAppend(tmpMeta15,_OMC_LIT5);
      tmpMeta17 = stringAppend(tmpMeta16,_OMC_LIT6);
      tmpMeta18 = stringAppend(tmpMeta17,_OMC_LIT7);
      tmpMeta19 = stringAppend(tmpMeta18,_lin);
      tmpMeta20 = stringAppend(tmpMeta19,_OMC_LIT8);
      {
        FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/BoundaryConditions/WeatherData/BaseClasses/getHeaderElementTMY3.mo",57,3,59,21,0};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta20));
      }
    }
  }

  _element = omc_Modelica_Utilities_Strings_substring(threadData, _lin, _staInd + ((modelica_integer) 1), _nexInd - ((modelica_integer) 1));
  _return: OMC_LABEL_UNUSED
  return _element;
}
modelica_metatype boxptr_Buildings_BoundaryConditions_WeatherData_BaseClasses_getHeaderElementTMY3(threadData_t *threadData, modelica_metatype _filNam, modelica_metatype _start, modelica_metatype _name, modelica_metatype _position)
{
  modelica_integer tmp1;
  modelica_string _element = NULL;
  tmp1 = mmc_unbox_integer(_position);
  _element = omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getHeaderElementTMY3(threadData, _filNam, _start, _name, tmp1);
  /* skip box _element; String */
  return _element;
}

DLLDirection
modelica_real omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLatitudeTMY3(threadData_t *threadData, modelica_string _filNam)
{
  modelica_real _lat;
  modelica_integer _nexInd;
  modelica_string _element = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  static int tmp3 = 0;
  modelica_real tmp4;
  modelica_string tmp5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_string tmp8;
  modelica_real tmp9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  static int tmp12 = 0;
  _tailrecursive: OMC_LABEL_UNUSED
  // _lat has no default value.
  // _nexInd has no default value.
  // _element has no default value.
  _element = omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getHeaderElementTMY3(threadData, _filNam, _OMC_LIT12, _OMC_LIT13, ((modelica_integer) 7));

  _nexInd = omc_Modelica_Utilities_Strings_Advanced_scanReal(threadData, _element, ((modelica_integer) 1), 0 /* false */ ,&_lat);

  {
    if(!(_nexInd > ((modelica_integer) 1)))
    {
      tmpMeta1 = stringAppend(_OMC_LIT14,_element);
      tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT15);
      {
        FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/BoundaryConditions/WeatherData/BaseClasses/getLatitudeTMY3.mo",23,4,24,62,0};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta2));
      }
    }
  }

  tmp4 = 180.0;
  if (tmp4 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "lat * 3.141592653589793 / 180.0");}
  _lat = ((_lat) * (3.141592653589793)) / tmp4;

  {
    if(!(fabs(_lat) <= 3.141592653589793))
    {
      tmp5 = modelica_real_to_modelica_string(_lat, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta6 = stringAppend(_OMC_LIT16,tmp5);
      tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT17);
      tmp9 = 3.141592653589793;
      if (tmp9 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "lat * 180.0 / 3.141592653589793");}
      tmp8 = modelica_real_to_modelica_string(((_lat) * (180.0)) / tmp9, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta10 = stringAppend(tmpMeta7,tmp8);
      tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT18);
      {
        FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/BoundaryConditions/WeatherData/BaseClasses/getLatitudeTMY3.mo",28,4,30,84,0};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta11));
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _lat;
}
modelica_metatype boxptr_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLatitudeTMY3(threadData_t *threadData, modelica_metatype _filNam)
{
  modelica_real _lat;
  modelica_metatype out_lat;
  _lat = omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLatitudeTMY3(threadData, _filNam);
  out_lat = mmc_mk_rcon(_lat);
  return out_lat;
}

DLLDirection
modelica_real omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLongitudeTMY3(threadData_t *threadData, modelica_string _filNam)
{
  modelica_real _lon;
  modelica_integer _nexInd;
  modelica_string _element = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  static int tmp3 = 0;
  modelica_real tmp4;
  modelica_string tmp5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_string tmp8;
  modelica_real tmp9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  static int tmp12 = 0;
  _tailrecursive: OMC_LABEL_UNUSED
  // _lon has no default value.
  // _nexInd has no default value.
  // _element has no default value.
  _element = omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getHeaderElementTMY3(threadData, _filNam, _OMC_LIT12, _OMC_LIT19, ((modelica_integer) 8));

  _nexInd = omc_Modelica_Utilities_Strings_Advanced_scanReal(threadData, _element, ((modelica_integer) 1), 0 /* false */ ,&_lon);

  {
    if(!(_nexInd > ((modelica_integer) 1)))
    {
      tmpMeta1 = stringAppend(_OMC_LIT20,_element);
      tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT15);
      {
        FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/BoundaryConditions/WeatherData/BaseClasses/getLongitudeTMY3.mo",23,4,24,62,0};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta2));
      }
    }
  }

  tmp4 = 180.0;
  if (tmp4 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "lon * 3.141592653589793 / 180.0");}
  _lon = ((_lon) * (3.141592653589793)) / tmp4;

  {
    if(!(fabs(_lon) < 6.283185307179586))
    {
      tmp5 = modelica_real_to_modelica_string(_lon, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta6 = stringAppend(_OMC_LIT21,tmp5);
      tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT17);
      tmp9 = 3.141592653589793;
      if (tmp9 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "lon * 180.0 / 3.141592653589793");}
      tmp8 = modelica_real_to_modelica_string(((_lon) * (180.0)) / tmp9, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta10 = stringAppend(tmpMeta7,tmp8);
      tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT18);
      {
        FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/BoundaryConditions/WeatherData/BaseClasses/getLongitudeTMY3.mo",28,4,30,84,0};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta11));
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _lon;
}
modelica_metatype boxptr_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLongitudeTMY3(threadData_t *threadData, modelica_metatype _filNam)
{
  modelica_real _lon;
  modelica_metatype out_lon;
  _lon = omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLongitudeTMY3(threadData, _filNam);
  out_lon = mmc_mk_rcon(_lon);
  return out_lon;
}

real_array omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getTimeSpanTMY3(threadData_t *threadData, modelica_string _filNam, modelica_string _tabNam)
{
  double* _timeSpan_c89;
  real_array _timeSpan;
  alloc_real_array(&(_timeSpan), 1, (_index_t)2); // _timeSpan has no default value.

  _timeSpan_c89 = data_of_real_c89_array(_timeSpan);
  getTimeSpan(MMC_STRINGDATA(_filNam), MMC_STRINGDATA(_tabNam), _timeSpan_c89);
  return _timeSpan;
}
modelica_metatype boxptr_Buildings_BoundaryConditions_WeatherData_BaseClasses_getTimeSpanTMY3(threadData_t *threadData, modelica_metatype _filNam, modelica_metatype _tabNam)
{
  real_array _timeSpan;
  modelica_metatype out_timeSpan;
  _timeSpan = omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getTimeSpanTMY3(threadData, _filNam, _tabNam);
  out_timeSpan = mmc_mk_modelica_array(_timeSpan);
  return out_timeSpan;
}

DLLDirection
modelica_real omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getTimeZoneTMY3(threadData_t *threadData, modelica_string _filNam)
{
  modelica_real _timZon;
  modelica_integer _nexInd;
  modelica_string _element = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  static int tmp3 = 0;
  modelica_string tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_string tmp7;
  modelica_real tmp8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  static int tmp11 = 0;
  _tailrecursive: OMC_LABEL_UNUSED
  // _timZon has no default value.
  // _nexInd has no default value.
  // _element has no default value.
  _element = omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getHeaderElementTMY3(threadData, _filNam, _OMC_LIT12, _OMC_LIT19, ((modelica_integer) 9));

  _nexInd = omc_Modelica_Utilities_Strings_Advanced_scanReal(threadData, _element, ((modelica_integer) 1), 0 /* false */ ,&_timZon);

  {
    if(!(_nexInd > ((modelica_integer) 1)))
    {
      tmpMeta1 = stringAppend(_OMC_LIT26,_element);
      tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT15);
      {
        FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/BoundaryConditions/WeatherData/BaseClasses/getTimeZoneTMY3.mo",23,4,24,62,0};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta2));
      }
    }
  }

  _timZon = (_timZon) * (3600.0);

  {
    if(!(fabs(_timZon) < 86400.0))
    {
      tmp4 = modelica_real_to_modelica_string(_timZon, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta5 = stringAppend(_OMC_LIT27,tmp4);
      tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT17);
      tmp8 = 3600.0;
      if (tmp8 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "timZon / 3600.0");}
      tmp7 = modelica_real_to_modelica_string((_timZon) / tmp8, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta9 = stringAppend(tmpMeta6,tmp7);
      tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT28);
      {
        FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/BoundaryConditions/WeatherData/BaseClasses/getTimeZoneTMY3.mo",27,4,29,67,0};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta10));
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _timZon;
}
modelica_metatype boxptr_Buildings_BoundaryConditions_WeatherData_BaseClasses_getTimeZoneTMY3(threadData_t *threadData, modelica_metatype _filNam)
{
  modelica_real _timZon;
  modelica_metatype out_timZon;
  _timZon = omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getTimeZoneTMY3(threadData, _filNam);
  out_timZon = mmc_mk_rcon(_timZon);
  return out_timZon;
}

DLLDirection
modelica_real omc_Buildings_Fluid_Actuators_BaseClasses_equalPercentage(threadData_t *threadData, modelica_real _y, modelica_real _R, modelica_real _l, modelica_real _delta)
{
  modelica_real _phi;
  modelica_real _a;
  modelica_real _b;
  modelica_real _c;
  modelica_real _d;
  modelica_real _logR;
  modelica_real _z;
  modelica_real _q;
  modelica_real _p;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_real tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_real tmp24;
  modelica_real tmp25;
  modelica_real tmp26;
  modelica_real tmp27;
  modelica_real tmp28;
  modelica_real tmp29;
  modelica_real tmp30;
  modelica_real tmp31;
  modelica_real tmp32;
  modelica_real tmp33;
  modelica_real tmp34;
  modelica_real tmp35;
  modelica_real tmp36;
  modelica_real tmp37;
  modelica_real tmp38;
  modelica_real tmp39;
  modelica_real tmp40;
  modelica_real tmp41;
  modelica_real tmp42;
  modelica_real tmp43;
  modelica_real tmp44;
  modelica_real tmp45;
  modelica_real tmp46;
  modelica_real tmp47;
  modelica_real tmp48;
  modelica_real tmp49;
  modelica_real tmp50;
  modelica_real tmp51;
  modelica_real tmp52;
  modelica_real tmp53;
  modelica_real tmp54;
  modelica_real tmp55;
  modelica_real tmp56;
  modelica_real tmp57;
  modelica_real tmp58;
  modelica_real tmp59;
  modelica_real tmp60;
  modelica_real tmp61;
  modelica_real tmp62;
  modelica_real tmp63;
  modelica_real tmp64;
  modelica_real tmp65;
  modelica_real tmp66;
  _tailrecursive: OMC_LABEL_UNUSED
  // _phi has no default value.
  // _a has no default value.
  // _b has no default value.
  // _c has no default value.
  // _d has no default value.
  // _logR has no default value.
  // _z has no default value.
  // _q has no default value.
  // _p has no default value.
  tmp1 = 2.0;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "delta / 2.0");}
  if((_y < (_delta) / tmp1))
  {
    tmp2 = _R;
    tmp3 = _delta - 1.0;
    if(tmp2 < 0.0 && tmp3 != 0.0)
    {
      tmp5 = modf(tmp3, &tmp6);
      
      if(tmp5 > 0.5)
      {
        tmp5 -= 1.0;
        tmp6 += 1.0;
      }
      else if(tmp5 < -0.5)
      {
        tmp5 += 1.0;
        tmp6 -= 1.0;
      }
      
      if(fabs(tmp5) < 1e-10)
        tmp4 = pow(tmp2, tmp6);
      else
      {
        tmp8 = modf(1.0/tmp3, &tmp7);
        if(tmp8 > 0.5)
        {
          tmp8 -= 1.0;
          tmp7 += 1.0;
        }
        else if(tmp8 < -0.5)
        {
          tmp8 += 1.0;
          tmp7 -= 1.0;
        }
        if(fabs(tmp8) < 1e-10 && ((unsigned long)tmp7 & 1))
        {
          tmp4 = -pow(-tmp2, tmp5)*pow(tmp2, tmp6);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2, tmp3);
        }
      }
    }
    else
    {
      tmp4 = pow(tmp2, tmp3);
    }
    if(isnan(tmp4) || isinf(tmp4))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2, tmp3);
    }tmp9 = _delta;
    if (tmp9 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "y * (R ^ (delta - 1.0) - l) / delta");}
    _phi = _l + ((_y) * (tmp4 - _l)) / tmp9;
  }
  else
  {
    if((_y > (1.5) * (_delta)))
    {
      tmp10 = _R;
      tmp11 = _y - 1.0;
      if(tmp10 < 0.0 && tmp11 != 0.0)
      {
        tmp13 = modf(tmp11, &tmp14);
        
        if(tmp13 > 0.5)
        {
          tmp13 -= 1.0;
          tmp14 += 1.0;
        }
        else if(tmp13 < -0.5)
        {
          tmp13 += 1.0;
          tmp14 -= 1.0;
        }
        
        if(fabs(tmp13) < 1e-10)
          tmp12 = pow(tmp10, tmp14);
        else
        {
          tmp16 = modf(1.0/tmp11, &tmp15);
          if(tmp16 > 0.5)
          {
            tmp16 -= 1.0;
            tmp15 += 1.0;
          }
          else if(tmp16 < -0.5)
          {
            tmp16 += 1.0;
            tmp15 -= 1.0;
          }
          if(fabs(tmp16) < 1e-10 && ((unsigned long)tmp15 & 1))
          {
            tmp12 = -pow(-tmp10, tmp13)*pow(tmp10, tmp14);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp10, tmp11);
          }
        }
      }
      else
      {
        tmp12 = pow(tmp10, tmp11);
      }
      if(isnan(tmp12) || isinf(tmp12))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp10, tmp11);
      }
      _phi = tmp12;
    }
    else
    {
      tmp17 = _R;
      if(!(tmp17 > 0.0))
      {
        FILE_INFO info = {"",0,0,0,0,0};
        omc_assert(threadData, info, "Model error: Argument of log(R) was %g should be > 0", tmp17);
      }
      _logR = log(tmp17);

      tmp18 = 2.0;
      if (tmp18 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "3.0 * delta / 2.0");}
      _z = ((3.0) * (_delta)) / tmp18;

      tmp19 = _R;
      tmp20 = _z;
      if(tmp19 < 0.0 && tmp20 != 0.0)
      {
        tmp22 = modf(tmp20, &tmp23);
        
        if(tmp22 > 0.5)
        {
          tmp22 -= 1.0;
          tmp23 += 1.0;
        }
        else if(tmp22 < -0.5)
        {
          tmp22 += 1.0;
          tmp23 -= 1.0;
        }
        
        if(fabs(tmp22) < 1e-10)
          tmp21 = pow(tmp19, tmp23);
        else
        {
          tmp25 = modf(1.0/tmp20, &tmp24);
          if(tmp25 > 0.5)
          {
            tmp25 -= 1.0;
            tmp24 += 1.0;
          }
          else if(tmp25 < -0.5)
          {
            tmp25 += 1.0;
            tmp24 -= 1.0;
          }
          if(fabs(tmp25) < 1e-10 && ((unsigned long)tmp24 & 1))
          {
            tmp21 = -pow(-tmp19, tmp22)*pow(tmp19, tmp23);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp19, tmp20);
          }
        }
      }
      else
      {
        tmp21 = pow(tmp19, tmp20);
      }
      if(isnan(tmp21) || isinf(tmp21))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp19, tmp20);
      }
      _q = ((_delta) * (tmp21)) * (_logR);

      tmp26 = _R;
      tmp27 = _z;
      if(tmp26 < 0.0 && tmp27 != 0.0)
      {
        tmp29 = modf(tmp27, &tmp30);
        
        if(tmp29 > 0.5)
        {
          tmp29 -= 1.0;
          tmp30 += 1.0;
        }
        else if(tmp29 < -0.5)
        {
          tmp29 += 1.0;
          tmp30 -= 1.0;
        }
        
        if(fabs(tmp29) < 1e-10)
          tmp28 = pow(tmp26, tmp30);
        else
        {
          tmp32 = modf(1.0/tmp27, &tmp31);
          if(tmp32 > 0.5)
          {
            tmp32 -= 1.0;
            tmp31 += 1.0;
          }
          else if(tmp32 < -0.5)
          {
            tmp32 += 1.0;
            tmp31 -= 1.0;
          }
          if(fabs(tmp32) < 1e-10 && ((unsigned long)tmp31 & 1))
          {
            tmp28 = -pow(-tmp26, tmp29)*pow(tmp26, tmp30);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp26, tmp27);
          }
        }
      }
      else
      {
        tmp28 = pow(tmp26, tmp27);
      }
      if(isnan(tmp28) || isinf(tmp28))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp26, tmp27);
      }
      _p = tmp28;

      tmp33 = _R;
      tmp34 = _delta;
      if(tmp33 < 0.0 && tmp34 != 0.0)
      {
        tmp36 = modf(tmp34, &tmp37);
        
        if(tmp36 > 0.5)
        {
          tmp36 -= 1.0;
          tmp37 += 1.0;
        }
        else if(tmp36 < -0.5)
        {
          tmp36 += 1.0;
          tmp37 -= 1.0;
        }
        
        if(fabs(tmp36) < 1e-10)
          tmp35 = pow(tmp33, tmp37);
        else
        {
          tmp39 = modf(1.0/tmp34, &tmp38);
          if(tmp39 > 0.5)
          {
            tmp39 -= 1.0;
            tmp38 += 1.0;
          }
          else if(tmp39 < -0.5)
          {
            tmp39 += 1.0;
            tmp38 -= 1.0;
          }
          if(fabs(tmp39) < 1e-10 && ((unsigned long)tmp38 & 1))
          {
            tmp35 = -pow(-tmp33, tmp36)*pow(tmp33, tmp37);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp33, tmp34);
          }
        }
      }
      else
      {
        tmp35 = pow(tmp33, tmp34);
      }
      if(isnan(tmp35) || isinf(tmp35))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp33, tmp34);
      }tmp40 = _delta;
      tmp41 = ((tmp40 * tmp40 * tmp40)) * (_R);
      if (tmp41 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(q - 2.0 * p + 2.0 * R ^ delta) / (delta ^ 3.0 * R)");}
      _a = (_q - ((2.0) * (_p)) + (2.0) * (tmp35)) / tmp41;

      tmp42 = _R;
      tmp43 = _delta;
      if(tmp42 < 0.0 && tmp43 != 0.0)
      {
        tmp45 = modf(tmp43, &tmp46);
        
        if(tmp45 > 0.5)
        {
          tmp45 -= 1.0;
          tmp46 += 1.0;
        }
        else if(tmp45 < -0.5)
        {
          tmp45 += 1.0;
          tmp46 -= 1.0;
        }
        
        if(fabs(tmp45) < 1e-10)
          tmp44 = pow(tmp42, tmp46);
        else
        {
          tmp48 = modf(1.0/tmp43, &tmp47);
          if(tmp48 > 0.5)
          {
            tmp48 -= 1.0;
            tmp47 += 1.0;
          }
          else if(tmp48 < -0.5)
          {
            tmp48 += 1.0;
            tmp47 -= 1.0;
          }
          if(fabs(tmp48) < 1e-10 && ((unsigned long)tmp47 & 1))
          {
            tmp44 = -pow(-tmp42, tmp45)*pow(tmp42, tmp46);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp42, tmp43);
          }
        }
      }
      else
      {
        tmp44 = pow(tmp42, tmp43);
      }
      if(isnan(tmp44) || isinf(tmp44))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp42, tmp43);
      }tmp49 = _delta;
      tmp50 = ((2.0) * ((tmp49 * tmp49))) * (_R);
      if (tmp50 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(12.0 * p - 5.0 * q - 13.0 * R ^ delta + l * R) / (2.0 * delta ^ 2.0 * R)");}
      _b = ((12.0) * (_p) - ((5.0) * (_q)) - ((13.0) * (tmp44)) + (_l) * (_R)) / tmp50;

      tmp51 = _R;
      tmp52 = _delta;
      if(tmp51 < 0.0 && tmp52 != 0.0)
      {
        tmp54 = modf(tmp52, &tmp55);
        
        if(tmp54 > 0.5)
        {
          tmp54 -= 1.0;
          tmp55 += 1.0;
        }
        else if(tmp54 < -0.5)
        {
          tmp54 += 1.0;
          tmp55 -= 1.0;
        }
        
        if(fabs(tmp54) < 1e-10)
          tmp53 = pow(tmp51, tmp55);
        else
        {
          tmp57 = modf(1.0/tmp52, &tmp56);
          if(tmp57 > 0.5)
          {
            tmp57 -= 1.0;
            tmp56 += 1.0;
          }
          else if(tmp57 < -0.5)
          {
            tmp57 += 1.0;
            tmp56 -= 1.0;
          }
          if(fabs(tmp57) < 1e-10 && ((unsigned long)tmp56 & 1))
          {
            tmp53 = -pow(-tmp51, tmp54)*pow(tmp51, tmp55);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp51, tmp52);
          }
        }
      }
      else
      {
        tmp53 = pow(tmp51, tmp52);
      }
      if(isnan(tmp53) || isinf(tmp53))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp51, tmp52);
      }tmp58 = ((4.0) * (_delta)) * (_R);
      if (tmp58 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(7.0 * q - 18.0 * p + 24.0 * R ^ delta - 6.0 * l * R) / (4.0 * delta * R)");}
      _c = ((7.0) * (_q) - ((18.0) * (_p)) + (24.0) * (tmp53) - (((6.0) * (_l)) * (_R))) / tmp58;

      tmp59 = _R;
      tmp60 = _delta;
      if(tmp59 < 0.0 && tmp60 != 0.0)
      {
        tmp62 = modf(tmp60, &tmp63);
        
        if(tmp62 > 0.5)
        {
          tmp62 -= 1.0;
          tmp63 += 1.0;
        }
        else if(tmp62 < -0.5)
        {
          tmp62 += 1.0;
          tmp63 -= 1.0;
        }
        
        if(fabs(tmp62) < 1e-10)
          tmp61 = pow(tmp59, tmp63);
        else
        {
          tmp65 = modf(1.0/tmp60, &tmp64);
          if(tmp65 > 0.5)
          {
            tmp65 -= 1.0;
            tmp64 += 1.0;
          }
          else if(tmp65 < -0.5)
          {
            tmp65 += 1.0;
            tmp64 -= 1.0;
          }
          if(fabs(tmp65) < 1e-10 && ((unsigned long)tmp64 & 1))
          {
            tmp61 = -pow(-tmp59, tmp62)*pow(tmp59, tmp63);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp59, tmp60);
          }
        }
      }
      else
      {
        tmp61 = pow(tmp59, tmp60);
      }
      if(isnan(tmp61) || isinf(tmp61))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp59, tmp60);
      }tmp66 = (8.0) * (_R);
      if (tmp66 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(8.0 * p - 3.0 * q - 9.0 * R ^ delta + 9.0 * l * R) / (8.0 * R)");}
      _d = ((8.0) * (_p) - ((3.0) * (_q)) - ((9.0) * (tmp61)) + ((9.0) * (_l)) * (_R)) / tmp66;

      _phi = _d + (_y) * (_c + (_y) * (_b + (_y) * (_a)));
    }
  }
  _return: OMC_LABEL_UNUSED
  return _phi;
}
modelica_metatype boxptr_Buildings_Fluid_Actuators_BaseClasses_equalPercentage(threadData_t *threadData, modelica_metatype _y, modelica_metatype _R, modelica_metatype _l, modelica_metatype _delta)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real _phi;
  modelica_metatype out_phi;
  tmp1 = mmc_unbox_real(_y);
  tmp2 = mmc_unbox_real(_R);
  tmp3 = mmc_unbox_real(_l);
  tmp4 = mmc_unbox_real(_delta);
  _phi = omc_Buildings_Fluid_Actuators_BaseClasses_equalPercentage(threadData, tmp1, tmp2, tmp3, tmp4);
  out_phi = mmc_mk_rcon(_phi);
  return out_phi;
}

DLLDirection
modelica_real omc_Buildings_Fluid_Actuators_BaseClasses_exponentialDamper(threadData_t *threadData, modelica_real _y, modelica_real _a, modelica_real _b, real_array _cL, real_array _cU, modelica_real _yL, modelica_real _yU)
{
  modelica_real _kThetaSqRt;
  modelica_real _yC;
  _tailrecursive: OMC_LABEL_UNUSED
  // _kThetaSqRt has no default value.
  // _yC has no default value.
  if((_y < _yL))
  {
    _yC = fmax(0.0,_y);

    _kThetaSqRt = sqrt(exp(real_array_get(_cL, 1, ((modelica_integer) 3)) + (_yC) * (real_array_get(_cL, 1, ((modelica_integer) 2)) + (_yC) * (real_array_get(_cL, 1, ((modelica_integer) 1))))));
  }
  else
  {
    if((_y > _yU))
    {
      _yC = fmin(1.0,_y);

      _kThetaSqRt = sqrt(exp(real_array_get(_cU, 1, ((modelica_integer) 3)) + (_yC) * (real_array_get(_cU, 1, ((modelica_integer) 2)) + (_yC) * (real_array_get(_cU, 1, ((modelica_integer) 1))))));
    }
    else
    {
      _kThetaSqRt = sqrt(exp(_a + (_b) * (1.0 - _y)));
    }
  }
  _return: OMC_LABEL_UNUSED
  return _kThetaSqRt;
}
modelica_metatype boxptr_Buildings_Fluid_Actuators_BaseClasses_exponentialDamper(threadData_t *threadData, modelica_metatype _y, modelica_metatype _a, modelica_metatype _b, modelica_metatype _cL, modelica_metatype _cU, modelica_metatype _yL, modelica_metatype _yU)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real _kThetaSqRt;
  modelica_metatype out_kThetaSqRt;
  tmp1 = mmc_unbox_real(_y);
  tmp2 = mmc_unbox_real(_a);
  tmp3 = mmc_unbox_real(_b);
  tmp4 = mmc_unbox_real(_yL);
  tmp5 = mmc_unbox_real(_yU);
  _kThetaSqRt = omc_Buildings_Fluid_Actuators_BaseClasses_exponentialDamper(threadData, tmp1, tmp2, tmp3, *((base_array_t*)_cL), *((base_array_t*)_cU), tmp4, tmp5);
  out_kThetaSqRt = mmc_mk_rcon(_kThetaSqRt);
  return out_kThetaSqRt;
}

DLLDirection
modelica_real omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData_t *threadData, modelica_real _dp, modelica_real _k, modelica_real _m_flow_turbulent)
{
  modelica_real _m_flow;
  modelica_real _dp_turbulent;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _dpNorm;
  modelica_real tmp3;
  modelica_real _dpNormSq;
  modelica_real tmp4;
  _tailrecursive: OMC_LABEL_UNUSED
  // _m_flow has no default value.
  tmp1 = _k;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "m_flow_turbulent / k");}
  tmp2 = (_m_flow_turbulent) / tmp1;
  _dp_turbulent = (tmp2 * tmp2);
  tmp3 = _dp_turbulent;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "dp / dp_turbulent");}
  _dpNorm = (_dp) / tmp3;
  tmp4 = _dpNorm;
  _dpNormSq = (tmp4 * tmp4);
  _m_flow = ((fabs(_dp) > _dp_turbulent)?((((modelica_real)sign(_dp))) * (_k)) * (sqrt(fabs(_dp))):((1.40625 + ((0.15625) * (_dpNormSq) - 0.5625) * (_dpNormSq)) * (_m_flow_turbulent)) * (_dpNorm));
  _return: OMC_LABEL_UNUSED
  return _m_flow;
}
modelica_metatype boxptr_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData_t *threadData, modelica_metatype _dp, modelica_metatype _k, modelica_metatype _m_flow_turbulent)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real _m_flow;
  modelica_metatype out_m_flow;
  tmp1 = mmc_unbox_real(_dp);
  tmp2 = mmc_unbox_real(_k);
  tmp3 = mmc_unbox_real(_m_flow_turbulent);
  _m_flow = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, tmp1, tmp2, tmp3);
  out_m_flow = mmc_mk_rcon(_m_flow);
  return out_m_flow;
}

DLLDirection
modelica_real omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData_t *threadData, modelica_real _m_flow, modelica_real _k, modelica_real _m_flow_turbulent)
{
  modelica_real _dp;
  modelica_real _dp_turbulent;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _m_flowNorm;
  modelica_real tmp3;
  modelica_real _m_flowNormSq;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  _tailrecursive: OMC_LABEL_UNUSED
  // _dp has no default value.
  tmp1 = _k;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "m_flow_turbulent / k");}
  tmp2 = (_m_flow_turbulent) / tmp1;
  _dp_turbulent = (tmp2 * tmp2);
  tmp3 = _m_flow_turbulent;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "m_flow / m_flow_turbulent");}
  _m_flowNorm = (_m_flow) / tmp3;
  tmp4 = _m_flowNorm;
  _m_flowNormSq = (tmp4 * tmp4);
  tmp7 = (modelica_boolean)(fabs(_m_flow) > _m_flow_turbulent);
  if(tmp7)
  {
    tmp5 = _k;
    if (tmp5 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "m_flow / k");}
    tmp6 = (_m_flow) / tmp5;
    tmp8 = (((modelica_real)sign(_m_flow))) * ((tmp6 * tmp6));
  }
  else
  {
    tmp8 = ((0.375 + (0.75 - ((0.125) * (_m_flowNormSq))) * (_m_flowNormSq)) * (_dp_turbulent)) * (_m_flowNorm);
  }
  _dp = tmp8;
  _return: OMC_LABEL_UNUSED
  return _dp;
}
modelica_metatype boxptr_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData_t *threadData, modelica_metatype _m_flow, modelica_metatype _k, modelica_metatype _m_flow_turbulent)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real _dp;
  modelica_metatype out_dp;
  tmp1 = mmc_unbox_real(_m_flow);
  tmp2 = mmc_unbox_real(_k);
  tmp3 = mmc_unbox_real(_m_flow_turbulent);
  _dp = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, tmp1, tmp2, tmp3);
  out_dp = mmc_mk_rcon(_dp);
  return out_dp;
}

DLLDirection
modelica_integer omc_Buildings_Fluid_Chillers_BaseClasses_warnIfPerformanceOutOfBounds(threadData_t *threadData, modelica_real _x, modelica_string _msg, modelica_string _curveName)
{
  modelica_integer _retVal;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_string tmp3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  _tailrecursive: OMC_LABEL_UNUSED
  // _retVal has no default value.
  if((_x > 1.1))
  {
    _retVal = ((modelica_integer) 1);
  }
  else
  {
    if((_x < 0.9))
    {
      _retVal = ((modelica_integer) -1);
    }
    else
    {
      _retVal = ((modelica_integer) 0);
    }
  }

  if((_retVal != ((modelica_integer) 0)))
  {
    tmpMeta1 = stringAppend(_OMC_LIT35,_msg);
    tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT36);
    tmp3 = modelica_real_to_modelica_string(_x, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
    tmpMeta4 = stringAppend(tmpMeta2,tmp3);
    tmpMeta5 = stringAppend(tmpMeta4,_OMC_LIT37);
    tmpMeta6 = stringAppend(tmpMeta5,_curveName);
    tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT5);
    omc_Modelica_Utilities_Streams_print(threadData, tmpMeta7, _OMC_LIT29);
  }
  _return: OMC_LABEL_UNUSED
  return _retVal;
}
modelica_metatype boxptr_Buildings_Fluid_Chillers_BaseClasses_warnIfPerformanceOutOfBounds(threadData_t *threadData, modelica_metatype _x, modelica_metatype _msg, modelica_metatype _curveName)
{
  modelica_real tmp1;
  modelica_integer _retVal;
  modelica_metatype out_retVal;
  tmp1 = mmc_unbox_real(_x);
  _retVal = omc_Buildings_Fluid_Chillers_BaseClasses_warnIfPerformanceOutOfBounds(threadData, tmp1, _msg, _curveName);
  out_retVal = mmc_mk_icon(_retVal);
  return out_retVal;
}

Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan omc_Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan(threadData_t *threadData, real_array omc_r_V, real_array omc_r_P)
{
  Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan tmp1;
  tmp1._r_V = omc_r_V;
  tmp1._r_P = omc_r_P;
  return tmp1;
}

modelica_metatype boxptr_Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan(threadData_t *threadData, modelica_metatype _r_V, modelica_metatype _r_P)
{
  return mmc_mk_box3(3, &Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan__desc, _r_V, _r_P);
}

DLLDirection
modelica_real omc_Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_normalizedPower(threadData_t *threadData, Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan _per, modelica_real _r_V, real_array _d)
{
  modelica_real _r_P;
  modelica_integer _n;
  modelica_integer tmp1;
  modelica_integer _i;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  _tailrecursive: OMC_LABEL_UNUSED
  // _r_P has no default value.
  tmp1 = size_of_dimension_base_array(_per._r_V, ((modelica_integer) 1));
  _n = tmp1;
  // _i has no default value.
  if((_n == ((modelica_integer) 1)))
  {
    _r_P = real_array_get(_per._r_V, 1, ((modelica_integer) 1));
  }
  else
  {
    _i = ((modelica_integer) 1);

    tmp2 = ((modelica_integer) 1); tmp3 = 1; tmp4 = _n - ((modelica_integer) 1);
    if(!(((tmp3 > 0) && (tmp2 > tmp4)) || ((tmp3 < 0) && (tmp2 < tmp4))))
    {
      modelica_integer _j;
      for(_j = ((modelica_integer) 1); in_range_integer(_j, tmp2, tmp4); _j += tmp3)
      {
        if((_r_V > real_array_get(_per._r_V, 1, _j)))
        {
          _i = _j;
        }
      }
    }

    _r_P = omc_Buildings_Utilities_Math_Functions_cubicHermiteLinearExtrapolation(threadData, _r_V, real_array_get(_per._r_V, 1, _i), real_array_get(_per._r_V, 1, _i + ((modelica_integer) 1)), real_array_get(_per._r_V, 1, _i), real_array_get(_per._r_V, 1, _i + ((modelica_integer) 1)), real_array_get(_d, 1, _i), real_array_get(_d, 1, _i + ((modelica_integer) 1)));
  }
  _return: OMC_LABEL_UNUSED
  return _r_P;
}
modelica_metatype boxptr_Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_normalizedPower(threadData_t *threadData, modelica_metatype _per, modelica_metatype _r_V, modelica_metatype _d)
{
  Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan tmp1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_real tmp4;
  modelica_real _r_P;
  modelica_metatype out_r_P;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_per), 2)));
  tmp1._r_V = *((base_array_t*)tmpMeta2);
  tmpMeta3 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_per), 3)));
  tmp1._r_P = *((base_array_t*)tmpMeta3);tmp4 = mmc_unbox_real(_r_V);
  _r_P = omc_Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_normalizedPower(threadData, tmp1, tmp4, *((base_array_t*)_d));
  out_r_P = mmc_mk_rcon(_r_P);
  return out_r_P;
}

DLLDirection
modelica_real omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData_t *threadData, modelica_real _TRan, modelica_real _TWetBul, modelica_real _FRWat, modelica_real _FRAir)
{
  modelica_real _TApp;
  modelica_real _TWetBul_degC;
  modelica_real _liqGasRat;
  real_array _c;
  modelica_real tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  // _TApp has no default value.
  // _TWetBul_degC has no default value.
  // _liqGasRat has no default value.
  real_array_alloc_copy(_OMC_LIT44, _c);
  
  _TWetBul_degC = omc_Modelica_SIunits_Conversions_to__degC(threadData, _TWetBul);

  tmp1 = omc_Buildings_Utilities_Math_Functions_smoothMax(threadData, 1e-4, _FRAir, 1e-5);
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "Buildings.Utilities.Math.Functions.smoothMax(1e-4, FRWat, 1e-5) / Buildings.Utilities.Math.Functions.smoothMax(1e-4, FRAir, 1e-5)");}
  _liqGasRat = (omc_Buildings_Utilities_Math_Functions_smoothMax(threadData, 1e-4, _FRWat, 1e-5)) / tmp1;

  _TApp = real_array_get(_c, 1, ((modelica_integer) 1)) + (real_array_get(_c, 1, ((modelica_integer) 2))) * (_TWetBul_degC) + ((real_array_get(_c, 1, ((modelica_integer) 3))) * (_TWetBul_degC)) * (_TWetBul_degC) + (real_array_get(_c, 1, ((modelica_integer) 4))) * (_TRan) + ((real_array_get(_c, 1, ((modelica_integer) 5))) * (_TWetBul_degC)) * (_TRan) + (((real_array_get(_c, 1, ((modelica_integer) 6))) * (_TWetBul_degC)) * (_TWetBul_degC)) * (_TRan) + ((real_array_get(_c, 1, ((modelica_integer) 7))) * (_TRan)) * (_TRan) + (((real_array_get(_c, 1, ((modelica_integer) 8))) * (_TWetBul_degC)) * (_TRan)) * (_TRan) + ((((real_array_get(_c, 1, ((modelica_integer) 9))) * (_TWetBul_degC)) * (_TWetBul_degC)) * (_TRan)) * (_TRan) + (real_array_get(_c, 1, ((modelica_integer) 10))) * (_liqGasRat) + ((real_array_get(_c, 1, ((modelica_integer) 11))) * (_TWetBul_degC)) * (_liqGasRat) + (((real_array_get(_c, 1, ((modelica_integer) 12))) * (_TWetBul_degC)) * (_TWetBul_degC)) * (_liqGasRat) + ((real_array_get(_c, 1, ((modelica_integer) 13))) * (_TRan)) * (_liqGasRat) + (((real_array_get(_c, 1, ((modelica_integer) 14))) * (_TWetBul_degC)) * (_TRan)) * (_liqGasRat) + ((((real_array_get(_c, 1, ((modelica_integer) 15))) * (_TWetBul_degC)) * (_TWetBul_degC)) * (_TRan)) * (_liqGasRat) + (((real_array_get(_c, 1, ((modelica_integer) 16))) * (_TRan)) * (_TRan)) * (_liqGasRat) + ((((real_array_get(_c, 1, ((modelica_integer) 17))) * (_TWetBul_degC)) * (_TRan)) * (_TRan)) * (_liqGasRat) + (((((real_array_get(_c, 1, ((modelica_integer) 18))) * (_TWetBul_degC)) * (_TWetBul_degC)) * (_TRan)) * (_TRan)) * (_liqGasRat) + ((real_array_get(_c, 1, ((modelica_integer) 19))) * (_liqGasRat)) * (_liqGasRat) + (((real_array_get(_c, 1, ((modelica_integer) 20))) * (_TWetBul_degC)) * (_liqGasRat)) * (_liqGasRat) + ((((real_array_get(_c, 1, ((modelica_integer) 21))) * (_TWetBul_degC)) * (_TWetBul_degC)) * (_liqGasRat)) * (_liqGasRat) + (((real_array_get(_c, 1, ((modelica_integer) 22))) * (_TRan)) * (_liqGasRat)) * (_liqGasRat) + ((((real_array_get(_c, 1, ((modelica_integer) 23))) * (_TWetBul_degC)) * (_TRan)) * (_liqGasRat)) * (_liqGasRat) + (((((real_array_get(_c, 1, ((modelica_integer) 24))) * (_TWetBul_degC)) * (_TWetBul_degC)) * (_TRan)) * (_liqGasRat)) * (_liqGasRat) + ((((real_array_get(_c, 1, ((modelica_integer) 25))) * (_TRan)) * (_TRan)) * (_liqGasRat)) * (_liqGasRat) + (((((real_array_get(_c, 1, ((modelica_integer) 26))) * (_TWetBul_degC)) * (_TRan)) * (_TRan)) * (_liqGasRat)) * (_liqGasRat) + ((((((real_array_get(_c, 1, ((modelica_integer) 27))) * (_TWetBul_degC)) * (_TWetBul_degC)) * (_TRan)) * (_TRan)) * (_liqGasRat)) * (_liqGasRat);
  _return: OMC_LABEL_UNUSED
  return _TApp;
}
modelica_metatype boxptr_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData_t *threadData, modelica_metatype _TRan, modelica_metatype _TWetBul, modelica_metatype _FRWat, modelica_metatype _FRAir)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real _TApp;
  modelica_metatype out_TApp;
  tmp1 = mmc_unbox_real(_TRan);
  tmp2 = mmc_unbox_real(_TWetBul);
  tmp3 = mmc_unbox_real(_FRWat);
  tmp4 = mmc_unbox_real(_FRAir);
  _TApp = omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, tmp1, tmp2, tmp3, tmp4);
  out_TApp = mmc_mk_rcon(_TApp);
  return out_TApp;
}

DLLDirection
modelica_real omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData_t *threadData, Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters _per, modelica_real _V_flow, real_array _d, modelica_real _r_N, modelica_real _delta)
{
  modelica_real _eta;
  modelica_integer _n;
  modelica_integer tmp1;
  modelica_real _rat;
  modelica_integer _i;
  modelica_real tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  _tailrecursive: OMC_LABEL_UNUSED
  // _eta has no default value.
  tmp1 = size_of_dimension_base_array(_per._V_flow, ((modelica_integer) 1));
  _n = tmp1;
  // _rat has no default value.
  // _i has no default value.
  if((_n == ((modelica_integer) 1)))
  {
    _eta = real_array_get(_per._eta, 1, ((modelica_integer) 1));
  }
  else
  {
    tmp2 = omc_Buildings_Utilities_Math_Functions_smoothMax(threadData, _r_N, 0.1, _delta);
    if (tmp2 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "V_flow / Buildings.Utilities.Math.Functions.smoothMax(r_N, 0.1, delta)");}
    _rat = (_V_flow) / tmp2;

    _i = ((modelica_integer) 1);

    tmp3 = ((modelica_integer) 1); tmp4 = 1; tmp5 = _n - ((modelica_integer) 1);
    if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
    {
      modelica_integer _j;
      for(_j = ((modelica_integer) 1); in_range_integer(_j, tmp3, tmp5); _j += tmp4)
      {
        if((_rat > real_array_get(_per._V_flow, 1, _j)))
        {
          _i = _j;
        }
      }
    }

    _eta = omc_Buildings_Utilities_Math_Functions_cubicHermiteLinearExtrapolation(threadData, _rat, real_array_get(_per._V_flow, 1, _i), real_array_get(_per._V_flow, 1, _i + ((modelica_integer) 1)), real_array_get(_per._eta, 1, _i), real_array_get(_per._eta, 1, _i + ((modelica_integer) 1)), real_array_get(_d, 1, _i), real_array_get(_d, 1, _i + ((modelica_integer) 1)));
  }
  _return: OMC_LABEL_UNUSED
  return _eta;
}
modelica_metatype boxptr_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData_t *threadData, modelica_metatype _per, modelica_metatype _V_flow, modelica_metatype _d, modelica_metatype _r_N, modelica_metatype _delta)
{
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real _eta;
  modelica_metatype out_eta;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_per), 2)));
  tmp1._V_flow = *((base_array_t*)tmpMeta2);
  tmpMeta3 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_per), 3)));
  tmp1._eta = *((base_array_t*)tmpMeta3);tmp4 = mmc_unbox_real(_V_flow);
  tmp5 = mmc_unbox_real(_r_N);
  tmp6 = mmc_unbox_real(_delta);
  _eta = omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp1, tmp4, *((base_array_t*)_d), tmp5, tmp6);
  out_eta = mmc_mk_rcon(_eta);
  return out_eta;
}

Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters(threadData_t *threadData, real_array omc_V_flow, real_array omc_eta)
{
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp1;
  tmp1._V_flow = omc_V_flow;
  tmp1._eta = omc_eta;
  return tmp1;
}

modelica_metatype boxptr_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters(threadData_t *threadData, modelica_metatype _V_flow, modelica_metatype _eta)
{
  return mmc_mk_box3(3, &Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters__desc, _V_flow, _eta);
}

DLLDirection
modelica_real omc_Buildings_Utilities_Math_Functions_biquadratic(threadData_t *threadData, real_array _a, modelica_real _x1, modelica_real _x2)
{
  modelica_real _y;
  _tailrecursive: OMC_LABEL_UNUSED
  // _y has no default value.
  _y = real_array_get(_a, 1, ((modelica_integer) 1)) + (_x1) * (real_array_get(_a, 1, ((modelica_integer) 2)) + (real_array_get(_a, 1, ((modelica_integer) 3))) * (_x1)) + (_x2) * (real_array_get(_a, 1, ((modelica_integer) 4)) + (real_array_get(_a, 1, ((modelica_integer) 5))) * (_x2)) + ((real_array_get(_a, 1, ((modelica_integer) 6))) * (_x1)) * (_x2);
  _return: OMC_LABEL_UNUSED
  return _y;
}
modelica_metatype boxptr_Buildings_Utilities_Math_Functions_biquadratic(threadData_t *threadData, modelica_metatype _a, modelica_metatype _x1, modelica_metatype _x2)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _y;
  modelica_metatype out_y;
  tmp1 = mmc_unbox_real(_x1);
  tmp2 = mmc_unbox_real(_x2);
  _y = omc_Buildings_Utilities_Math_Functions_biquadratic(threadData, *((base_array_t*)_a), tmp1, tmp2);
  out_y = mmc_mk_rcon(_y);
  return out_y;
}

DLLDirection
modelica_real omc_Buildings_Utilities_Math_Functions_cubicHermiteLinearExtrapolation(threadData_t *threadData, modelica_real _x, modelica_real _x1, modelica_real _x2, modelica_real _y1, modelica_real _y2, modelica_real _y1d, modelica_real _y2d)
{
  modelica_real _y;
  _tailrecursive: OMC_LABEL_UNUSED
  // _y has no default value.
  if(((_x > _x1) && (_x < _x2)))
  {
    _y = omc_Modelica_Fluid_Utilities_cubicHermite(threadData, _x, _x1, _x2, _y1, _y2, _y1d, _y2d);
  }
  else
  {
    if((_x <= _x1))
    {
      _y = _y1 + (_x - _x1) * (_y1d);
    }
    else
    {
      _y = _y2 + (_x - _x2) * (_y2d);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _y;
}
modelica_metatype boxptr_Buildings_Utilities_Math_Functions_cubicHermiteLinearExtrapolation(threadData_t *threadData, modelica_metatype _x, modelica_metatype _x1, modelica_metatype _x2, modelica_metatype _y1, modelica_metatype _y2, modelica_metatype _y1d, modelica_metatype _y2d)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real _y;
  modelica_metatype out_y;
  tmp1 = mmc_unbox_real(_x);
  tmp2 = mmc_unbox_real(_x1);
  tmp3 = mmc_unbox_real(_x2);
  tmp4 = mmc_unbox_real(_y1);
  tmp5 = mmc_unbox_real(_y2);
  tmp6 = mmc_unbox_real(_y1d);
  tmp7 = mmc_unbox_real(_y2d);
  _y = omc_Buildings_Utilities_Math_Functions_cubicHermiteLinearExtrapolation(threadData, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7);
  out_y = mmc_mk_rcon(_y);
  return out_y;
}

DLLDirection
modelica_boolean omc_Buildings_Utilities_Math_Functions_isMonotonic(threadData_t *threadData, real_array _x, modelica_boolean _strict)
{
  modelica_boolean _monotonic;
  modelica_integer _n;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  modelica_integer tmp10;
  modelica_integer tmp11;
  modelica_integer tmp12;
  modelica_integer tmp13;
  _tailrecursive: OMC_LABEL_UNUSED
  // _monotonic has no default value.
  tmp1 = size_of_dimension_base_array(_x, ((modelica_integer) 1));
  _n = tmp1;
  if((_n == ((modelica_integer) 1)))
  {
    _monotonic = 1 /* true */;
  }
  else
  {
    _monotonic = 1 /* true */;

    if(_strict)
    {
      if((real_array_get(_x, 1, ((modelica_integer) 1)) >= real_array_get(_x, 1, _n)))
      {
        tmp2 = ((modelica_integer) 1); tmp3 = 1; tmp4 = _n - ((modelica_integer) 1);
        if(!(((tmp3 > 0) && (tmp2 > tmp4)) || ((tmp3 < 0) && (tmp2 < tmp4))))
        {
          modelica_integer _i;
          for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp2, tmp4); _i += tmp3)
          {
            if((!(real_array_get(_x, 1, _i) > real_array_get(_x, 1, _i + ((modelica_integer) 1)))))
            {
              _monotonic = 0 /* false */;
            }
          }
        }
      }
      else
      {
        tmp5 = ((modelica_integer) 1); tmp6 = 1; tmp7 = _n - ((modelica_integer) 1);
        if(!(((tmp6 > 0) && (tmp5 > tmp7)) || ((tmp6 < 0) && (tmp5 < tmp7))))
        {
          modelica_integer _i;
          for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp5, tmp7); _i += tmp6)
          {
            if((!(real_array_get(_x, 1, _i) < real_array_get(_x, 1, _i + ((modelica_integer) 1)))))
            {
              _monotonic = 0 /* false */;
            }
          }
        }
      }
    }
    else
    {
      if((real_array_get(_x, 1, ((modelica_integer) 1)) >= real_array_get(_x, 1, _n)))
      {
        tmp8 = ((modelica_integer) 1); tmp9 = 1; tmp10 = _n - ((modelica_integer) 1);
        if(!(((tmp9 > 0) && (tmp8 > tmp10)) || ((tmp9 < 0) && (tmp8 < tmp10))))
        {
          modelica_integer _i;
          for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp8, tmp10); _i += tmp9)
          {
            if((!(real_array_get(_x, 1, _i) >= real_array_get(_x, 1, _i + ((modelica_integer) 1)))))
            {
              _monotonic = 0 /* false */;
            }
          }
        }
      }
      else
      {
        tmp11 = ((modelica_integer) 1); tmp12 = 1; tmp13 = _n - ((modelica_integer) 1);
        if(!(((tmp12 > 0) && (tmp11 > tmp13)) || ((tmp12 < 0) && (tmp11 < tmp13))))
        {
          modelica_integer _i;
          for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp11, tmp13); _i += tmp12)
          {
            if((!(real_array_get(_x, 1, _i) <= real_array_get(_x, 1, _i + ((modelica_integer) 1)))))
            {
              _monotonic = 0 /* false */;
            }
          }
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _monotonic;
}
modelica_metatype boxptr_Buildings_Utilities_Math_Functions_isMonotonic(threadData_t *threadData, modelica_metatype _x, modelica_metatype _strict)
{
  modelica_integer tmp1;
  modelica_boolean _monotonic;
  modelica_metatype out_monotonic;
  tmp1 = mmc_unbox_integer(_strict);
  _monotonic = omc_Buildings_Utilities_Math_Functions_isMonotonic(threadData, *((base_array_t*)_x), tmp1);
  out_monotonic = mmc_mk_icon(_monotonic);
  return out_monotonic;
}

DLLDirection
modelica_real omc_Buildings_Utilities_Math_Functions_regNonZeroPower(threadData_t *threadData, modelica_real _x, modelica_real _n, modelica_real _delta)
{
  modelica_real _y;
  modelica_real _a1;
  modelica_real _a3;
  modelica_real _a5;
  modelica_real _delta2;
  modelica_real _x2;
  modelica_real _y_d;
  modelica_real _yP_d;
  modelica_real _yPP_d;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_real tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_real tmp24;
  modelica_real tmp25;
  modelica_real tmp26;
  modelica_real tmp27;
  modelica_real tmp28;
  modelica_real tmp29;
  modelica_real tmp30;
  modelica_real tmp31;
  modelica_real tmp32;
  static int tmp33 = 0;
  _tailrecursive: OMC_LABEL_UNUSED
  // _y has no default value.
  // _a1 has no default value.
  // _a3 has no default value.
  // _a5 has no default value.
  // _delta2 has no default value.
  // _x2 has no default value.
  // _y_d has no default value.
  // _yP_d has no default value.
  // _yPP_d has no default value.
  if((fabs(_x) > _delta))
  {
    tmp1 = fabs(_x);
    tmp2 = _n;
    if(tmp1 < 0.0 && tmp2 != 0.0)
    {
      tmp4 = modf(tmp2, &tmp5);
      
      if(tmp4 > 0.5)
      {
        tmp4 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp4 < -0.5)
      {
        tmp4 += 1.0;
        tmp5 -= 1.0;
      }
      
      if(fabs(tmp4) < 1e-10)
        tmp3 = pow(tmp1, tmp5);
      else
      {
        tmp7 = modf(1.0/tmp2, &tmp6);
        if(tmp7 > 0.5)
        {
          tmp7 -= 1.0;
          tmp6 += 1.0;
        }
        else if(tmp7 < -0.5)
        {
          tmp7 += 1.0;
          tmp6 -= 1.0;
        }
        if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
        {
          tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
        }
      }
    }
    else
    {
      tmp3 = pow(tmp1, tmp2);
    }
    if(isnan(tmp3) || isinf(tmp3))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
    }
    _y = tmp3;
  }
  else
  {
    _delta2 = (_delta) * (_delta);

    _x2 = (_x) * (_x);

    tmp8 = _delta;
    tmp9 = _n;
    if(tmp8 < 0.0 && tmp9 != 0.0)
    {
      tmp11 = modf(tmp9, &tmp12);
      
      if(tmp11 > 0.5)
      {
        tmp11 -= 1.0;
        tmp12 += 1.0;
      }
      else if(tmp11 < -0.5)
      {
        tmp11 += 1.0;
        tmp12 -= 1.0;
      }
      
      if(fabs(tmp11) < 1e-10)
        tmp10 = pow(tmp8, tmp12);
      else
      {
        tmp14 = modf(1.0/tmp9, &tmp13);
        if(tmp14 > 0.5)
        {
          tmp14 -= 1.0;
          tmp13 += 1.0;
        }
        else if(tmp14 < -0.5)
        {
          tmp14 += 1.0;
          tmp13 -= 1.0;
        }
        if(fabs(tmp14) < 1e-10 && ((unsigned long)tmp13 & 1))
        {
          tmp10 = -pow(-tmp8, tmp11)*pow(tmp8, tmp12);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp8, tmp9);
        }
      }
    }
    else
    {
      tmp10 = pow(tmp8, tmp9);
    }
    if(isnan(tmp10) || isinf(tmp10))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp8, tmp9);
    }
    _y_d = tmp10;

    tmp15 = _delta;
    tmp16 = _n - 1.0;
    if(tmp15 < 0.0 && tmp16 != 0.0)
    {
      tmp18 = modf(tmp16, &tmp19);
      
      if(tmp18 > 0.5)
      {
        tmp18 -= 1.0;
        tmp19 += 1.0;
      }
      else if(tmp18 < -0.5)
      {
        tmp18 += 1.0;
        tmp19 -= 1.0;
      }
      
      if(fabs(tmp18) < 1e-10)
        tmp17 = pow(tmp15, tmp19);
      else
      {
        tmp21 = modf(1.0/tmp16, &tmp20);
        if(tmp21 > 0.5)
        {
          tmp21 -= 1.0;
          tmp20 += 1.0;
        }
        else if(tmp21 < -0.5)
        {
          tmp21 += 1.0;
          tmp20 -= 1.0;
        }
        if(fabs(tmp21) < 1e-10 && ((unsigned long)tmp20 & 1))
        {
          tmp17 = -pow(-tmp15, tmp18)*pow(tmp15, tmp19);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp15, tmp16);
        }
      }
    }
    else
    {
      tmp17 = pow(tmp15, tmp16);
    }
    if(isnan(tmp17) || isinf(tmp17))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp15, tmp16);
    }
    _yP_d = (_n) * (tmp17);

    tmp22 = _delta;
    tmp23 = _n - 2.0;
    if(tmp22 < 0.0 && tmp23 != 0.0)
    {
      tmp25 = modf(tmp23, &tmp26);
      
      if(tmp25 > 0.5)
      {
        tmp25 -= 1.0;
        tmp26 += 1.0;
      }
      else if(tmp25 < -0.5)
      {
        tmp25 += 1.0;
        tmp26 -= 1.0;
      }
      
      if(fabs(tmp25) < 1e-10)
        tmp24 = pow(tmp22, tmp26);
      else
      {
        tmp28 = modf(1.0/tmp23, &tmp27);
        if(tmp28 > 0.5)
        {
          tmp28 -= 1.0;
          tmp27 += 1.0;
        }
        else if(tmp28 < -0.5)
        {
          tmp28 += 1.0;
          tmp27 -= 1.0;
        }
        if(fabs(tmp28) < 1e-10 && ((unsigned long)tmp27 & 1))
        {
          tmp24 = -pow(-tmp22, tmp25)*pow(tmp22, tmp26);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp22, tmp23);
        }
      }
    }
    else
    {
      tmp24 = pow(tmp22, tmp23);
    }
    if(isnan(tmp24) || isinf(tmp24))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp22, tmp23);
    }
    _yPP_d = ((_n) * (_n - 1.0)) * (tmp24);

    tmp29 = _delta;
    if (tmp29 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "yP_d / delta");}
    tmp30 = _delta2;
    if (tmp30 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(yP_d / delta - yPP_d) / delta2");}
    tmp31 = 8.0;
    if (tmp31 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(yP_d / delta - yPP_d) / delta2 / 8.0");}
    _a1 = (-((((_yP_d) / tmp29 - _yPP_d) / tmp30) / tmp31));

    tmp32 = 2.0;
    if (tmp32 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(yPP_d - 12.0 * a1 * delta2) / 2.0");}
    _a3 = (_yPP_d - (((12.0) * (_a1)) * (_delta2))) / tmp32;

    _a5 = _y_d - ((_delta2) * (_a3 + (_delta2) * (_a1)));

    _y = _a5 + (_x2) * (_a3 + (_x2) * (_a1));

    {
      if(!(_a5 > 0.0))
      {
        {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Utilities/Math/Functions/regNonZeroPower.mo",32,4,32,57,0};
          omc_assert(threadData, info, MMC_STRINGDATA(_OMC_LIT47));
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _y;
}
modelica_metatype boxptr_Buildings_Utilities_Math_Functions_regNonZeroPower(threadData_t *threadData, modelica_metatype _x, modelica_metatype _n, modelica_metatype _delta)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real _y;
  modelica_metatype out_y;
  tmp1 = mmc_unbox_real(_x);
  tmp2 = mmc_unbox_real(_n);
  tmp3 = mmc_unbox_real(_delta);
  _y = omc_Buildings_Utilities_Math_Functions_regNonZeroPower(threadData, tmp1, tmp2, tmp3);
  out_y = mmc_mk_rcon(_y);
  return out_y;
}

DLLDirection
modelica_real omc_Buildings_Utilities_Math_Functions_regStep(threadData_t *threadData, modelica_real _x, modelica_real _y1, modelica_real _y2, modelica_real _x_small)
{
  modelica_real _y;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  modelica_boolean tmp11;
  modelica_real tmp12;
  _tailrecursive: OMC_LABEL_UNUSED
  // _y has no default value.
  tmp11 = (modelica_boolean)(_x > _x_small);
  if(tmp11)
  {
    tmp12 = _y1;
  }
  else
  {
    tmp9 = (modelica_boolean)(_x < (-_x_small));
    if(tmp9)
    {
      tmp10 = _y2;
    }
    else
    {
      tmp7 = (modelica_boolean)(_x_small > 0.0);
      if(tmp7)
      {
        tmp1 = _x_small;
        if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "x / x_small");}
        tmp2 = _x_small;
        if (tmp2 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "x / x_small");}
        tmp3 = (_x) / tmp2;
        tmp4 = 4.0;
        if (tmp4 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "x / x_small * ((x / x_small) ^ 2.0 - 3.0) * (y2 - y1) / 4.0");}
        tmp5 = 2.0;
        if (tmp5 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(y1 + y2) / 2.0");}
        tmp8 = ((((_x) / tmp1) * ((tmp3 * tmp3) - 3.0)) * (_y2 - _y1)) / tmp4 + (_y1 + _y2) / tmp5;
      }
      else
      {
        tmp6 = 2.0;
        if (tmp6 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(y1 + y2) / 2.0");}
        tmp8 = (_y1 + _y2) / tmp6;
      }
      tmp10 = tmp8;
    }
    tmp12 = tmp10;
  }
  _y = tmp12;
  _return: OMC_LABEL_UNUSED
  return _y;
}
modelica_metatype boxptr_Buildings_Utilities_Math_Functions_regStep(threadData_t *threadData, modelica_metatype _x, modelica_metatype _y1, modelica_metatype _y2, modelica_metatype _x_small)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real _y;
  modelica_metatype out_y;
  tmp1 = mmc_unbox_real(_x);
  tmp2 = mmc_unbox_real(_y1);
  tmp3 = mmc_unbox_real(_y2);
  tmp4 = mmc_unbox_real(_x_small);
  _y = omc_Buildings_Utilities_Math_Functions_regStep(threadData, tmp1, tmp2, tmp3, tmp4);
  out_y = mmc_mk_rcon(_y);
  return out_y;
}

DLLDirection
modelica_real omc_Buildings_Utilities_Math_Functions_smoothLimit(threadData_t *threadData, modelica_real _x, modelica_real _l, modelica_real _u, modelica_real _deltaX)
{
  modelica_real _y;
  modelica_real _cor;
  modelica_real tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  // _y has no default value.
  // _cor has no default value.
  tmp1 = 10.0;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "deltaX / 10.0");}
  _cor = (_deltaX) / tmp1;

  _y = omc_Buildings_Utilities_Math_Functions_smoothMax(threadData, _x, _l + _deltaX, _cor);

  _y = omc_Buildings_Utilities_Math_Functions_smoothMin(threadData, _y, _u - _deltaX, _cor);
  _return: OMC_LABEL_UNUSED
  return _y;
}
modelica_metatype boxptr_Buildings_Utilities_Math_Functions_smoothLimit(threadData_t *threadData, modelica_metatype _x, modelica_metatype _l, modelica_metatype _u, modelica_metatype _deltaX)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real _y;
  modelica_metatype out_y;
  tmp1 = mmc_unbox_real(_x);
  tmp2 = mmc_unbox_real(_l);
  tmp3 = mmc_unbox_real(_u);
  tmp4 = mmc_unbox_real(_deltaX);
  _y = omc_Buildings_Utilities_Math_Functions_smoothLimit(threadData, tmp1, tmp2, tmp3, tmp4);
  out_y = mmc_mk_rcon(_y);
  return out_y;
}

DLLDirection
modelica_real omc_Buildings_Utilities_Math_Functions_smoothMax(threadData_t *threadData, modelica_real _x1, modelica_real _x2, modelica_real _deltaX)
{
  modelica_real _y;
  _tailrecursive: OMC_LABEL_UNUSED
  // _y has no default value.
  _y = omc_Buildings_Utilities_Math_Functions_regStep(threadData, _x1 - _x2, _x1, _x2, _deltaX);
  _return: OMC_LABEL_UNUSED
  return _y;
}
modelica_metatype boxptr_Buildings_Utilities_Math_Functions_smoothMax(threadData_t *threadData, modelica_metatype _x1, modelica_metatype _x2, modelica_metatype _deltaX)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real _y;
  modelica_metatype out_y;
  tmp1 = mmc_unbox_real(_x1);
  tmp2 = mmc_unbox_real(_x2);
  tmp3 = mmc_unbox_real(_deltaX);
  _y = omc_Buildings_Utilities_Math_Functions_smoothMax(threadData, tmp1, tmp2, tmp3);
  out_y = mmc_mk_rcon(_y);
  return out_y;
}

DLLDirection
modelica_real omc_Buildings_Utilities_Math_Functions_smoothMin(threadData_t *threadData, modelica_real _x1, modelica_real _x2, modelica_real _deltaX)
{
  modelica_real _y;
  _tailrecursive: OMC_LABEL_UNUSED
  // _y has no default value.
  _y = omc_Buildings_Utilities_Math_Functions_regStep(threadData, _x2 - _x1, _x1, _x2, _deltaX);
  _return: OMC_LABEL_UNUSED
  return _y;
}
modelica_metatype boxptr_Buildings_Utilities_Math_Functions_smoothMin(threadData_t *threadData, modelica_metatype _x1, modelica_metatype _x2, modelica_metatype _deltaX)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real _y;
  modelica_metatype out_y;
  tmp1 = mmc_unbox_real(_x1);
  tmp2 = mmc_unbox_real(_x2);
  tmp3 = mmc_unbox_real(_deltaX);
  _y = omc_Buildings_Utilities_Math_Functions_smoothMin(threadData, tmp1, tmp2, tmp3);
  out_y = mmc_mk_rcon(_y);
  return out_y;
}

DLLDirection
modelica_real omc_Buildings_Utilities_Math_Functions_spliceFunction(threadData_t *threadData, modelica_real _pos, modelica_real _neg, modelica_real _x, modelica_real _deltax)
{
  modelica_real _out;
  modelica_real _scaledX1;
  modelica_real _y;
  modelica_real _asin1;
  modelica_real tmp1;
  modelica_real tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  // _scaledX1 has no default value.
  // _y has no default value.
  _asin1 = 1.5707963267948966;
  tmp1 = _deltax;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "x / deltax");}
  _scaledX1 = (_x) / tmp1;

  if((_scaledX1 <= -0.999999999))
  {
    _out = _neg;
  }
  else
  {
    if((_scaledX1 >= 0.999999999))
    {
      _out = _pos;
    }
    else
    {
      tmp2 = 2.0;
      if (tmp2 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(tanh(tan(scaledX1 * asin1)) + 1.0) / 2.0");}
      _y = (tanh(tan((_scaledX1) * (_asin1))) + 1.0) / tmp2;

      _out = (_pos) * (_y) + (1.0 - _y) * (_neg);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _out;
}
modelica_metatype boxptr_Buildings_Utilities_Math_Functions_spliceFunction(threadData_t *threadData, modelica_metatype _pos, modelica_metatype _neg, modelica_metatype _x, modelica_metatype _deltax)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real _out;
  modelica_metatype out_out;
  tmp1 = mmc_unbox_real(_pos);
  tmp2 = mmc_unbox_real(_neg);
  tmp3 = mmc_unbox_real(_x);
  tmp4 = mmc_unbox_real(_deltax);
  _out = omc_Buildings_Utilities_Math_Functions_spliceFunction(threadData, tmp1, tmp2, tmp3, tmp4);
  out_out = mmc_mk_rcon(_out);
  return out_out;
}

DLLDirection
real_array omc_Buildings_Utilities_Math_Functions_splineDerivatives(threadData_t *threadData, real_array _x, real_array _y, modelica_boolean _ensureMonotonicity)
{
  real_array _d;
  modelica_integer tmp1;
  modelica_integer _n;
  modelica_integer tmp2;
  modelica_real _alpha;
  modelica_real _beta;
  modelica_real _tau;
  real_array _delta;
  modelica_string tmp3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_string tmp6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_string tmp9;
  modelica_metatype tmpMeta10;
  static int tmp11 = 0;
  static int tmp12 = 0;
  static int tmp13 = 0;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_integer tmp16;
  modelica_integer tmp17;
  modelica_integer tmp18;
  modelica_real tmp19;
  modelica_integer tmp20;
  modelica_integer tmp21;
  modelica_integer tmp22;
  modelica_real tmp23;
  modelica_real tmp24;
  modelica_real tmp25;
  modelica_real tmp26;
  modelica_real tmp27;
  modelica_real tmp28;
  modelica_real tmp29;
  modelica_real tmp30;
  modelica_integer tmp31;
  modelica_integer tmp32;
  modelica_integer tmp33;
  _tailrecursive: OMC_LABEL_UNUSED
  tmp1 = size_of_dimension_base_array(_x, ((modelica_integer) 1));
  alloc_real_array(&(_d), 1, (_index_t)tmp1); // _d has no default value.
  tmp2 = size_of_dimension_base_array(_x, ((modelica_integer) 1));
  _n = tmp2;
  // _alpha has no default value.
  // _beta has no default value.
  // _tau has no default value.
  alloc_real_array(&(_delta), 1, (_index_t)_n - ((modelica_integer) 1)); // _delta has no default value.
  if((_n > ((modelica_integer) 1)))
  {
    {
      if(!(real_array_get(_x, 1, ((modelica_integer) 1)) < real_array_get(_x, 1, _n)))
      {
        tmp3 = modelica_real_to_modelica_string(real_array_get(_x, 1, ((modelica_integer) 1)), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
        tmpMeta4 = stringAppend(_OMC_LIT48,tmp3);
        tmpMeta5 = stringAppend(tmpMeta4,_OMC_LIT49);
        tmp6 = modelica_integer_to_modelica_string(_n, ((modelica_integer) 0), 1 /* true */);
        tmpMeta7 = stringAppend(tmpMeta5,tmp6);
        tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT50);
        tmp9 = modelica_real_to_modelica_string(real_array_get(_x, 1, _n), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
        tmpMeta10 = stringAppend(tmpMeta8,tmp9);
        {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Utilities/Math/Functions/splineDerivatives.mo",19,5,21,52,0};
          omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta10));
        }
      }
    }

    {
      if(!omc_Buildings_Utilities_Math_Functions_isMonotonic(threadData, _x, 1 /* true */))
      {
        {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Utilities/Math/Functions/splineDerivatives.mo",23,5,24,71,0};
          omc_assert(threadData, info, MMC_STRINGDATA(_OMC_LIT51));
        }
      }
    }

    if(_ensureMonotonicity)
    {
      {
        if(!omc_Buildings_Utilities_Math_Functions_isMonotonic(threadData, _y, 0 /* false */))
        {
          {
            FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Utilities/Math/Functions/splineDerivatives.mo",26,7,27,92,0};
            omc_assert(threadData, info, MMC_STRINGDATA(_OMC_LIT52));
          }
        }
      }
    }
  }

  if((_n == ((modelica_integer) 1)))
  {
    real_array_get(_d, 1, ((modelica_integer) 1)) = 0.0;
  }
  else
  {
    if((_n == ((modelica_integer) 2)))
    {
      tmp14 = real_array_get(_x, 1, ((modelica_integer) 2)) - real_array_get(_x, 1, ((modelica_integer) 1));
      if (tmp14 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(y[2] - y[1]) / (x[2] - x[1])");}
      real_array_get(_d, 1, ((modelica_integer) 1)) = (real_array_get(_y, 1, ((modelica_integer) 2)) - real_array_get(_y, 1, ((modelica_integer) 1))) / tmp14;

      real_array_get(_d, 1, ((modelica_integer) 2)) = real_array_get(_d, 1, ((modelica_integer) 1));
    }
    else
    {
      tmp16 = ((modelica_integer) 1); tmp17 = 1; tmp18 = _n - ((modelica_integer) 1);
      if(!(((tmp17 > 0) && (tmp16 > tmp18)) || ((tmp17 < 0) && (tmp16 < tmp18))))
      {
        modelica_integer _i;
        for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp16, tmp18); _i += tmp17)
        {
          tmp15 = real_array_get(_x, 1, _i + ((modelica_integer) 1)) - real_array_get(_x, 1, _i);
          if (tmp15 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(y[i + 1] - y[i]) / (x[i + 1] - x[i])");}
          real_array_get(_delta, 1, _i) = (real_array_get(_y, 1, _i + ((modelica_integer) 1)) - real_array_get(_y, 1, _i)) / tmp15;
        }
      }

      real_array_get(_d, 1, ((modelica_integer) 1)) = real_array_get(_delta, 1, ((modelica_integer) 1));

      real_array_get(_d, 1, _n) = real_array_get(_delta, 1, _n - ((modelica_integer) 1));

      tmp20 = ((modelica_integer) 2); tmp21 = 1; tmp22 = _n - ((modelica_integer) 1);
      if(!(((tmp21 > 0) && (tmp20 > tmp22)) || ((tmp21 < 0) && (tmp20 < tmp22))))
      {
        modelica_integer _i;
        for(_i = ((modelica_integer) 2); in_range_integer(_i, tmp20, tmp22); _i += tmp21)
        {
          tmp19 = 2.0;
          if (tmp19 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(delta[i - 1] + delta[i]) / 2.0");}
          real_array_get(_d, 1, _i) = (real_array_get(_delta, 1, _i - ((modelica_integer) 1)) + real_array_get(_delta, 1, _i)) / tmp19;
        }
      }
    }
  }

  if(((_n > ((modelica_integer) 2)) && _ensureMonotonicity))
  {
    tmp31 = ((modelica_integer) 1); tmp32 = 1; tmp33 = _n - ((modelica_integer) 1);
    if(!(((tmp32 > 0) && (tmp31 > tmp33)) || ((tmp32 < 0) && (tmp31 < tmp33))))
    {
      modelica_integer _i;
      for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp31, tmp33); _i += tmp32)
      {
        if((fabs(real_array_get(_delta, 1, _i)) < 2.2250738585072014e-308))
        {
          real_array_get(_d, 1, _i) = 0.0;

          real_array_get(_d, 1, _i + ((modelica_integer) 1)) = 0.0;
        }
        else
        {
          tmp23 = real_array_get(_delta, 1, _i);
          if (tmp23 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "d[i] / delta[i]");}
          _alpha = (real_array_get(_d, 1, _i)) / tmp23;

          tmp24 = real_array_get(_delta, 1, _i);
          if (tmp24 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "d[i + 1] / delta[i]");}
          _beta = (real_array_get(_d, 1, _i + ((modelica_integer) 1))) / tmp24;

          tmp25 = _alpha;
          tmp26 = _beta;
          if(((tmp25 * tmp25) + (tmp26 * tmp26) > 9.0))
          {
            tmp27 = _alpha;
            tmp28 = _beta;
            tmp29 = (tmp27 * tmp27) + (tmp28 * tmp28);
            if(tmp29 < 0.0) {
              throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp29, 0.5);
            }tmp30 = sqrt(tmp29);
            if (tmp30 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "3.0 / (alpha ^ 2.0 + beta ^ 2.0) ^ 0.5");}
            _tau = (3.0) / tmp30;

            real_array_get(_d, 1, _i) = ((real_array_get(_delta, 1, _i)) * (_alpha)) * (_tau);

            real_array_get(_d, 1, _i + ((modelica_integer) 1)) = ((real_array_get(_delta, 1, _i)) * (_beta)) * (_tau);
          }
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_Buildings_Utilities_Math_Functions_splineDerivatives(threadData_t *threadData, modelica_metatype _x, modelica_metatype _y, modelica_metatype _ensureMonotonicity)
{
  modelica_integer tmp1;
  real_array _d;
  modelica_integer tmp2;
  modelica_metatype out_d;
  tmp1 = mmc_unbox_integer(_ensureMonotonicity);
  _d = omc_Buildings_Utilities_Math_Functions_splineDerivatives(threadData, *((base_array_t*)_x), *((base_array_t*)_y), tmp1);
  out_d = mmc_mk_modelica_array(_d);
  return out_d;
}

DLLDirection
modelica_real omc_Buildings_Utilities_Math_Functions_BaseClasses_smoothTransition(threadData_t *threadData, modelica_real _x, modelica_real _delta, modelica_real _deltaInv, modelica_real _a, modelica_real _b, modelica_real _c, modelica_real _d, modelica_real _e, modelica_real _f)
{
  modelica_real _y;
  modelica_real _aX;
  _tailrecursive: OMC_LABEL_UNUSED
  // _y has no default value.
  // _aX has no default value.
  _aX = fabs(_x);

  _y = (((_x >= 0.0)?1.0:-1.0)) * (_a + (_aX) * (_b + (_aX) * (_c + (_aX) * (_d + (_aX) * (_e + (_aX) * (_f))))));
  _return: OMC_LABEL_UNUSED
  return _y;
}
modelica_metatype boxptr_Buildings_Utilities_Math_Functions_BaseClasses_smoothTransition(threadData_t *threadData, modelica_metatype _x, modelica_metatype _delta, modelica_metatype _deltaInv, modelica_metatype _a, modelica_metatype _b, modelica_metatype _c, modelica_metatype _d, modelica_metatype _e, modelica_metatype _f)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real _y;
  modelica_metatype out_y;
  tmp1 = mmc_unbox_real(_x);
  tmp2 = mmc_unbox_real(_delta);
  tmp3 = mmc_unbox_real(_deltaInv);
  tmp4 = mmc_unbox_real(_a);
  tmp5 = mmc_unbox_real(_b);
  tmp6 = mmc_unbox_real(_c);
  tmp7 = mmc_unbox_real(_d);
  tmp8 = mmc_unbox_real(_e);
  tmp9 = mmc_unbox_real(_f);
  _y = omc_Buildings_Utilities_Math_Functions_BaseClasses_smoothTransition(threadData, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, tmp8, tmp9);
  out_y = mmc_mk_rcon(_y);
  return out_y;
}

DLLDirection
modelica_real omc_Buildings_Utilities_Psychrometrics_Functions_sublimationPressureIce(threadData_t *threadData, modelica_real _TSat)
{
  modelica_real _pSat;
  modelica_real _TTriple;
  modelica_real _pTriple;
  real_array _a;
  real_array _n;
  modelica_real _r1;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  _tailrecursive: OMC_LABEL_UNUSED
  // _pSat has no default value.
  _TTriple = 273.16;
  _pTriple = 611.657;
  alloc_real_array(&(_a), 1, (_index_t)2);
  real_array_copy_data(_OMC_LIT53, _a);
  
  alloc_real_array(&(_n), 1, (_index_t)2);
  real_array_copy_data(_OMC_LIT54, _n);
  
  tmp1 = _TTriple;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "TSat / TTriple");}
  _r1 = (_TSat) / tmp1;
  tmp2 = _r1;
  tmp3 = real_array_get(_n, 1, ((modelica_integer) 1));
  if(tmp2 < 0.0 && tmp3 != 0.0)
  {
    tmp5 = modf(tmp3, &tmp6);
    
    if(tmp5 > 0.5)
    {
      tmp5 -= 1.0;
      tmp6 += 1.0;
    }
    else if(tmp5 < -0.5)
    {
      tmp5 += 1.0;
      tmp6 -= 1.0;
    }
    
    if(fabs(tmp5) < 1e-10)
      tmp4 = pow(tmp2, tmp6);
    else
    {
      tmp8 = modf(1.0/tmp3, &tmp7);
      if(tmp8 > 0.5)
      {
        tmp8 -= 1.0;
        tmp7 += 1.0;
      }
      else if(tmp8 < -0.5)
      {
        tmp8 += 1.0;
        tmp7 -= 1.0;
      }
      if(fabs(tmp8) < 1e-10 && ((unsigned long)tmp7 & 1))
      {
        tmp4 = -pow(-tmp2, tmp5)*pow(tmp2, tmp6);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2, tmp3);
      }
    }
  }
  else
  {
    tmp4 = pow(tmp2, tmp3);
  }
  if(isnan(tmp4) || isinf(tmp4))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2, tmp3);
  }tmp9 = _r1;
  tmp10 = real_array_get(_n, 1, ((modelica_integer) 2));
  if(tmp9 < 0.0 && tmp10 != 0.0)
  {
    tmp12 = modf(tmp10, &tmp13);
    
    if(tmp12 > 0.5)
    {
      tmp12 -= 1.0;
      tmp13 += 1.0;
    }
    else if(tmp12 < -0.5)
    {
      tmp12 += 1.0;
      tmp13 -= 1.0;
    }
    
    if(fabs(tmp12) < 1e-10)
      tmp11 = pow(tmp9, tmp13);
    else
    {
      tmp15 = modf(1.0/tmp10, &tmp14);
      if(tmp15 > 0.5)
      {
        tmp15 -= 1.0;
        tmp14 += 1.0;
      }
      else if(tmp15 < -0.5)
      {
        tmp15 += 1.0;
        tmp14 -= 1.0;
      }
      if(fabs(tmp15) < 1e-10 && ((unsigned long)tmp14 & 1))
      {
        tmp11 = -pow(-tmp9, tmp12)*pow(tmp9, tmp13);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp9, tmp10);
      }
    }
  }
  else
  {
    tmp11 = pow(tmp9, tmp10);
  }
  if(isnan(tmp11) || isinf(tmp11))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp9, tmp10);
  }
  _pSat = (exp(real_array_get(_a, 1, ((modelica_integer) 1)) - ((real_array_get(_a, 1, ((modelica_integer) 1))) * (tmp4)) + real_array_get(_a, 1, ((modelica_integer) 2)) - ((real_array_get(_a, 1, ((modelica_integer) 2))) * (tmp11)))) * (_pTriple);
  _return: OMC_LABEL_UNUSED
  return _pSat;
}
modelica_metatype boxptr_Buildings_Utilities_Psychrometrics_Functions_sublimationPressureIce(threadData_t *threadData, modelica_metatype _TSat)
{
  modelica_real tmp1;
  modelica_real _pSat;
  modelica_metatype out_pSat;
  tmp1 = mmc_unbox_real(_TSat);
  _pSat = omc_Buildings_Utilities_Psychrometrics_Functions_sublimationPressureIce(threadData, tmp1);
  out_pSat = mmc_mk_rcon(_pSat);
  return out_pSat;
}

modelica_real omc_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmax(threadData_t *threadData, modelica_complex _tableID)
{
  void * _tableID_ext;
  double _uMax_ext;
  modelica_real _uMax;
  // _uMax has no default value.
  _tableID_ext = (void *) _tableID;
  _uMax_ext = ModelicaStandardTables_CombiTable1D_maximumAbscissa(_tableID_ext);
  _uMax = (modelica_real)_uMax_ext;
  return _uMax;
}
modelica_metatype boxptr_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmax(threadData_t *threadData, modelica_metatype _tableID)
{
  modelica_real _uMax;
  modelica_metatype out_uMax;
  _uMax = omc_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmax(threadData, _tableID);
  out_uMax = mmc_mk_rcon(_uMax);
  return out_uMax;
}

modelica_real omc_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmin(threadData_t *threadData, modelica_complex _tableID)
{
  void * _tableID_ext;
  double _uMin_ext;
  modelica_real _uMin;
  // _uMin has no default value.
  _tableID_ext = (void *) _tableID;
  _uMin_ext = ModelicaStandardTables_CombiTable1D_minimumAbscissa(_tableID_ext);
  _uMin = (modelica_real)_uMin_ext;
  return _uMin;
}
modelica_metatype boxptr_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmin(threadData_t *threadData, modelica_metatype _tableID)
{
  modelica_real _uMin;
  modelica_metatype out_uMin;
  _uMin = omc_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmin(threadData, _tableID);
  out_uMin = mmc_mk_rcon(_uMin);
  return out_uMin;
}

modelica_real omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData_t *threadData, modelica_complex _tableID, modelica_integer _icol, modelica_real _u)
{
  void * _tableID_ext;
  int _icol_ext;
  double _u_ext;
  double _y_ext;
  modelica_real _y;
  // _y has no default value.
  _tableID_ext = (void *) _tableID;
  _icol_ext = (int) _icol;
  _u_ext = (double) _u;
  _y_ext = ModelicaStandardTables_CombiTable1D_getValue(_tableID_ext, _icol_ext, _u_ext);
  _y = (modelica_real)_y_ext;
  return _y;
}
modelica_metatype boxptr_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData_t *threadData, modelica_metatype _tableID, modelica_metatype _icol, modelica_metatype _u)
{
  modelica_integer tmp1;
  modelica_real tmp2;
  modelica_real _y;
  modelica_metatype out_y;
  tmp1 = mmc_unbox_integer(_icol);
  tmp2 = mmc_unbox_real(_u);
  _y = omc_Modelica_Blocks_Tables_Internal_getTable1DValue(threadData, _tableID, tmp1, tmp2);
  out_y = mmc_mk_rcon(_y);
  return out_y;
}

modelica_complex omc_Modelica_Blocks_Types_ExternalCombiTable1D_constructor(threadData_t *threadData, modelica_string _tableName, modelica_string _fileName, real_array _table, integer_array _columns, modelica_integer _smoothness, modelica_integer _extrapolation, modelica_boolean _verboseRead)
{
  integer_array _columns_packed;
  int _smoothness_ext;
  int _extrapolation_ext;
  int _verboseRead_ext;
  const double* _table_c89;
  const int* _columns_c89;
  void * _externalCombiTable1D_ext;
  modelica_complex _externalCombiTable1D;
  // _externalCombiTable1D has no default value.
  pack_alloc_integer_array(&_columns, &_columns_packed);

  _smoothness_ext = (int) _smoothness;
  _extrapolation_ext = (int) _extrapolation;
  _verboseRead_ext = (int) _verboseRead;
  _table_c89 = data_of_real_c89_array(_table);
  _columns_c89 = data_of_integer_c89_array(_columns_packed);
  _externalCombiTable1D_ext = ModelicaStandardTables_CombiTable1D_init2(MMC_STRINGDATA(_fileName), MMC_STRINGDATA(_tableName), _table_c89, size_of_dimension_base_array(_table, ((modelica_integer) 1)), size_of_dimension_base_array(_table, ((modelica_integer) 2)), _columns_c89, size_of_dimension_base_array(_columns, ((modelica_integer) 1)), _smoothness_ext, _extrapolation_ext, _verboseRead_ext);
  _externalCombiTable1D = (modelica_complex)_externalCombiTable1D_ext;
  return _externalCombiTable1D;
}
modelica_metatype boxptr_Modelica_Blocks_Types_ExternalCombiTable1D_constructor(threadData_t *threadData, modelica_metatype _tableName, modelica_metatype _fileName, modelica_metatype _table, modelica_metatype _columns, modelica_metatype _smoothness, modelica_metatype _extrapolation, modelica_metatype _verboseRead)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_complex _externalCombiTable1D;
  tmp1 = mmc_unbox_integer(_smoothness);
  tmp2 = mmc_unbox_integer(_extrapolation);
  tmp3 = mmc_unbox_integer(_verboseRead);
  _externalCombiTable1D = omc_Modelica_Blocks_Types_ExternalCombiTable1D_constructor(threadData, _tableName, _fileName, *((base_array_t*)_table), *((base_array_t*)_columns), tmp1, tmp2, tmp3);
  /* skip box _externalCombiTable1D; ExternalObject Modelica.Blocks.Types.ExternalCombiTable1D */
  return _externalCombiTable1D;
}

void omc_Modelica_Blocks_Types_ExternalCombiTable1D_destructor(threadData_t *threadData, modelica_complex _externalCombiTable1D)
{
  void * _externalCombiTable1D_ext;
  _externalCombiTable1D_ext = (void *) _externalCombiTable1D;
  ModelicaStandardTables_CombiTable1D_close(_externalCombiTable1D_ext);
  return;
}
void boxptr_Modelica_Blocks_Types_ExternalCombiTable1D_destructor(threadData_t *threadData, modelica_metatype _externalCombiTable1D)
{
  omc_Modelica_Blocks_Types_ExternalCombiTable1D_destructor(threadData, _externalCombiTable1D);
  return;
}

DLLDirection
void omc_Modelica_Fluid_Utilities_checkBoundary(threadData_t *threadData, modelica_string _mediumName, string_array _substanceNames, modelica_boolean _singleState, modelica_boolean _define_p, real_array _X_boundary, modelica_string _modelName)
{
  modelica_integer _nX;
  modelica_integer tmp1;
  modelica_string _X_str = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  static int tmp6 = 0;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_string tmp11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_string tmp14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  static int tmp17 = 0;
  modelica_integer tmp18;
  modelica_integer tmp19;
  modelica_integer tmp20;
  modelica_metatype tmpMeta21;
  modelica_string tmp22;
  modelica_metatype tmpMeta23;
  modelica_metatype tmpMeta24;
  modelica_string tmp25;
  modelica_metatype tmpMeta26;
  modelica_metatype tmpMeta27;
  modelica_metatype tmpMeta28;
  modelica_metatype tmpMeta29;
  modelica_integer tmp30;
  modelica_integer tmp31;
  modelica_integer tmp32;
  modelica_metatype tmpMeta33;
  modelica_metatype tmpMeta34;
  modelica_metatype tmpMeta35;
  modelica_metatype tmpMeta36;
  modelica_metatype tmpMeta37;
  modelica_string tmp38;
  modelica_metatype tmpMeta39;
  modelica_metatype tmpMeta40;
  modelica_metatype tmpMeta41;
  _tailrecursive: OMC_LABEL_UNUSED
  tmp1 = size_of_dimension_base_array(_X_boundary, ((modelica_integer) 1));
  _nX = tmp1;
  // _X_str has no default value.
  {
    if(!((!_singleState) || (_singleState && _define_p)))
    {
      tmpMeta2 = stringAppend(_OMC_LIT56,_modelName);
      tmpMeta3 = stringAppend(tmpMeta2,_OMC_LIT57);
      tmpMeta4 = stringAppend(tmpMeta3,_mediumName);
      tmpMeta5 = stringAppend(tmpMeta4,_OMC_LIT58);
      {
        FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Utilities.mo",18,5,23,3,0};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta5));
      }
    }
  }

  tmp18 = ((modelica_integer) 1); tmp19 = 1; tmp20 = _nX;
  if(!(((tmp19 > 0) && (tmp18 > tmp20)) || ((tmp19 < 0) && (tmp18 < tmp20))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp18, tmp20); _i += tmp19)
    {
      {
        if(!(real_array_get(_X_boundary, 1, _i) >= 0.0))
        {
          tmpMeta7 = stringAppend(_OMC_LIT59,_mediumName);
          tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT60);
          tmpMeta9 = stringAppend(tmpMeta8,_modelName);
          tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT61);
          tmp11 = modelica_integer_to_modelica_string(_i, ((modelica_integer) 0), 1 /* true */);
          tmpMeta12 = stringAppend(tmpMeta10,tmp11);
          tmpMeta13 = stringAppend(tmpMeta12,_OMC_LIT62);
          tmp14 = modelica_real_to_modelica_string(real_array_get(_X_boundary, 1, _i), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
          tmpMeta15 = stringAppend(tmpMeta13,tmp14);
          tmpMeta16 = stringAppend(tmpMeta15,_OMC_LIT63);
          {
            FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Fluid/Utilities.mo",26,7,33,3,0};
            omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta16));
          }
        }
      }
    }
  }

  if(((_nX > ((modelica_integer) 0)) && (fabs(sum_real_array(_X_boundary) - 1.0) > 1e-10)))
  {
    _X_str = _OMC_LIT29;

    tmp30 = ((modelica_integer) 1); tmp31 = 1; tmp32 = _nX;
    if(!(((tmp31 > 0) && (tmp30 > tmp32)) || ((tmp31 < 0) && (tmp30 < tmp32))))
    {
      modelica_integer _i;
      for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp30, tmp32); _i += tmp31)
      {
        tmpMeta21 = stringAppend(_X_str,_OMC_LIT64);
        tmp22 = modelica_integer_to_modelica_string(_i, ((modelica_integer) 0), 1 /* true */);
        tmpMeta23 = stringAppend(tmpMeta21,tmp22);
        tmpMeta24 = stringAppend(tmpMeta23,_OMC_LIT50);
        tmp25 = modelica_real_to_modelica_string(real_array_get(_X_boundary, 1, _i), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
        tmpMeta26 = stringAppend(tmpMeta24,tmp25);
        tmpMeta27 = stringAppend(tmpMeta26,_OMC_LIT65);
        tmpMeta28 = stringAppend(tmpMeta27,string_array_get(_substanceNames, 1, _i));
        tmpMeta29 = stringAppend(tmpMeta28,_OMC_LIT66);
        _X_str = tmpMeta29;
      }
    }

    tmpMeta33 = stringAppend(_OMC_LIT67,_mediumName);
    tmpMeta34 = stringAppend(tmpMeta33,_OMC_LIT60);
    tmpMeta35 = stringAppend(tmpMeta34,_modelName);
    tmpMeta36 = stringAppend(tmpMeta35,_OMC_LIT66);
    tmpMeta37 = stringAppend(tmpMeta36,_OMC_LIT68);
    tmp38 = modelica_real_to_modelica_string(sum_real_array(_X_boundary), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
    tmpMeta39 = stringAppend(tmpMeta37,tmp38);
    tmpMeta40 = stringAppend(tmpMeta39,_OMC_LIT69);
    tmpMeta41 = stringAppend(tmpMeta40,_X_str);
    omc_Modelica_Utilities_Streams_error(threadData, tmpMeta41);
  }
  _return: OMC_LABEL_UNUSED
  return;
}
void boxptr_Modelica_Fluid_Utilities_checkBoundary(threadData_t *threadData, modelica_metatype _mediumName, modelica_metatype _substanceNames, modelica_metatype _singleState, modelica_metatype _define_p, modelica_metatype _X_boundary, modelica_metatype _modelName)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  tmp1 = mmc_unbox_integer(_singleState);
  tmp2 = mmc_unbox_integer(_define_p);
  omc_Modelica_Fluid_Utilities_checkBoundary(threadData, _mediumName, *((base_array_t*)_substanceNames), tmp1, tmp2, *((base_array_t*)_X_boundary), _modelName);
  return;
}

DLLDirection
modelica_real omc_Modelica_Fluid_Utilities_cubicHermite(threadData_t *threadData, modelica_real _x, modelica_real _x1, modelica_real _x2, modelica_real _y1, modelica_real _y2, modelica_real _y1d, modelica_real _y2d)
{
  modelica_real _y;
  modelica_real _h;
  modelica_real _t;
  modelica_real _h00;
  modelica_real _h10;
  modelica_real _h01;
  modelica_real _h11;
  modelica_real _aux3;
  modelica_real _aux2;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  _tailrecursive: OMC_LABEL_UNUSED
  // _y has no default value.
  // _h has no default value.
  // _t has no default value.
  // _h00 has no default value.
  // _h10 has no default value.
  // _h01 has no default value.
  // _h11 has no default value.
  // _aux3 has no default value.
  // _aux2 has no default value.
  _h = _x2 - _x1;

  if((fabs(_h) > 0.0))
  {
    tmp1 = _h;
    if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(x - x1) / h");}
    _t = (_x - _x1) / tmp1;

    tmp2 = _t;
    _aux3 = (tmp2 * tmp2 * tmp2);

    tmp3 = _t;
    _aux2 = (tmp3 * tmp3);

    _h00 = (2.0) * (_aux3) - ((3.0) * (_aux2)) + 1.0;

    _h10 = _aux3 - ((2.0) * (_aux2)) + _t;

    _h01 = (3.0) * (_aux2) - ((2.0) * (_aux3));

    _h11 = _aux3 - _aux2;

    _y = (_y1) * (_h00) + ((_h) * (_y1d)) * (_h10) + (_y2) * (_h01) + ((_h) * (_y2d)) * (_h11);
  }
  else
  {
    tmp4 = 2.0;
    if (tmp4 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(y1 + y2) / 2.0");}
    _y = (_y1 + _y2) / tmp4;
  }
  _return: OMC_LABEL_UNUSED
  return _y;
}
modelica_metatype boxptr_Modelica_Fluid_Utilities_cubicHermite(threadData_t *threadData, modelica_metatype _x, modelica_metatype _x1, modelica_metatype _x2, modelica_metatype _y1, modelica_metatype _y2, modelica_metatype _y1d, modelica_metatype _y2d)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real _y;
  modelica_metatype out_y;
  tmp1 = mmc_unbox_real(_x);
  tmp2 = mmc_unbox_real(_x1);
  tmp3 = mmc_unbox_real(_x2);
  tmp4 = mmc_unbox_real(_y1);
  tmp5 = mmc_unbox_real(_y2);
  tmp6 = mmc_unbox_real(_y1d);
  tmp7 = mmc_unbox_real(_y2d);
  _y = omc_Modelica_Fluid_Utilities_cubicHermite(threadData, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7);
  out_y = mmc_mk_rcon(_y);
  return out_y;
}

DLLDirection
modelica_real omc_Modelica_Fluid_Utilities_regStep(threadData_t *threadData, modelica_real _x, modelica_real _y1, modelica_real _y2, modelica_real _x_small)
{
  modelica_real _y;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  modelica_boolean tmp11;
  modelica_real tmp12;
  _tailrecursive: OMC_LABEL_UNUSED
  // _y has no default value.
  tmp11 = (modelica_boolean)(_x > _x_small);
  if(tmp11)
  {
    tmp12 = _y1;
  }
  else
  {
    tmp9 = (modelica_boolean)(_x < (-_x_small));
    if(tmp9)
    {
      tmp10 = _y2;
    }
    else
    {
      tmp7 = (modelica_boolean)(_x_small > 0.0);
      if(tmp7)
      {
        tmp1 = _x_small;
        if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "x / x_small");}
        tmp2 = _x_small;
        if (tmp2 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "x / x_small");}
        tmp3 = (_x) / tmp2;
        tmp4 = 4.0;
        if (tmp4 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "x / x_small * ((x / x_small) ^ 2.0 - 3.0) * (y2 - y1) / 4.0");}
        tmp5 = 2.0;
        if (tmp5 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(y1 + y2) / 2.0");}
        tmp8 = ((((_x) / tmp1) * ((tmp3 * tmp3) - 3.0)) * (_y2 - _y1)) / tmp4 + (_y1 + _y2) / tmp5;
      }
      else
      {
        tmp6 = 2.0;
        if (tmp6 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(y1 + y2) / 2.0");}
        tmp8 = (_y1 + _y2) / tmp6;
      }
      tmp10 = tmp8;
    }
    tmp12 = tmp10;
  }
  _y = tmp12;
  _return: OMC_LABEL_UNUSED
  return _y;
}
modelica_metatype boxptr_Modelica_Fluid_Utilities_regStep(threadData_t *threadData, modelica_metatype _x, modelica_metatype _y1, modelica_metatype _y2, modelica_metatype _x_small)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real _y;
  modelica_metatype out_y;
  tmp1 = mmc_unbox_real(_x);
  tmp2 = mmc_unbox_real(_y1);
  tmp3 = mmc_unbox_real(_y2);
  tmp4 = mmc_unbox_real(_x_small);
  _y = omc_Modelica_Fluid_Utilities_regStep(threadData, tmp1, tmp2, tmp3, tmp4);
  out_y = mmc_mk_rcon(_y);
  return out_y;
}

DLLDirection
modelica_real omc_Modelica_SIunits_Conversions_to__degC(threadData_t *threadData, modelica_real _Kelvin)
{
  modelica_real _Celsius;
  _tailrecursive: OMC_LABEL_UNUSED
  // _Celsius has no default value.
  _Celsius = _Kelvin - 273.15;
  _return: OMC_LABEL_UNUSED
  return _Celsius;
}
modelica_metatype boxptr_Modelica_SIunits_Conversions_to__degC(threadData_t *threadData, modelica_metatype _Kelvin)
{
  modelica_real tmp1;
  modelica_real _Celsius;
  modelica_metatype out_Celsius;
  tmp1 = mmc_unbox_real(_Kelvin);
  _Celsius = omc_Modelica_SIunits_Conversions_to__degC(threadData, tmp1);
  out_Celsius = mmc_mk_rcon(_Celsius);
  return out_Celsius;
}

void omc_Modelica_Utilities_Streams_error(threadData_t *threadData, modelica_string _string)
{

  FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Utilities/Streams.mo",124,3,152,12,0};
  omc_assert(threadData, info, MMC_STRINGDATA(_string));
  return;
}

void omc_Modelica_Utilities_Streams_print(threadData_t *threadData, modelica_string _string, modelica_string _fileName)
{

  ModelicaInternal_print(MMC_STRINGDATA(_string), MMC_STRINGDATA(_fileName));
  return;
}

modelica_string omc_Modelica_Utilities_Streams_readLine(threadData_t *threadData, modelica_string _fileName, modelica_integer _lineNumber, modelica_boolean *out_endOfFile)
{
  int _lineNumber_ext;
  int _endOfFile_ext;
  const char* _string_ext;
  modelica_string _string = NULL;
  modelica_boolean _endOfFile;
  // _string has no default value.
  // _endOfFile has no default value.
  _lineNumber_ext = (int) _lineNumber;
  _string_ext = ModelicaInternal_readLine(MMC_STRINGDATA(_fileName), _lineNumber_ext, &_endOfFile_ext);
  _endOfFile = (modelica_boolean)_endOfFile_ext;
  _string = (modelica_string)mmc_mk_scon(_string_ext);
  if (out_endOfFile) { *out_endOfFile = _endOfFile; }
  return _string;
}
modelica_metatype boxptr_Modelica_Utilities_Streams_readLine(threadData_t *threadData, modelica_metatype _fileName, modelica_metatype _lineNumber, modelica_metatype *out_endOfFile)
{
  modelica_integer tmp1;
  modelica_boolean _endOfFile;
  modelica_string _string = NULL;
  tmp1 = mmc_unbox_integer(_lineNumber);
  _string = omc_Modelica_Utilities_Streams_readLine(threadData, _fileName, tmp1, &_endOfFile);
  /* skip box _string; String */
  if (out_endOfFile) { *out_endOfFile = mmc_mk_icon(_endOfFile); }
  return _string;
}

modelica_integer omc_Modelica_Utilities_Strings_compare(threadData_t *threadData, modelica_string _string1, modelica_string _string2, modelica_boolean _caseSensitive)
{
  int _caseSensitive_ext;
  int _result_ext;
  modelica_integer _result;
  // _result has no default value.
  _caseSensitive_ext = (int) _caseSensitive;
  _result_ext = ModelicaStrings_compare(MMC_STRINGDATA(_string1), MMC_STRINGDATA(_string2), _caseSensitive_ext);
  _result = (modelica_integer)_result_ext;
  return _result;
}
modelica_metatype boxptr_Modelica_Utilities_Strings_compare(threadData_t *threadData, modelica_metatype _string1, modelica_metatype _string2, modelica_metatype _caseSensitive)
{
  modelica_integer tmp1;
  modelica_integer _result;
  modelica_metatype out_result;
  tmp1 = mmc_unbox_integer(_caseSensitive);
  _result = omc_Modelica_Utilities_Strings_compare(threadData, _string1, _string2, tmp1);
  out_result = mmc_mk_icon(_result);
  return out_result;
}

DLLDirection
modelica_integer omc_Modelica_Utilities_Strings_find(threadData_t *threadData, modelica_string _string, modelica_string _searchString, modelica_integer _startIndex, modelica_boolean _caseSensitive)
{
  modelica_integer _index;
  modelica_integer _lengthSearchString;
  modelica_integer _i;
  modelica_integer _len;
  modelica_integer _i_max;
  _tailrecursive: OMC_LABEL_UNUSED
  // _index has no default value.
  _lengthSearchString = omc_Modelica_Utilities_Strings_length(threadData, _searchString);
  _i = _startIndex;
  _len = _lengthSearchString - ((modelica_integer) 1);
  _i_max = omc_Modelica_Utilities_Strings_length(threadData, _string) - _lengthSearchString + ((modelica_integer) 1);
  _index = ((modelica_integer) 0);

  while(1)
  {
    if(!(_i <= _i_max)) break;
    if(omc_Modelica_Utilities_Strings_isEqual(threadData, omc_Modelica_Utilities_Strings_substring(threadData, _string, _i, _i + _len), _searchString, _caseSensitive))
    {
      _index = _i;

      _i = _i_max + ((modelica_integer) 1);
    }
    else
    {
      _i = _i + ((modelica_integer) 1);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _index;
}
modelica_metatype boxptr_Modelica_Utilities_Strings_find(threadData_t *threadData, modelica_metatype _string, modelica_metatype _searchString, modelica_metatype _startIndex, modelica_metatype _caseSensitive)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _index;
  modelica_metatype out_index;
  tmp1 = mmc_unbox_integer(_startIndex);
  tmp2 = mmc_unbox_integer(_caseSensitive);
  _index = omc_Modelica_Utilities_Strings_find(threadData, _string, _searchString, tmp1, tmp2);
  out_index = mmc_mk_icon(_index);
  return out_index;
}

DLLDirection
modelica_boolean omc_Modelica_Utilities_Strings_isEmpty(threadData_t *threadData, modelica_string _string)
{
  modelica_boolean _result;
  modelica_integer _nextIndex;
  modelica_integer _len;
  _tailrecursive: OMC_LABEL_UNUSED
  // _result has no default value.
  // _nextIndex has no default value.
  // _len has no default value.
  _nextIndex = omc_Modelica_Utilities_Strings_Advanced_skipWhiteSpace(threadData, _string, ((modelica_integer) 1));

  _len = omc_Modelica_Utilities_Strings_length(threadData, _string);

  if(((_len < ((modelica_integer) 1)) || (_nextIndex > _len)))
  {
    _result = 1 /* true */;
  }
  else
  {
    _result = 0 /* false */;
  }
  _return: OMC_LABEL_UNUSED
  return _result;
}
modelica_metatype boxptr_Modelica_Utilities_Strings_isEmpty(threadData_t *threadData, modelica_metatype _string)
{
  modelica_boolean _result;
  modelica_metatype out_result;
  _result = omc_Modelica_Utilities_Strings_isEmpty(threadData, _string);
  out_result = mmc_mk_icon(_result);
  return out_result;
}

DLLDirection
modelica_boolean omc_Modelica_Utilities_Strings_isEqual(threadData_t *threadData, modelica_string _string1, modelica_string _string2, modelica_boolean _caseSensitive)
{
  modelica_boolean _identical;
  _tailrecursive: OMC_LABEL_UNUSED
  // _identical has no default value.
  _identical = (omc_Modelica_Utilities_Strings_compare(threadData, _string1, _string2, _caseSensitive) == 2);
  _return: OMC_LABEL_UNUSED
  return _identical;
}
modelica_metatype boxptr_Modelica_Utilities_Strings_isEqual(threadData_t *threadData, modelica_metatype _string1, modelica_metatype _string2, modelica_metatype _caseSensitive)
{
  modelica_integer tmp1;
  modelica_boolean _identical;
  modelica_metatype out_identical;
  tmp1 = mmc_unbox_integer(_caseSensitive);
  _identical = omc_Modelica_Utilities_Strings_isEqual(threadData, _string1, _string2, tmp1);
  out_identical = mmc_mk_icon(_identical);
  return out_identical;
}

modelica_integer omc_Modelica_Utilities_Strings_length(threadData_t *threadData, modelica_string _string)
{
  int _result_ext;
  modelica_integer _result;
  // _result has no default value.

  _result_ext = ModelicaStrings_length(MMC_STRINGDATA(_string));
  _result = (modelica_integer)_result_ext;
  return _result;
}
modelica_metatype boxptr_Modelica_Utilities_Strings_length(threadData_t *threadData, modelica_metatype _string)
{
  modelica_integer _result;
  modelica_metatype out_result;
  _result = omc_Modelica_Utilities_Strings_length(threadData, _string);
  out_result = mmc_mk_icon(_result);
  return out_result;
}

modelica_string omc_Modelica_Utilities_Strings_substring(threadData_t *threadData, modelica_string _string, modelica_integer _startIndex, modelica_integer _endIndex)
{
  int _startIndex_ext;
  int _endIndex_ext;
  const char* _result_ext;
  modelica_string _result = NULL;
  // _result has no default value.
  _startIndex_ext = (int) _startIndex;
  _endIndex_ext = (int) _endIndex;
  _result_ext = ModelicaStrings_substring(MMC_STRINGDATA(_string), _startIndex_ext, _endIndex_ext);
  _result = (modelica_string)mmc_mk_scon(_result_ext);
  return _result;
}
modelica_metatype boxptr_Modelica_Utilities_Strings_substring(threadData_t *threadData, modelica_metatype _string, modelica_metatype _startIndex, modelica_metatype _endIndex)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_string _result = NULL;
  tmp1 = mmc_unbox_integer(_startIndex);
  tmp2 = mmc_unbox_integer(_endIndex);
  _result = omc_Modelica_Utilities_Strings_substring(threadData, _string, tmp1, tmp2);
  /* skip box _result; String */
  return _result;
}

modelica_integer omc_Modelica_Utilities_Strings_Advanced_scanReal(threadData_t *threadData, modelica_string _string, modelica_integer _startIndex, modelica_boolean _unsigned, modelica_real *out_number)
{
  int _startIndex_ext;
  int _unsigned_ext;
  int _nextIndex_ext;
  double _number_ext;
  modelica_integer _nextIndex;
  modelica_real _number;
  // _nextIndex has no default value.
  // _number has no default value.
  _startIndex_ext = (int) _startIndex;
  _unsigned_ext = (int) _unsigned;
  ModelicaStrings_scanReal(MMC_STRINGDATA(_string), _startIndex_ext, _unsigned_ext, &_nextIndex_ext, &_number_ext);
  _nextIndex = (modelica_integer)_nextIndex_ext;
  _number = (modelica_real)_number_ext;
  if (out_number) { *out_number = _number; }
  return _nextIndex;
}
modelica_metatype boxptr_Modelica_Utilities_Strings_Advanced_scanReal(threadData_t *threadData, modelica_metatype _string, modelica_metatype _startIndex, modelica_metatype _unsigned, modelica_metatype *out_number)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_real _number;
  modelica_integer _nextIndex;
  modelica_metatype out_nextIndex;
  tmp1 = mmc_unbox_integer(_startIndex);
  tmp2 = mmc_unbox_integer(_unsigned);
  _nextIndex = omc_Modelica_Utilities_Strings_Advanced_scanReal(threadData, _string, tmp1, tmp2, &_number);
  out_nextIndex = mmc_mk_icon(_nextIndex);
  if (out_number) { *out_number = mmc_mk_rcon(_number); }
  return out_nextIndex;
}

modelica_integer omc_Modelica_Utilities_Strings_Advanced_skipWhiteSpace(threadData_t *threadData, modelica_string _string, modelica_integer _startIndex)
{
  int _startIndex_ext;
  int _nextIndex_ext;
  modelica_integer _nextIndex;
  // _nextIndex has no default value.
  _startIndex_ext = (int) _startIndex;
  _nextIndex_ext = ModelicaStrings_skipWhiteSpace(MMC_STRINGDATA(_string), _startIndex_ext);
  _nextIndex = (modelica_integer)_nextIndex_ext;
  return _nextIndex;
}
modelica_metatype boxptr_Modelica_Utilities_Strings_Advanced_skipWhiteSpace(threadData_t *threadData, modelica_metatype _string, modelica_metatype _startIndex)
{
  modelica_integer tmp1;
  modelica_integer _nextIndex;
  modelica_metatype out_nextIndex;
  tmp1 = mmc_unbox_integer(_startIndex);
  _nextIndex = omc_Modelica_Utilities_Strings_Advanced_skipWhiteSpace(threadData, _string, tmp1);
  out_nextIndex = mmc_mk_icon(_nextIndex);
  return out_nextIndex;
}

logic2_TAirSup_Medium_ThermodynamicState omc_logic2_TAirSup_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X)
{
  logic2_TAirSup_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  tmp1._X = omc_X;
  return tmp1;
}

modelica_metatype boxptr_logic2_TAirSup_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  return mmc_mk_box4(3, &logic2_TAirSup_Medium_ThermodynamicState__desc, _p, _T, _X);
}

logic2_TCHWChi1In_Medium_ThermodynamicState omc_logic2_TCHWChi1In_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_TCHWChi1In_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_TCHWChi1In_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_TCHWChi1In_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
logic2_TCHWChi1In_Medium_ThermodynamicState omc_logic2_TCHWChi1In_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  logic2_TCHWChi1In_Medium_ThermodynamicState _state;
  logic2_TCHWChi1In_Medium_ThermodynamicState tmp1;
  logic2_TCHWChi1In_Medium_ThermodynamicState tmp2;
  modelica_real tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  logic2_TCHWChi1In_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp3 = 4184.0;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  tmp2._p = _p;
  tmp2._T = 273.15 + (_h) / tmp3;
  tmp1 = tmp2;
  logic2_TCHWChi1In_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_logic2_TCHWChi1In_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  logic2_TCHWChi1In_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _state = omc_logic2_TCHWChi1In_Medium_setState__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &logic2_TCHWChi1In_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_logic2_TCHWChi1In_Medium_temperature(threadData_t *threadData, logic2_TCHWChi1In_Medium_ThermodynamicState _state)
{
  modelica_real _T;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  _T = _state._T;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_logic2_TCHWChi1In_Medium_temperature(threadData_t *threadData, modelica_metatype _state)
{
  logic2_TCHWChi1In_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _T;
  modelica_metatype out_T;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _T = omc_logic2_TCHWChi1In_Medium_temperature(threadData, tmp1);
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

logic2_TCHWChi1Out_Medium_ThermodynamicState omc_logic2_TCHWChi1Out_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_TCHWChi1Out_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_TCHWChi1Out_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_TCHWChi1Out_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
logic2_TCHWChi1Out_Medium_ThermodynamicState omc_logic2_TCHWChi1Out_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  logic2_TCHWChi1Out_Medium_ThermodynamicState _state;
  logic2_TCHWChi1Out_Medium_ThermodynamicState tmp1;
  logic2_TCHWChi1Out_Medium_ThermodynamicState tmp2;
  modelica_real tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  logic2_TCHWChi1Out_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp3 = 4184.0;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  tmp2._p = _p;
  tmp2._T = 273.15 + (_h) / tmp3;
  tmp1 = tmp2;
  logic2_TCHWChi1Out_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_logic2_TCHWChi1Out_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  logic2_TCHWChi1Out_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _state = omc_logic2_TCHWChi1Out_Medium_setState__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &logic2_TCHWChi1Out_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_logic2_TCHWChi1Out_Medium_temperature(threadData_t *threadData, logic2_TCHWChi1Out_Medium_ThermodynamicState _state)
{
  modelica_real _T;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  _T = _state._T;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_logic2_TCHWChi1Out_Medium_temperature(threadData_t *threadData, modelica_metatype _state)
{
  logic2_TCHWChi1Out_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _T;
  modelica_metatype out_T;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _T = omc_logic2_TCHWChi1Out_Medium_temperature(threadData, tmp1);
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

logic2_TCHWChi2In_Medium_ThermodynamicState omc_logic2_TCHWChi2In_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_TCHWChi2In_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_TCHWChi2In_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_TCHWChi2In_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
logic2_TCHWChi2In_Medium_ThermodynamicState omc_logic2_TCHWChi2In_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  logic2_TCHWChi2In_Medium_ThermodynamicState _state;
  logic2_TCHWChi2In_Medium_ThermodynamicState tmp1;
  logic2_TCHWChi2In_Medium_ThermodynamicState tmp2;
  modelica_real tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  logic2_TCHWChi2In_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp3 = 4184.0;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  tmp2._p = _p;
  tmp2._T = 273.15 + (_h) / tmp3;
  tmp1 = tmp2;
  logic2_TCHWChi2In_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_logic2_TCHWChi2In_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  logic2_TCHWChi2In_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _state = omc_logic2_TCHWChi2In_Medium_setState__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &logic2_TCHWChi2In_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_logic2_TCHWChi2In_Medium_temperature(threadData_t *threadData, logic2_TCHWChi2In_Medium_ThermodynamicState _state)
{
  modelica_real _T;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  _T = _state._T;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_logic2_TCHWChi2In_Medium_temperature(threadData_t *threadData, modelica_metatype _state)
{
  logic2_TCHWChi2In_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _T;
  modelica_metatype out_T;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _T = omc_logic2_TCHWChi2In_Medium_temperature(threadData, tmp1);
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

logic2_TCHWChi2Out_Medium_ThermodynamicState omc_logic2_TCHWChi2Out_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_TCHWChi2Out_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_TCHWChi2Out_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_TCHWChi2Out_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
logic2_TCHWChi2Out_Medium_ThermodynamicState omc_logic2_TCHWChi2Out_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  logic2_TCHWChi2Out_Medium_ThermodynamicState _state;
  logic2_TCHWChi2Out_Medium_ThermodynamicState tmp1;
  logic2_TCHWChi2Out_Medium_ThermodynamicState tmp2;
  modelica_real tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  logic2_TCHWChi2Out_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp3 = 4184.0;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  tmp2._p = _p;
  tmp2._T = 273.15 + (_h) / tmp3;
  tmp1 = tmp2;
  logic2_TCHWChi2Out_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_logic2_TCHWChi2Out_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  logic2_TCHWChi2Out_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _state = omc_logic2_TCHWChi2Out_Medium_setState__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &logic2_TCHWChi2Out_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_logic2_TCHWChi2Out_Medium_temperature(threadData_t *threadData, logic2_TCHWChi2Out_Medium_ThermodynamicState _state)
{
  modelica_real _T;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  _T = _state._T;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_logic2_TCHWChi2Out_Medium_temperature(threadData_t *threadData, modelica_metatype _state)
{
  logic2_TCHWChi2Out_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _T;
  modelica_metatype out_T;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _T = omc_logic2_TCHWChi2Out_Medium_temperature(threadData, tmp1);
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

logic2_TCHWEntChi_Medium_ThermodynamicState omc_logic2_TCHWEntChi_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_TCHWEntChi_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_TCHWEntChi_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_TCHWEntChi_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
logic2_TCHWEntChi_Medium_ThermodynamicState omc_logic2_TCHWEntChi_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  logic2_TCHWEntChi_Medium_ThermodynamicState _state;
  logic2_TCHWEntChi_Medium_ThermodynamicState tmp1;
  logic2_TCHWEntChi_Medium_ThermodynamicState tmp2;
  modelica_real tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  logic2_TCHWEntChi_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp3 = 4184.0;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  tmp2._p = _p;
  tmp2._T = 273.15 + (_h) / tmp3;
  tmp1 = tmp2;
  logic2_TCHWEntChi_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_logic2_TCHWEntChi_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  logic2_TCHWEntChi_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _state = omc_logic2_TCHWEntChi_Medium_setState__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &logic2_TCHWEntChi_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_logic2_TCHWEntChi_Medium_temperature(threadData_t *threadData, logic2_TCHWEntChi_Medium_ThermodynamicState _state)
{
  modelica_real _T;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  _T = _state._T;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_logic2_TCHWEntChi_Medium_temperature(threadData_t *threadData, modelica_metatype _state)
{
  logic2_TCHWEntChi_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _T;
  modelica_metatype out_T;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _T = omc_logic2_TCHWEntChi_Medium_temperature(threadData, tmp1);
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

logic2_TCHWLeaCoi_Medium_ThermodynamicState omc_logic2_TCHWLeaCoi_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_TCHWLeaCoi_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_TCHWLeaCoi_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_TCHWLeaCoi_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
logic2_TCHWLeaCoi_Medium_ThermodynamicState omc_logic2_TCHWLeaCoi_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  logic2_TCHWLeaCoi_Medium_ThermodynamicState _state;
  logic2_TCHWLeaCoi_Medium_ThermodynamicState tmp1;
  logic2_TCHWLeaCoi_Medium_ThermodynamicState tmp2;
  modelica_real tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  logic2_TCHWLeaCoi_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp3 = 4184.0;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  tmp2._p = _p;
  tmp2._T = 273.15 + (_h) / tmp3;
  tmp1 = tmp2;
  logic2_TCHWLeaCoi_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_logic2_TCHWLeaCoi_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  logic2_TCHWLeaCoi_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _state = omc_logic2_TCHWLeaCoi_Medium_setState__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &logic2_TCHWLeaCoi_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_logic2_TCHWLeaCoi_Medium_temperature(threadData_t *threadData, logic2_TCHWLeaCoi_Medium_ThermodynamicState _state)
{
  modelica_real _T;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  _T = _state._T;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_logic2_TCHWLeaCoi_Medium_temperature(threadData_t *threadData, modelica_metatype _state)
{
  logic2_TCHWLeaCoi_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _T;
  modelica_metatype out_T;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _T = omc_logic2_TCHWLeaCoi_Medium_temperature(threadData, tmp1);
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

logic2_TCWEntTow_Medium_ThermodynamicState omc_logic2_TCWEntTow_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_TCWEntTow_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_TCWEntTow_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_TCWEntTow_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
logic2_TCWEntTow_Medium_ThermodynamicState omc_logic2_TCWEntTow_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  logic2_TCWEntTow_Medium_ThermodynamicState _state;
  logic2_TCWEntTow_Medium_ThermodynamicState tmp1;
  logic2_TCWEntTow_Medium_ThermodynamicState tmp2;
  modelica_real tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  logic2_TCWEntTow_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp3 = 4184.0;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  tmp2._p = _p;
  tmp2._T = 273.15 + (_h) / tmp3;
  tmp1 = tmp2;
  logic2_TCWEntTow_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_logic2_TCWEntTow_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  logic2_TCWEntTow_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _state = omc_logic2_TCWEntTow_Medium_setState__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &logic2_TCWEntTow_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_logic2_TCWEntTow_Medium_temperature(threadData_t *threadData, logic2_TCWEntTow_Medium_ThermodynamicState _state)
{
  modelica_real _T;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  _T = _state._T;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_logic2_TCWEntTow_Medium_temperature(threadData_t *threadData, modelica_metatype _state)
{
  logic2_TCWEntTow_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _T;
  modelica_metatype out_T;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _T = omc_logic2_TCWEntTow_Medium_temperature(threadData, tmp1);
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

logic2_TCWEntTow2_Medium_ThermodynamicState omc_logic2_TCWEntTow2_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_TCWEntTow2_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_TCWEntTow2_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_TCWEntTow2_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
logic2_TCWEntTow2_Medium_ThermodynamicState omc_logic2_TCWEntTow2_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  logic2_TCWEntTow2_Medium_ThermodynamicState _state;
  logic2_TCWEntTow2_Medium_ThermodynamicState tmp1;
  logic2_TCWEntTow2_Medium_ThermodynamicState tmp2;
  modelica_real tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  logic2_TCWEntTow2_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp3 = 4184.0;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  tmp2._p = _p;
  tmp2._T = 273.15 + (_h) / tmp3;
  tmp1 = tmp2;
  logic2_TCWEntTow2_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_logic2_TCWEntTow2_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  logic2_TCWEntTow2_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _state = omc_logic2_TCWEntTow2_Medium_setState__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &logic2_TCWEntTow2_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_logic2_TCWEntTow2_Medium_temperature(threadData_t *threadData, logic2_TCWEntTow2_Medium_ThermodynamicState _state)
{
  modelica_real _T;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  _T = _state._T;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_logic2_TCWEntTow2_Medium_temperature(threadData_t *threadData, modelica_metatype _state)
{
  logic2_TCWEntTow2_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _T;
  modelica_metatype out_T;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _T = omc_logic2_TCWEntTow2_Medium_temperature(threadData, tmp1);
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

logic2_TCWLeaTow_Medium_ThermodynamicState omc_logic2_TCWLeaTow_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_TCWLeaTow_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_TCWLeaTow_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_TCWLeaTow_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
logic2_TCWLeaTow_Medium_ThermodynamicState omc_logic2_TCWLeaTow_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  logic2_TCWLeaTow_Medium_ThermodynamicState _state;
  logic2_TCWLeaTow_Medium_ThermodynamicState tmp1;
  logic2_TCWLeaTow_Medium_ThermodynamicState tmp2;
  modelica_real tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  logic2_TCWLeaTow_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp3 = 4184.0;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  tmp2._p = _p;
  tmp2._T = 273.15 + (_h) / tmp3;
  tmp1 = tmp2;
  logic2_TCWLeaTow_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_logic2_TCWLeaTow_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  logic2_TCWLeaTow_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _state = omc_logic2_TCWLeaTow_Medium_setState__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &logic2_TCWLeaTow_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_logic2_TCWLeaTow_Medium_temperature(threadData_t *threadData, logic2_TCWLeaTow_Medium_ThermodynamicState _state)
{
  modelica_real _T;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  _T = _state._T;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_logic2_TCWLeaTow_Medium_temperature(threadData_t *threadData, modelica_metatype _state)
{
  logic2_TCWLeaTow_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _T;
  modelica_metatype out_T;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _T = omc_logic2_TCWLeaTow_Medium_temperature(threadData, tmp1);
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

logic2_TWCLeaTow2_Medium_ThermodynamicState omc_logic2_TWCLeaTow2_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_TWCLeaTow2_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_TWCLeaTow2_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_TWCLeaTow2_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
logic2_TWCLeaTow2_Medium_ThermodynamicState omc_logic2_TWCLeaTow2_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  logic2_TWCLeaTow2_Medium_ThermodynamicState _state;
  logic2_TWCLeaTow2_Medium_ThermodynamicState tmp1;
  logic2_TWCLeaTow2_Medium_ThermodynamicState tmp2;
  modelica_real tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  logic2_TWCLeaTow2_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp3 = 4184.0;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  tmp2._p = _p;
  tmp2._T = 273.15 + (_h) / tmp3;
  tmp1 = tmp2;
  logic2_TWCLeaTow2_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_logic2_TWCLeaTow2_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  logic2_TWCLeaTow2_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _state = omc_logic2_TWCLeaTow2_Medium_setState__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &logic2_TWCLeaTow2_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_logic2_TWCLeaTow2_Medium_temperature(threadData_t *threadData, logic2_TWCLeaTow2_Medium_ThermodynamicState _state)
{
  modelica_real _T;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  _T = _state._T;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_logic2_TWCLeaTow2_Medium_temperature(threadData_t *threadData, modelica_metatype _state)
{
  logic2_TWCLeaTow2_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _T;
  modelica_metatype out_T;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _T = omc_logic2_TWCLeaTow2_Medium_temperature(threadData, tmp1);
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

logic2_chi_Medium1_ThermodynamicState omc_logic2_chi_Medium1_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_chi_Medium1_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_chi_Medium1_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_chi_Medium1_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_chi_Medium1_density(threadData_t *threadData, logic2_chi_Medium1_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_logic2_chi_Medium1_density(threadData_t *threadData, modelica_metatype _state)
{
  logic2_chi_Medium1_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_logic2_chi_Medium1_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
logic2_chi_Medium1_ThermodynamicState omc_logic2_chi_Medium1_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  logic2_chi_Medium1_ThermodynamicState _state;
  logic2_chi_Medium1_ThermodynamicState tmp1;
  logic2_chi_Medium1_ThermodynamicState tmp2;
  modelica_real tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  logic2_chi_Medium1_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp3 = 4184.0;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  tmp2._p = _p;
  tmp2._T = 273.15 + (_h) / tmp3;
  tmp1 = tmp2;
  logic2_chi_Medium1_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_logic2_chi_Medium1_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  logic2_chi_Medium1_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _state = omc_logic2_chi_Medium1_setState__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &logic2_chi_Medium1_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_logic2_chi_Medium1_specificEnthalpy(threadData_t *threadData, logic2_chi_Medium1_ThermodynamicState _state)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_logic2_chi_Medium1_specificEnthalpy(threadData_t *threadData, modelica_metatype _state)
{
  logic2_chi_Medium1_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _h;
  modelica_metatype out_h;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _h = omc_logic2_chi_Medium1_specificEnthalpy(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLDirection
modelica_real omc_logic2_chi_Medium1_temperature(threadData_t *threadData, logic2_chi_Medium1_ThermodynamicState _state)
{
  modelica_real _T;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  _T = _state._T;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_logic2_chi_Medium1_temperature(threadData_t *threadData, modelica_metatype _state)
{
  logic2_chi_Medium1_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _T;
  modelica_metatype out_T;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _T = omc_logic2_chi_Medium1_temperature(threadData, tmp1);
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

logic2_chi_Medium2_ThermodynamicState omc_logic2_chi_Medium2_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_chi_Medium2_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_chi_Medium2_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_chi_Medium2_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_chi_Medium2_density(threadData_t *threadData, logic2_chi_Medium2_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_logic2_chi_Medium2_density(threadData_t *threadData, modelica_metatype _state)
{
  logic2_chi_Medium2_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_logic2_chi_Medium2_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
logic2_chi_Medium2_ThermodynamicState omc_logic2_chi_Medium2_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  logic2_chi_Medium2_ThermodynamicState _state;
  logic2_chi_Medium2_ThermodynamicState tmp1;
  logic2_chi_Medium2_ThermodynamicState tmp2;
  modelica_real tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  logic2_chi_Medium2_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp3 = 4184.0;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  tmp2._p = _p;
  tmp2._T = 273.15 + (_h) / tmp3;
  tmp1 = tmp2;
  logic2_chi_Medium2_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_logic2_chi_Medium2_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  logic2_chi_Medium2_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _state = omc_logic2_chi_Medium2_setState__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &logic2_chi_Medium2_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_logic2_chi_Medium2_specificEnthalpy(threadData_t *threadData, logic2_chi_Medium2_ThermodynamicState _state)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_logic2_chi_Medium2_specificEnthalpy(threadData_t *threadData, modelica_metatype _state)
{
  logic2_chi_Medium2_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _h;
  modelica_metatype out_h;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _h = omc_logic2_chi_Medium2_specificEnthalpy(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLDirection
modelica_real omc_logic2_chi_Medium2_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_logic2_chi_Medium2_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _h = omc_logic2_chi_Medium2_specificEnthalpy__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLDirection
modelica_real omc_logic2_chi_Medium2_temperature(threadData_t *threadData, logic2_chi_Medium2_ThermodynamicState _state)
{
  modelica_real _T;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  _T = _state._T;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_logic2_chi_Medium2_temperature(threadData_t *threadData, modelica_metatype _state)
{
  logic2_chi_Medium2_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _T;
  modelica_metatype out_T;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _T = omc_logic2_chi_Medium2_temperature(threadData, tmp1);
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

logic2_chi_preDro1_Medium_ThermodynamicState omc_logic2_chi_preDro1_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_chi_preDro1_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_chi_preDro1_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_chi_preDro1_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_chi_preDro1_Medium_dynamicViscosity(threadData_t *threadData, logic2_chi_preDro1_Medium_ThermodynamicState _state)
{
  modelica_real _eta;
  _tailrecursive: OMC_LABEL_UNUSED
  // _eta has no default value.
  _eta = 0.001;
  _return: OMC_LABEL_UNUSED
  return _eta;
}
modelica_metatype boxptr_logic2_chi_preDro1_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state)
{
  logic2_chi_preDro1_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _eta;
  modelica_metatype out_eta;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _eta = omc_logic2_chi_preDro1_Medium_dynamicViscosity(threadData, tmp1);
  out_eta = mmc_mk_rcon(_eta);
  return out_eta;
}

logic2_chi_preDro2_Medium_ThermodynamicState omc_logic2_chi_preDro2_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_chi_preDro2_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_chi_preDro2_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_chi_preDro2_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_chi_preDro2_Medium_dynamicViscosity(threadData_t *threadData, logic2_chi_preDro2_Medium_ThermodynamicState _state)
{
  modelica_real _eta;
  _tailrecursive: OMC_LABEL_UNUSED
  // _eta has no default value.
  _eta = 0.001;
  _return: OMC_LABEL_UNUSED
  return _eta;
}
modelica_metatype boxptr_logic2_chi_preDro2_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state)
{
  logic2_chi_preDro2_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _eta;
  modelica_metatype out_eta;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _eta = omc_logic2_chi_preDro2_Medium_dynamicViscosity(threadData, tmp1);
  out_eta = mmc_mk_rcon(_eta);
  return out_eta;
}

logic2_chi_vol1_Medium_ThermodynamicState omc_logic2_chi_vol1_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_chi_vol1_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_chi_vol1_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_chi_vol1_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_chi_vol1_Medium_density(threadData_t *threadData, logic2_chi_vol1_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_logic2_chi_vol1_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  logic2_chi_vol1_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_logic2_chi_vol1_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
modelica_real omc_logic2_chi_vol1_Medium_temperature__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  modelica_real _T;
  modelica_real tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  tmp1 = 4184.0;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  _T = 273.15 + (_h) / tmp1;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_logic2_chi_vol1_Medium_temperature__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _T;
  modelica_metatype out_T;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _T = omc_logic2_chi_vol1_Medium_temperature__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

logic2_chi_vol1_dynBal_Medium_ThermodynamicState omc_logic2_chi_vol1_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_chi_vol1_dynBal_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_chi_vol1_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_chi_vol1_dynBal_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_chi_vol1_dynBal_Medium_density(threadData_t *threadData, logic2_chi_vol1_dynBal_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_logic2_chi_vol1_dynBal_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  logic2_chi_vol1_dynBal_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_logic2_chi_vol1_dynBal_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
logic2_chi_vol1_dynBal_Medium_ThermodynamicState omc_logic2_chi_vol1_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  logic2_chi_vol1_dynBal_Medium_ThermodynamicState _state;
  logic2_chi_vol1_dynBal_Medium_ThermodynamicState tmp1;
  logic2_chi_vol1_dynBal_Medium_ThermodynamicState tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  logic2_chi_vol1_dynBal_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp2._p = _p;
  tmp2._T = _T;
  tmp1 = tmp2;
  logic2_chi_vol1_dynBal_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_logic2_chi_vol1_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  logic2_chi_vol1_dynBal_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _state = omc_logic2_chi_vol1_dynBal_Medium_setState__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &logic2_chi_vol1_dynBal_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_logic2_chi_vol1_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_logic2_chi_vol1_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _h = omc_logic2_chi_vol1_dynBal_Medium_specificEnthalpy__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLDirection
modelica_real omc_logic2_chi_vol1_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, logic2_chi_vol1_dynBal_Medium_ThermodynamicState _state)
{
  modelica_real _u;
  _tailrecursive: OMC_LABEL_UNUSED
  // _u has no default value.
  _u = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _u;
}
modelica_metatype boxptr_logic2_chi_vol1_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, modelica_metatype _state)
{
  logic2_chi_vol1_dynBal_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _u;
  modelica_metatype out_u;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _u = omc_logic2_chi_vol1_dynBal_Medium_specificInternalEnergy(threadData, tmp1);
  out_u = mmc_mk_rcon(_u);
  return out_u;
}

logic2_chi_vol2_Medium_ThermodynamicState omc_logic2_chi_vol2_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_chi_vol2_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_chi_vol2_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_chi_vol2_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_chi_vol2_Medium_density(threadData_t *threadData, logic2_chi_vol2_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_logic2_chi_vol2_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  logic2_chi_vol2_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_logic2_chi_vol2_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
modelica_real omc_logic2_chi_vol2_Medium_temperature__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  modelica_real _T;
  modelica_real tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  tmp1 = 4184.0;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  _T = 273.15 + (_h) / tmp1;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_logic2_chi_vol2_Medium_temperature__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _T;
  modelica_metatype out_T;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _T = omc_logic2_chi_vol2_Medium_temperature__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

logic2_chi_vol2_dynBal_Medium_ThermodynamicState omc_logic2_chi_vol2_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_chi_vol2_dynBal_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_chi_vol2_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_chi_vol2_dynBal_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_chi_vol2_dynBal_Medium_density(threadData_t *threadData, logic2_chi_vol2_dynBal_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_logic2_chi_vol2_dynBal_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  logic2_chi_vol2_dynBal_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_logic2_chi_vol2_dynBal_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
logic2_chi_vol2_dynBal_Medium_ThermodynamicState omc_logic2_chi_vol2_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  logic2_chi_vol2_dynBal_Medium_ThermodynamicState _state;
  logic2_chi_vol2_dynBal_Medium_ThermodynamicState tmp1;
  logic2_chi_vol2_dynBal_Medium_ThermodynamicState tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  logic2_chi_vol2_dynBal_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp2._p = _p;
  tmp2._T = _T;
  tmp1 = tmp2;
  logic2_chi_vol2_dynBal_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_logic2_chi_vol2_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  logic2_chi_vol2_dynBal_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _state = omc_logic2_chi_vol2_dynBal_Medium_setState__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &logic2_chi_vol2_dynBal_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_logic2_chi_vol2_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_logic2_chi_vol2_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _h = omc_logic2_chi_vol2_dynBal_Medium_specificEnthalpy__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLDirection
modelica_real omc_logic2_chi_vol2_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, logic2_chi_vol2_dynBal_Medium_ThermodynamicState _state)
{
  modelica_real _u;
  _tailrecursive: OMC_LABEL_UNUSED
  // _u has no default value.
  _u = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _u;
}
modelica_metatype boxptr_logic2_chi_vol2_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, modelica_metatype _state)
{
  logic2_chi_vol2_dynBal_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _u;
  modelica_metatype out_u;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _u = omc_logic2_chi_vol2_dynBal_Medium_specificInternalEnergy(threadData, tmp1);
  out_u = mmc_mk_rcon(_u);
  return out_u;
}

logic2_chi2_Medium1_ThermodynamicState omc_logic2_chi2_Medium1_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_chi2_Medium1_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_chi2_Medium1_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_chi2_Medium1_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_chi2_Medium1_density(threadData_t *threadData, logic2_chi2_Medium1_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_logic2_chi2_Medium1_density(threadData_t *threadData, modelica_metatype _state)
{
  logic2_chi2_Medium1_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_logic2_chi2_Medium1_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
logic2_chi2_Medium1_ThermodynamicState omc_logic2_chi2_Medium1_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  logic2_chi2_Medium1_ThermodynamicState _state;
  logic2_chi2_Medium1_ThermodynamicState tmp1;
  logic2_chi2_Medium1_ThermodynamicState tmp2;
  modelica_real tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  logic2_chi2_Medium1_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp3 = 4184.0;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  tmp2._p = _p;
  tmp2._T = 273.15 + (_h) / tmp3;
  tmp1 = tmp2;
  logic2_chi2_Medium1_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_logic2_chi2_Medium1_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  logic2_chi2_Medium1_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _state = omc_logic2_chi2_Medium1_setState__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &logic2_chi2_Medium1_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_logic2_chi2_Medium1_specificEnthalpy(threadData_t *threadData, logic2_chi2_Medium1_ThermodynamicState _state)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_logic2_chi2_Medium1_specificEnthalpy(threadData_t *threadData, modelica_metatype _state)
{
  logic2_chi2_Medium1_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _h;
  modelica_metatype out_h;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _h = omc_logic2_chi2_Medium1_specificEnthalpy(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLDirection
modelica_real omc_logic2_chi2_Medium1_temperature(threadData_t *threadData, logic2_chi2_Medium1_ThermodynamicState _state)
{
  modelica_real _T;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  _T = _state._T;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_logic2_chi2_Medium1_temperature(threadData_t *threadData, modelica_metatype _state)
{
  logic2_chi2_Medium1_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _T;
  modelica_metatype out_T;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _T = omc_logic2_chi2_Medium1_temperature(threadData, tmp1);
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

logic2_chi2_Medium2_ThermodynamicState omc_logic2_chi2_Medium2_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_chi2_Medium2_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_chi2_Medium2_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_chi2_Medium2_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_chi2_Medium2_density(threadData_t *threadData, logic2_chi2_Medium2_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_logic2_chi2_Medium2_density(threadData_t *threadData, modelica_metatype _state)
{
  logic2_chi2_Medium2_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_logic2_chi2_Medium2_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
logic2_chi2_Medium2_ThermodynamicState omc_logic2_chi2_Medium2_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  logic2_chi2_Medium2_ThermodynamicState _state;
  logic2_chi2_Medium2_ThermodynamicState tmp1;
  logic2_chi2_Medium2_ThermodynamicState tmp2;
  modelica_real tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  logic2_chi2_Medium2_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp3 = 4184.0;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  tmp2._p = _p;
  tmp2._T = 273.15 + (_h) / tmp3;
  tmp1 = tmp2;
  logic2_chi2_Medium2_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_logic2_chi2_Medium2_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  logic2_chi2_Medium2_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _state = omc_logic2_chi2_Medium2_setState__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &logic2_chi2_Medium2_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_logic2_chi2_Medium2_specificEnthalpy(threadData_t *threadData, logic2_chi2_Medium2_ThermodynamicState _state)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_logic2_chi2_Medium2_specificEnthalpy(threadData_t *threadData, modelica_metatype _state)
{
  logic2_chi2_Medium2_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _h;
  modelica_metatype out_h;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _h = omc_logic2_chi2_Medium2_specificEnthalpy(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLDirection
modelica_real omc_logic2_chi2_Medium2_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_logic2_chi2_Medium2_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _h = omc_logic2_chi2_Medium2_specificEnthalpy__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLDirection
modelica_real omc_logic2_chi2_Medium2_temperature(threadData_t *threadData, logic2_chi2_Medium2_ThermodynamicState _state)
{
  modelica_real _T;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  _T = _state._T;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_logic2_chi2_Medium2_temperature(threadData_t *threadData, modelica_metatype _state)
{
  logic2_chi2_Medium2_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _T;
  modelica_metatype out_T;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _T = omc_logic2_chi2_Medium2_temperature(threadData, tmp1);
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

logic2_chi2_preDro1_Medium_ThermodynamicState omc_logic2_chi2_preDro1_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_chi2_preDro1_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_chi2_preDro1_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_chi2_preDro1_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_chi2_preDro1_Medium_dynamicViscosity(threadData_t *threadData, logic2_chi2_preDro1_Medium_ThermodynamicState _state)
{
  modelica_real _eta;
  _tailrecursive: OMC_LABEL_UNUSED
  // _eta has no default value.
  _eta = 0.001;
  _return: OMC_LABEL_UNUSED
  return _eta;
}
modelica_metatype boxptr_logic2_chi2_preDro1_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state)
{
  logic2_chi2_preDro1_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _eta;
  modelica_metatype out_eta;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _eta = omc_logic2_chi2_preDro1_Medium_dynamicViscosity(threadData, tmp1);
  out_eta = mmc_mk_rcon(_eta);
  return out_eta;
}

logic2_chi2_preDro2_Medium_ThermodynamicState omc_logic2_chi2_preDro2_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_chi2_preDro2_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_chi2_preDro2_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_chi2_preDro2_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_chi2_preDro2_Medium_dynamicViscosity(threadData_t *threadData, logic2_chi2_preDro2_Medium_ThermodynamicState _state)
{
  modelica_real _eta;
  _tailrecursive: OMC_LABEL_UNUSED
  // _eta has no default value.
  _eta = 0.001;
  _return: OMC_LABEL_UNUSED
  return _eta;
}
modelica_metatype boxptr_logic2_chi2_preDro2_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state)
{
  logic2_chi2_preDro2_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _eta;
  modelica_metatype out_eta;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _eta = omc_logic2_chi2_preDro2_Medium_dynamicViscosity(threadData, tmp1);
  out_eta = mmc_mk_rcon(_eta);
  return out_eta;
}

logic2_chi2_vol1_Medium_ThermodynamicState omc_logic2_chi2_vol1_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_chi2_vol1_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_chi2_vol1_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_chi2_vol1_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_chi2_vol1_Medium_density(threadData_t *threadData, logic2_chi2_vol1_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_logic2_chi2_vol1_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  logic2_chi2_vol1_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_logic2_chi2_vol1_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
modelica_real omc_logic2_chi2_vol1_Medium_temperature__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  modelica_real _T;
  modelica_real tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  tmp1 = 4184.0;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  _T = 273.15 + (_h) / tmp1;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_logic2_chi2_vol1_Medium_temperature__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _T;
  modelica_metatype out_T;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _T = omc_logic2_chi2_vol1_Medium_temperature__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

logic2_chi2_vol1_dynBal_Medium_ThermodynamicState omc_logic2_chi2_vol1_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_chi2_vol1_dynBal_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_chi2_vol1_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_chi2_vol1_dynBal_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_chi2_vol1_dynBal_Medium_density(threadData_t *threadData, logic2_chi2_vol1_dynBal_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_logic2_chi2_vol1_dynBal_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  logic2_chi2_vol1_dynBal_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_logic2_chi2_vol1_dynBal_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
logic2_chi2_vol1_dynBal_Medium_ThermodynamicState omc_logic2_chi2_vol1_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  logic2_chi2_vol1_dynBal_Medium_ThermodynamicState _state;
  logic2_chi2_vol1_dynBal_Medium_ThermodynamicState tmp1;
  logic2_chi2_vol1_dynBal_Medium_ThermodynamicState tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  logic2_chi2_vol1_dynBal_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp2._p = _p;
  tmp2._T = _T;
  tmp1 = tmp2;
  logic2_chi2_vol1_dynBal_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_logic2_chi2_vol1_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  logic2_chi2_vol1_dynBal_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _state = omc_logic2_chi2_vol1_dynBal_Medium_setState__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &logic2_chi2_vol1_dynBal_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_logic2_chi2_vol1_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_logic2_chi2_vol1_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _h = omc_logic2_chi2_vol1_dynBal_Medium_specificEnthalpy__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLDirection
modelica_real omc_logic2_chi2_vol1_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, logic2_chi2_vol1_dynBal_Medium_ThermodynamicState _state)
{
  modelica_real _u;
  _tailrecursive: OMC_LABEL_UNUSED
  // _u has no default value.
  _u = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _u;
}
modelica_metatype boxptr_logic2_chi2_vol1_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, modelica_metatype _state)
{
  logic2_chi2_vol1_dynBal_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _u;
  modelica_metatype out_u;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _u = omc_logic2_chi2_vol1_dynBal_Medium_specificInternalEnergy(threadData, tmp1);
  out_u = mmc_mk_rcon(_u);
  return out_u;
}

logic2_chi2_vol2_Medium_ThermodynamicState omc_logic2_chi2_vol2_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_chi2_vol2_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_chi2_vol2_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_chi2_vol2_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_chi2_vol2_Medium_density(threadData_t *threadData, logic2_chi2_vol2_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_logic2_chi2_vol2_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  logic2_chi2_vol2_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_logic2_chi2_vol2_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
modelica_real omc_logic2_chi2_vol2_Medium_temperature__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  modelica_real _T;
  modelica_real tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  tmp1 = 4184.0;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  _T = 273.15 + (_h) / tmp1;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_logic2_chi2_vol2_Medium_temperature__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _T;
  modelica_metatype out_T;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _T = omc_logic2_chi2_vol2_Medium_temperature__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

logic2_chi2_vol2_dynBal_Medium_ThermodynamicState omc_logic2_chi2_vol2_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_chi2_vol2_dynBal_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_chi2_vol2_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_chi2_vol2_dynBal_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_chi2_vol2_dynBal_Medium_density(threadData_t *threadData, logic2_chi2_vol2_dynBal_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_logic2_chi2_vol2_dynBal_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  logic2_chi2_vol2_dynBal_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_logic2_chi2_vol2_dynBal_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
logic2_chi2_vol2_dynBal_Medium_ThermodynamicState omc_logic2_chi2_vol2_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  logic2_chi2_vol2_dynBal_Medium_ThermodynamicState _state;
  logic2_chi2_vol2_dynBal_Medium_ThermodynamicState tmp1;
  logic2_chi2_vol2_dynBal_Medium_ThermodynamicState tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  logic2_chi2_vol2_dynBal_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp2._p = _p;
  tmp2._T = _T;
  tmp1 = tmp2;
  logic2_chi2_vol2_dynBal_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_logic2_chi2_vol2_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  logic2_chi2_vol2_dynBal_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _state = omc_logic2_chi2_vol2_dynBal_Medium_setState__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &logic2_chi2_vol2_dynBal_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_logic2_chi2_vol2_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_logic2_chi2_vol2_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _h = omc_logic2_chi2_vol2_dynBal_Medium_specificEnthalpy__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLDirection
modelica_real omc_logic2_chi2_vol2_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, logic2_chi2_vol2_dynBal_Medium_ThermodynamicState _state)
{
  modelica_real _u;
  _tailrecursive: OMC_LABEL_UNUSED
  // _u has no default value.
  _u = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _u;
}
modelica_metatype boxptr_logic2_chi2_vol2_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, modelica_metatype _state)
{
  logic2_chi2_vol2_dynBal_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _u;
  modelica_metatype out_u;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _u = omc_logic2_chi2_vol2_dynBal_Medium_specificInternalEnergy(threadData, tmp1);
  out_u = mmc_mk_rcon(_u);
  return out_u;
}

logic2_cooCoi_Medium1_ThermodynamicState omc_logic2_cooCoi_Medium1_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_cooCoi_Medium1_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_cooCoi_Medium1_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_cooCoi_Medium1_ThermodynamicState__desc, _p, _T);
}

logic2_cooCoi_Medium2_ThermodynamicState omc_logic2_cooCoi_Medium2_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X)
{
  logic2_cooCoi_Medium2_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  tmp1._X = omc_X;
  return tmp1;
}

modelica_metatype boxptr_logic2_cooCoi_Medium2_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  return mmc_mk_box4(3, &logic2_cooCoi_Medium2_ThermodynamicState__desc, _p, _T, _X);
}

logic2_cooCoi_ele_Medium1_ThermodynamicState omc_logic2_cooCoi_ele_Medium1_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_cooCoi_ele_Medium1_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_cooCoi_ele_Medium1_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_cooCoi_ele_Medium1_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_cooCoi_ele_Medium1_density(threadData_t *threadData, logic2_cooCoi_ele_Medium1_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_logic2_cooCoi_ele_Medium1_density(threadData_t *threadData, modelica_metatype _state)
{
  logic2_cooCoi_ele_Medium1_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_logic2_cooCoi_ele_Medium1_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
modelica_real omc_logic2_cooCoi_ele_Medium1_specificEnthalpy(threadData_t *threadData, logic2_cooCoi_ele_Medium1_ThermodynamicState _state)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_logic2_cooCoi_ele_Medium1_specificEnthalpy(threadData_t *threadData, modelica_metatype _state)
{
  logic2_cooCoi_ele_Medium1_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _h;
  modelica_metatype out_h;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _h = omc_logic2_cooCoi_ele_Medium1_specificEnthalpy(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

logic2_cooCoi_ele_Medium2_ThermodynamicState omc_logic2_cooCoi_ele_Medium2_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X)
{
  logic2_cooCoi_ele_Medium2_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  tmp1._X = omc_X;
  return tmp1;
}

modelica_metatype boxptr_logic2_cooCoi_ele_Medium2_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  return mmc_mk_box4(3, &logic2_cooCoi_ele_Medium2_ThermodynamicState__desc, _p, _T, _X);
}

logic2_cooCoi_ele_preDro1_Medium_ThermodynamicState omc_logic2_cooCoi_ele_preDro1_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_cooCoi_ele_preDro1_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_cooCoi_ele_preDro1_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_cooCoi_ele_preDro1_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_cooCoi_ele_preDro1_Medium_dynamicViscosity(threadData_t *threadData, logic2_cooCoi_ele_preDro1_Medium_ThermodynamicState _state)
{
  modelica_real _eta;
  _tailrecursive: OMC_LABEL_UNUSED
  // _eta has no default value.
  _eta = 0.001;
  _return: OMC_LABEL_UNUSED
  return _eta;
}
modelica_metatype boxptr_logic2_cooCoi_ele_preDro1_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state)
{
  logic2_cooCoi_ele_preDro1_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _eta;
  modelica_metatype out_eta;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _eta = omc_logic2_cooCoi_ele_preDro1_Medium_dynamicViscosity(threadData, tmp1);
  out_eta = mmc_mk_rcon(_eta);
  return out_eta;
}

logic2_cooCoi_ele_preDro2_Medium_ThermodynamicState omc_logic2_cooCoi_ele_preDro2_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X)
{
  logic2_cooCoi_ele_preDro2_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  tmp1._X = omc_X;
  return tmp1;
}

modelica_metatype boxptr_logic2_cooCoi_ele_preDro2_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  return mmc_mk_box4(3, &logic2_cooCoi_ele_preDro2_Medium_ThermodynamicState__desc, _p, _T, _X);
}

logic2_cooCoi_ele_vol1_Medium_ThermodynamicState omc_logic2_cooCoi_ele_vol1_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_cooCoi_ele_vol1_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_cooCoi_ele_vol1_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_cooCoi_ele_vol1_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_cooCoi_ele_vol1_Medium_density(threadData_t *threadData, logic2_cooCoi_ele_vol1_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_logic2_cooCoi_ele_vol1_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  logic2_cooCoi_ele_vol1_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_logic2_cooCoi_ele_vol1_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
modelica_real omc_logic2_cooCoi_ele_vol1_Medium_temperature__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  modelica_real _T;
  modelica_real tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  tmp1 = 4184.0;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  _T = 273.15 + (_h) / tmp1;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_logic2_cooCoi_ele_vol1_Medium_temperature__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _T;
  modelica_metatype out_T;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _T = omc_logic2_cooCoi_ele_vol1_Medium_temperature__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState omc_logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_cooCoi_ele_vol1_dynBal_Medium_density(threadData_t *threadData, logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_logic2_cooCoi_ele_vol1_dynBal_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_logic2_cooCoi_ele_vol1_dynBal_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState omc_logic2_cooCoi_ele_vol1_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState _state;
  logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState tmp1;
  logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp2._p = _p;
  tmp2._T = _T;
  tmp1 = tmp2;
  logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_logic2_cooCoi_ele_vol1_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _state = omc_logic2_cooCoi_ele_vol1_dynBal_Medium_setState__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_logic2_cooCoi_ele_vol1_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_logic2_cooCoi_ele_vol1_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _h = omc_logic2_cooCoi_ele_vol1_dynBal_Medium_specificEnthalpy__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLDirection
modelica_real omc_logic2_cooCoi_ele_vol1_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState _state)
{
  modelica_real _u;
  _tailrecursive: OMC_LABEL_UNUSED
  // _u has no default value.
  _u = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _u;
}
modelica_metatype boxptr_logic2_cooCoi_ele_vol1_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, modelica_metatype _state)
{
  logic2_cooCoi_ele_vol1_dynBal_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _u;
  modelica_metatype out_u;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _u = omc_logic2_cooCoi_ele_vol1_dynBal_Medium_specificInternalEnergy(threadData, tmp1);
  out_u = mmc_mk_rcon(_u);
  return out_u;
}

logic2_cooCoi_ele_vol2_Medium_ThermodynamicState omc_logic2_cooCoi_ele_vol2_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X)
{
  logic2_cooCoi_ele_vol2_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  tmp1._X = omc_X;
  return tmp1;
}

modelica_metatype boxptr_logic2_cooCoi_ele_vol2_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  return mmc_mk_box4(3, &logic2_cooCoi_ele_vol2_Medium_ThermodynamicState__desc, _p, _T, _X);
}

logic2_cooCoi_ele_vol2_dynBal_Medium_ThermodynamicState omc_logic2_cooCoi_ele_vol2_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X)
{
  logic2_cooCoi_ele_vol2_dynBal_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  tmp1._X = omc_X;
  return tmp1;
}

modelica_metatype boxptr_logic2_cooCoi_ele_vol2_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  return mmc_mk_box4(3, &logic2_cooCoi_ele_vol2_dynBal_Medium_ThermodynamicState__desc, _p, _T, _X);
}

logic2_cooCoi_temSen__1_Medium_ThermodynamicState omc_logic2_cooCoi_temSen__1_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_cooCoi_temSen__1_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_cooCoi_temSen__1_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_cooCoi_temSen__1_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
logic2_cooCoi_temSen__1_Medium_ThermodynamicState omc_logic2_cooCoi_temSen__1_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  logic2_cooCoi_temSen__1_Medium_ThermodynamicState _state;
  logic2_cooCoi_temSen__1_Medium_ThermodynamicState tmp1;
  logic2_cooCoi_temSen__1_Medium_ThermodynamicState tmp2;
  modelica_real tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  logic2_cooCoi_temSen__1_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp3 = 4184.0;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  tmp2._p = _p;
  tmp2._T = 273.15 + (_h) / tmp3;
  tmp1 = tmp2;
  logic2_cooCoi_temSen__1_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_logic2_cooCoi_temSen__1_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  logic2_cooCoi_temSen__1_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _state = omc_logic2_cooCoi_temSen__1_Medium_setState__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &logic2_cooCoi_temSen__1_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_logic2_cooCoi_temSen__1_Medium_temperature(threadData_t *threadData, logic2_cooCoi_temSen__1_Medium_ThermodynamicState _state)
{
  modelica_real _T;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  _T = _state._T;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_logic2_cooCoi_temSen__1_Medium_temperature(threadData_t *threadData, modelica_metatype _state)
{
  logic2_cooCoi_temSen__1_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _T;
  modelica_metatype out_T;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _T = omc_logic2_cooCoi_temSen__1_Medium_temperature(threadData, tmp1);
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

logic2_cooCoi_temSen__2_Medium_ThermodynamicState omc_logic2_cooCoi_temSen__2_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X)
{
  logic2_cooCoi_temSen__2_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  tmp1._X = omc_X;
  return tmp1;
}

modelica_metatype boxptr_logic2_cooCoi_temSen__2_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  return mmc_mk_box4(3, &logic2_cooCoi_temSen__2_Medium_ThermodynamicState__desc, _p, _T, _X);
}

logic2_cooTow_Medium_ThermodynamicState omc_logic2_cooTow_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_cooTow_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_cooTow_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_cooTow_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_cooTow_Medium_density(threadData_t *threadData, logic2_cooTow_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_logic2_cooTow_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  logic2_cooTow_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_logic2_cooTow_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
logic2_cooTow_Medium_ThermodynamicState omc_logic2_cooTow_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  logic2_cooTow_Medium_ThermodynamicState _state;
  logic2_cooTow_Medium_ThermodynamicState tmp1;
  logic2_cooTow_Medium_ThermodynamicState tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  logic2_cooTow_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp2._p = _p;
  tmp2._T = _T;
  tmp1 = tmp2;
  logic2_cooTow_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_logic2_cooTow_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  logic2_cooTow_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _state = omc_logic2_cooTow_Medium_setState__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &logic2_cooTow_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_logic2_cooTow_Medium_specificEnthalpy(threadData_t *threadData, logic2_cooTow_Medium_ThermodynamicState _state)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_logic2_cooTow_Medium_specificEnthalpy(threadData_t *threadData, modelica_metatype _state)
{
  logic2_cooTow_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _h;
  modelica_metatype out_h;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _h = omc_logic2_cooTow_Medium_specificEnthalpy(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

logic2_cooTow_Water_ThermodynamicState omc_logic2_cooTow_Water_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_cooTow_Water_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_cooTow_Water_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_cooTow_Water_ThermodynamicState__desc, _p, _T);
}

DLLDirection
logic2_cooTow_Water_ThermodynamicState omc_logic2_cooTow_Water_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  logic2_cooTow_Water_ThermodynamicState _state;
  logic2_cooTow_Water_ThermodynamicState tmp1;
  logic2_cooTow_Water_ThermodynamicState tmp2;
  modelica_real tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  logic2_cooTow_Water_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp3 = 4184.0;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  tmp2._p = _p;
  tmp2._T = 273.15 + (_h) / tmp3;
  tmp1 = tmp2;
  logic2_cooTow_Water_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_logic2_cooTow_Water_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  logic2_cooTow_Water_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _state = omc_logic2_cooTow_Water_setState__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &logic2_cooTow_Water_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_logic2_cooTow_Water_temperature(threadData_t *threadData, logic2_cooTow_Water_ThermodynamicState _state)
{
  modelica_real _T;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  _T = _state._T;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_logic2_cooTow_Water_temperature(threadData_t *threadData, modelica_metatype _state)
{
  logic2_cooTow_Water_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _T;
  modelica_metatype out_T;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _T = omc_logic2_cooTow_Water_temperature(threadData, tmp1);
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

logic2_cooTow_preDro_Medium_ThermodynamicState omc_logic2_cooTow_preDro_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_cooTow_preDro_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_cooTow_preDro_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_cooTow_preDro_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_cooTow_preDro_Medium_dynamicViscosity(threadData_t *threadData, logic2_cooTow_preDro_Medium_ThermodynamicState _state)
{
  modelica_real _eta;
  _tailrecursive: OMC_LABEL_UNUSED
  // _eta has no default value.
  _eta = 0.001;
  _return: OMC_LABEL_UNUSED
  return _eta;
}
modelica_metatype boxptr_logic2_cooTow_preDro_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state)
{
  logic2_cooTow_preDro_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _eta;
  modelica_metatype out_eta;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _eta = omc_logic2_cooTow_preDro_Medium_dynamicViscosity(threadData, tmp1);
  out_eta = mmc_mk_rcon(_eta);
  return out_eta;
}

logic2_cooTow_vol_Medium_ThermodynamicState omc_logic2_cooTow_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_cooTow_vol_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_cooTow_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_cooTow_vol_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_cooTow_vol_Medium_density(threadData_t *threadData, logic2_cooTow_vol_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_logic2_cooTow_vol_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  logic2_cooTow_vol_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_logic2_cooTow_vol_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
modelica_real omc_logic2_cooTow_vol_Medium_temperature__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  modelica_real _T;
  modelica_real tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  tmp1 = 4184.0;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  _T = 273.15 + (_h) / tmp1;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_logic2_cooTow_vol_Medium_temperature__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _T;
  modelica_metatype out_T;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _T = omc_logic2_cooTow_vol_Medium_temperature__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

logic2_cooTow_vol_dynBal_Medium_ThermodynamicState omc_logic2_cooTow_vol_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_cooTow_vol_dynBal_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_cooTow_vol_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_cooTow_vol_dynBal_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_cooTow_vol_dynBal_Medium_density(threadData_t *threadData, logic2_cooTow_vol_dynBal_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_logic2_cooTow_vol_dynBal_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  logic2_cooTow_vol_dynBal_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_logic2_cooTow_vol_dynBal_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
logic2_cooTow_vol_dynBal_Medium_ThermodynamicState omc_logic2_cooTow_vol_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  logic2_cooTow_vol_dynBal_Medium_ThermodynamicState _state;
  logic2_cooTow_vol_dynBal_Medium_ThermodynamicState tmp1;
  logic2_cooTow_vol_dynBal_Medium_ThermodynamicState tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  logic2_cooTow_vol_dynBal_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp2._p = _p;
  tmp2._T = _T;
  tmp1 = tmp2;
  logic2_cooTow_vol_dynBal_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_logic2_cooTow_vol_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  logic2_cooTow_vol_dynBal_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _state = omc_logic2_cooTow_vol_dynBal_Medium_setState__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &logic2_cooTow_vol_dynBal_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_logic2_cooTow_vol_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_logic2_cooTow_vol_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _h = omc_logic2_cooTow_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLDirection
modelica_real omc_logic2_cooTow_vol_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, logic2_cooTow_vol_dynBal_Medium_ThermodynamicState _state)
{
  modelica_real _u;
  _tailrecursive: OMC_LABEL_UNUSED
  // _u has no default value.
  _u = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _u;
}
modelica_metatype boxptr_logic2_cooTow_vol_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, modelica_metatype _state)
{
  logic2_cooTow_vol_dynBal_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _u;
  modelica_metatype out_u;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _u = omc_logic2_cooTow_vol_dynBal_Medium_specificInternalEnergy(threadData, tmp1);
  out_u = mmc_mk_rcon(_u);
  return out_u;
}

logic2_cooTow2_Medium_ThermodynamicState omc_logic2_cooTow2_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_cooTow2_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_cooTow2_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_cooTow2_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_cooTow2_Medium_density(threadData_t *threadData, logic2_cooTow2_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_logic2_cooTow2_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  logic2_cooTow2_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_logic2_cooTow2_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
logic2_cooTow2_Medium_ThermodynamicState omc_logic2_cooTow2_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  logic2_cooTow2_Medium_ThermodynamicState _state;
  logic2_cooTow2_Medium_ThermodynamicState tmp1;
  logic2_cooTow2_Medium_ThermodynamicState tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  logic2_cooTow2_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp2._p = _p;
  tmp2._T = _T;
  tmp1 = tmp2;
  logic2_cooTow2_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_logic2_cooTow2_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  logic2_cooTow2_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _state = omc_logic2_cooTow2_Medium_setState__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &logic2_cooTow2_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_logic2_cooTow2_Medium_specificEnthalpy(threadData_t *threadData, logic2_cooTow2_Medium_ThermodynamicState _state)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_logic2_cooTow2_Medium_specificEnthalpy(threadData_t *threadData, modelica_metatype _state)
{
  logic2_cooTow2_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _h;
  modelica_metatype out_h;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _h = omc_logic2_cooTow2_Medium_specificEnthalpy(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

logic2_cooTow2_Water_ThermodynamicState omc_logic2_cooTow2_Water_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_cooTow2_Water_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_cooTow2_Water_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_cooTow2_Water_ThermodynamicState__desc, _p, _T);
}

DLLDirection
logic2_cooTow2_Water_ThermodynamicState omc_logic2_cooTow2_Water_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  logic2_cooTow2_Water_ThermodynamicState _state;
  logic2_cooTow2_Water_ThermodynamicState tmp1;
  logic2_cooTow2_Water_ThermodynamicState tmp2;
  modelica_real tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  logic2_cooTow2_Water_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp3 = 4184.0;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  tmp2._p = _p;
  tmp2._T = 273.15 + (_h) / tmp3;
  tmp1 = tmp2;
  logic2_cooTow2_Water_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_logic2_cooTow2_Water_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  logic2_cooTow2_Water_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _state = omc_logic2_cooTow2_Water_setState__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &logic2_cooTow2_Water_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_logic2_cooTow2_Water_temperature(threadData_t *threadData, logic2_cooTow2_Water_ThermodynamicState _state)
{
  modelica_real _T;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  _T = _state._T;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_logic2_cooTow2_Water_temperature(threadData_t *threadData, modelica_metatype _state)
{
  logic2_cooTow2_Water_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _T;
  modelica_metatype out_T;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _T = omc_logic2_cooTow2_Water_temperature(threadData, tmp1);
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

logic2_cooTow2_preDro_Medium_ThermodynamicState omc_logic2_cooTow2_preDro_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_cooTow2_preDro_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_cooTow2_preDro_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_cooTow2_preDro_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_cooTow2_preDro_Medium_dynamicViscosity(threadData_t *threadData, logic2_cooTow2_preDro_Medium_ThermodynamicState _state)
{
  modelica_real _eta;
  _tailrecursive: OMC_LABEL_UNUSED
  // _eta has no default value.
  _eta = 0.001;
  _return: OMC_LABEL_UNUSED
  return _eta;
}
modelica_metatype boxptr_logic2_cooTow2_preDro_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state)
{
  logic2_cooTow2_preDro_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _eta;
  modelica_metatype out_eta;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _eta = omc_logic2_cooTow2_preDro_Medium_dynamicViscosity(threadData, tmp1);
  out_eta = mmc_mk_rcon(_eta);
  return out_eta;
}

logic2_cooTow2_vol_Medium_ThermodynamicState omc_logic2_cooTow2_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_cooTow2_vol_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_cooTow2_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_cooTow2_vol_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_cooTow2_vol_Medium_density(threadData_t *threadData, logic2_cooTow2_vol_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_logic2_cooTow2_vol_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  logic2_cooTow2_vol_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_logic2_cooTow2_vol_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
modelica_real omc_logic2_cooTow2_vol_Medium_temperature__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  modelica_real _T;
  modelica_real tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  tmp1 = 4184.0;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  _T = 273.15 + (_h) / tmp1;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_logic2_cooTow2_vol_Medium_temperature__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _T;
  modelica_metatype out_T;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _T = omc_logic2_cooTow2_vol_Medium_temperature__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState omc_logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_cooTow2_vol_dynBal_Medium_density(threadData_t *threadData, logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_logic2_cooTow2_vol_dynBal_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_logic2_cooTow2_vol_dynBal_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState omc_logic2_cooTow2_vol_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState _state;
  logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState tmp1;
  logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp2._p = _p;
  tmp2._T = _T;
  tmp1 = tmp2;
  logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_logic2_cooTow2_vol_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _state = omc_logic2_cooTow2_vol_dynBal_Medium_setState__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_logic2_cooTow2_vol_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_logic2_cooTow2_vol_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _h = omc_logic2_cooTow2_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLDirection
modelica_real omc_logic2_cooTow2_vol_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState _state)
{
  modelica_real _u;
  _tailrecursive: OMC_LABEL_UNUSED
  // _u has no default value.
  _u = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _u;
}
modelica_metatype boxptr_logic2_cooTow2_vol_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, modelica_metatype _state)
{
  logic2_cooTow2_vol_dynBal_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _u;
  modelica_metatype out_u;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _u = omc_logic2_cooTow2_vol_dynBal_Medium_specificInternalEnergy(threadData, tmp1);
  out_u = mmc_mk_rcon(_u);
  return out_u;
}

logic2_damEA_Medium_ThermodynamicState omc_logic2_damEA_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X)
{
  logic2_damEA_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  tmp1._X = omc_X;
  return tmp1;
}

modelica_metatype boxptr_logic2_damEA_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  return mmc_mk_box4(3, &logic2_damEA_Medium_ThermodynamicState__desc, _p, _T, _X);
}

logic2_damOA_Medium_ThermodynamicState omc_logic2_damOA_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X)
{
  logic2_damOA_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  tmp1._X = omc_X;
  return tmp1;
}

modelica_metatype boxptr_logic2_damOA_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  return mmc_mk_box4(3, &logic2_damOA_Medium_ThermodynamicState__desc, _p, _T, _X);
}

logic2_damRet_Medium_ThermodynamicState omc_logic2_damRet_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X)
{
  logic2_damRet_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  tmp1._X = omc_X;
  return tmp1;
}

modelica_metatype boxptr_logic2_damRet_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  return mmc_mk_box4(3, &logic2_damRet_Medium_ThermodynamicState__desc, _p, _T, _X);
}

logic2_expVesCHW_Medium_ThermodynamicState omc_logic2_expVesCHW_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_expVesCHW_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_expVesCHW_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_expVesCHW_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_expVesCHW_Medium_density(threadData_t *threadData, logic2_expVesCHW_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_logic2_expVesCHW_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  logic2_expVesCHW_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_logic2_expVesCHW_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
logic2_expVesCHW_Medium_ThermodynamicState omc_logic2_expVesCHW_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  logic2_expVesCHW_Medium_ThermodynamicState _state;
  logic2_expVesCHW_Medium_ThermodynamicState tmp1;
  logic2_expVesCHW_Medium_ThermodynamicState tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  logic2_expVesCHW_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp2._p = _p;
  tmp2._T = _T;
  tmp1 = tmp2;
  logic2_expVesCHW_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_logic2_expVesCHW_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  logic2_expVesCHW_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _state = omc_logic2_expVesCHW_Medium_setState__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &logic2_expVesCHW_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_logic2_expVesCHW_Medium_specificInternalEnergy(threadData_t *threadData, logic2_expVesCHW_Medium_ThermodynamicState _state)
{
  modelica_real _u;
  _tailrecursive: OMC_LABEL_UNUSED
  // _u has no default value.
  _u = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _u;
}
modelica_metatype boxptr_logic2_expVesCHW_Medium_specificInternalEnergy(threadData_t *threadData, modelica_metatype _state)
{
  logic2_expVesCHW_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _u;
  modelica_metatype out_u;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _u = omc_logic2_expVesCHW_Medium_specificInternalEnergy(threadData, tmp1);
  out_u = mmc_mk_rcon(_u);
  return out_u;
}

logic2_expVesChi_Medium_ThermodynamicState omc_logic2_expVesChi_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_expVesChi_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_expVesChi_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_expVesChi_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_expVesChi_Medium_density(threadData_t *threadData, logic2_expVesChi_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_logic2_expVesChi_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  logic2_expVesChi_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_logic2_expVesChi_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
logic2_expVesChi_Medium_ThermodynamicState omc_logic2_expVesChi_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  logic2_expVesChi_Medium_ThermodynamicState _state;
  logic2_expVesChi_Medium_ThermodynamicState tmp1;
  logic2_expVesChi_Medium_ThermodynamicState tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  logic2_expVesChi_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp2._p = _p;
  tmp2._T = _T;
  tmp1 = tmp2;
  logic2_expVesChi_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_logic2_expVesChi_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  logic2_expVesChi_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _state = omc_logic2_expVesChi_Medium_setState__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &logic2_expVesChi_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_logic2_expVesChi_Medium_specificInternalEnergy(threadData_t *threadData, logic2_expVesChi_Medium_ThermodynamicState _state)
{
  modelica_real _u;
  _tailrecursive: OMC_LABEL_UNUSED
  // _u has no default value.
  _u = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _u;
}
modelica_metatype boxptr_logic2_expVesChi_Medium_specificInternalEnergy(threadData_t *threadData, modelica_metatype _state)
{
  logic2_expVesChi_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _u;
  modelica_metatype out_u;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _u = omc_logic2_expVesChi_Medium_specificInternalEnergy(threadData, tmp1);
  out_u = mmc_mk_rcon(_u);
  return out_u;
}

logic2_expVesChi2_Medium_ThermodynamicState omc_logic2_expVesChi2_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_expVesChi2_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_expVesChi2_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_expVesChi2_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_expVesChi2_Medium_density(threadData_t *threadData, logic2_expVesChi2_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_logic2_expVesChi2_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  logic2_expVesChi2_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_logic2_expVesChi2_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
logic2_expVesChi2_Medium_ThermodynamicState omc_logic2_expVesChi2_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  logic2_expVesChi2_Medium_ThermodynamicState _state;
  logic2_expVesChi2_Medium_ThermodynamicState tmp1;
  logic2_expVesChi2_Medium_ThermodynamicState tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  logic2_expVesChi2_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp2._p = _p;
  tmp2._T = _T;
  tmp1 = tmp2;
  logic2_expVesChi2_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_logic2_expVesChi2_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  logic2_expVesChi2_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _state = omc_logic2_expVesChi2_Medium_setState__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &logic2_expVesChi2_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_logic2_expVesChi2_Medium_specificInternalEnergy(threadData_t *threadData, logic2_expVesChi2_Medium_ThermodynamicState _state)
{
  modelica_real _u;
  _tailrecursive: OMC_LABEL_UNUSED
  // _u has no default value.
  _u = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _u;
}
modelica_metatype boxptr_logic2_expVesChi2_Medium_specificInternalEnergy(threadData_t *threadData, modelica_metatype _state)
{
  logic2_expVesChi2_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _u;
  modelica_metatype out_u;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _u = omc_logic2_expVesChi2_Medium_specificInternalEnergy(threadData, tmp1);
  out_u = mmc_mk_rcon(_u);
  return out_u;
}

logic2_fanRet_Medium_ThermodynamicState omc_logic2_fanRet_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X)
{
  logic2_fanRet_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  tmp1._X = omc_X;
  return tmp1;
}

modelica_metatype boxptr_logic2_fanRet_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  return mmc_mk_box4(3, &logic2_fanRet_Medium_ThermodynamicState__desc, _p, _T, _X);
}

logic2_fanRet_preSou_Medium_ThermodynamicState omc_logic2_fanRet_preSou_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X)
{
  logic2_fanRet_preSou_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  tmp1._X = omc_X;
  return tmp1;
}

modelica_metatype boxptr_logic2_fanRet_preSou_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  return mmc_mk_box4(3, &logic2_fanRet_preSou_Medium_ThermodynamicState__desc, _p, _T, _X);
}

logic2_fanRet_vol_Medium_ThermodynamicState omc_logic2_fanRet_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X)
{
  logic2_fanRet_vol_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  tmp1._X = omc_X;
  return tmp1;
}

modelica_metatype boxptr_logic2_fanRet_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  return mmc_mk_box4(3, &logic2_fanRet_vol_Medium_ThermodynamicState__desc, _p, _T, _X);
}

logic2_fanRet_vol_steBal_Medium_ThermodynamicState omc_logic2_fanRet_vol_steBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X)
{
  logic2_fanRet_vol_steBal_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  tmp1._X = omc_X;
  return tmp1;
}

modelica_metatype boxptr_logic2_fanRet_vol_steBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  return mmc_mk_box4(3, &logic2_fanRet_vol_steBal_Medium_ThermodynamicState__desc, _p, _T, _X);
}

logic2_fanSup_Medium_ThermodynamicState omc_logic2_fanSup_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X)
{
  logic2_fanSup_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  tmp1._X = omc_X;
  return tmp1;
}

modelica_metatype boxptr_logic2_fanSup_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  return mmc_mk_box4(3, &logic2_fanSup_Medium_ThermodynamicState__desc, _p, _T, _X);
}

logic2_fanSup_preSou_Medium_ThermodynamicState omc_logic2_fanSup_preSou_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X)
{
  logic2_fanSup_preSou_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  tmp1._X = omc_X;
  return tmp1;
}

modelica_metatype boxptr_logic2_fanSup_preSou_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  return mmc_mk_box4(3, &logic2_fanSup_preSou_Medium_ThermodynamicState__desc, _p, _T, _X);
}

logic2_fanSup_vol_Medium_ThermodynamicState omc_logic2_fanSup_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X)
{
  logic2_fanSup_vol_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  tmp1._X = omc_X;
  return tmp1;
}

modelica_metatype boxptr_logic2_fanSup_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  return mmc_mk_box4(3, &logic2_fanSup_vol_Medium_ThermodynamicState__desc, _p, _T, _X);
}

logic2_fanSup_vol_steBal_Medium_ThermodynamicState omc_logic2_fanSup_vol_steBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X)
{
  logic2_fanSup_vol_steBal_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  tmp1._X = omc_X;
  return tmp1;
}

modelica_metatype boxptr_logic2_fanSup_vol_steBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  return mmc_mk_box4(3, &logic2_fanSup_vol_steBal_Medium_ThermodynamicState__desc, _p, _T, _X);
}

logic2_junCHWRet_res1_Medium_ThermodynamicState omc_logic2_junCHWRet_res1_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_junCHWRet_res1_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_junCHWRet_res1_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_junCHWRet_res1_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_junCHWRet_res1_Medium_dynamicViscosity(threadData_t *threadData, logic2_junCHWRet_res1_Medium_ThermodynamicState _state)
{
  modelica_real _eta;
  _tailrecursive: OMC_LABEL_UNUSED
  // _eta has no default value.
  _eta = 0.001;
  _return: OMC_LABEL_UNUSED
  return _eta;
}
modelica_metatype boxptr_logic2_junCHWRet_res1_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state)
{
  logic2_junCHWRet_res1_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _eta;
  modelica_metatype out_eta;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _eta = omc_logic2_junCHWRet_res1_Medium_dynamicViscosity(threadData, tmp1);
  out_eta = mmc_mk_rcon(_eta);
  return out_eta;
}

logic2_junCHWRet_res2_Medium_ThermodynamicState omc_logic2_junCHWRet_res2_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_junCHWRet_res2_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_junCHWRet_res2_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_junCHWRet_res2_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_junCHWRet_res2_Medium_dynamicViscosity(threadData_t *threadData, logic2_junCHWRet_res2_Medium_ThermodynamicState _state)
{
  modelica_real _eta;
  _tailrecursive: OMC_LABEL_UNUSED
  // _eta has no default value.
  _eta = 0.001;
  _return: OMC_LABEL_UNUSED
  return _eta;
}
modelica_metatype boxptr_logic2_junCHWRet_res2_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state)
{
  logic2_junCHWRet_res2_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _eta;
  modelica_metatype out_eta;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _eta = omc_logic2_junCHWRet_res2_Medium_dynamicViscosity(threadData, tmp1);
  out_eta = mmc_mk_rcon(_eta);
  return out_eta;
}

logic2_junCHWRet_res3_Medium_ThermodynamicState omc_logic2_junCHWRet_res3_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_junCHWRet_res3_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_junCHWRet_res3_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_junCHWRet_res3_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_junCHWRet_res3_Medium_dynamicViscosity(threadData_t *threadData, logic2_junCHWRet_res3_Medium_ThermodynamicState _state)
{
  modelica_real _eta;
  _tailrecursive: OMC_LABEL_UNUSED
  // _eta has no default value.
  _eta = 0.001;
  _return: OMC_LABEL_UNUSED
  return _eta;
}
modelica_metatype boxptr_logic2_junCHWRet_res3_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state)
{
  logic2_junCHWRet_res3_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _eta;
  modelica_metatype out_eta;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _eta = omc_logic2_junCHWRet_res3_Medium_dynamicViscosity(threadData, tmp1);
  out_eta = mmc_mk_rcon(_eta);
  return out_eta;
}

logic2_junCHWRet_vol_Medium_ThermodynamicState omc_logic2_junCHWRet_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_junCHWRet_vol_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_junCHWRet_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_junCHWRet_vol_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_junCHWRet_vol_Medium_density(threadData_t *threadData, logic2_junCHWRet_vol_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_logic2_junCHWRet_vol_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  logic2_junCHWRet_vol_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_logic2_junCHWRet_vol_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
modelica_real omc_logic2_junCHWRet_vol_Medium_temperature__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  modelica_real _T;
  modelica_real tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  tmp1 = 4184.0;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  _T = 273.15 + (_h) / tmp1;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_logic2_junCHWRet_vol_Medium_temperature__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _T;
  modelica_metatype out_T;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _T = omc_logic2_junCHWRet_vol_Medium_temperature__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState omc_logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_junCHWRet_vol_dynBal_Medium_density(threadData_t *threadData, logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_logic2_junCHWRet_vol_dynBal_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_logic2_junCHWRet_vol_dynBal_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState omc_logic2_junCHWRet_vol_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState _state;
  logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState tmp1;
  logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp2._p = _p;
  tmp2._T = _T;
  tmp1 = tmp2;
  logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_logic2_junCHWRet_vol_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _state = omc_logic2_junCHWRet_vol_dynBal_Medium_setState__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_logic2_junCHWRet_vol_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_logic2_junCHWRet_vol_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _h = omc_logic2_junCHWRet_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLDirection
modelica_real omc_logic2_junCHWRet_vol_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState _state)
{
  modelica_real _u;
  _tailrecursive: OMC_LABEL_UNUSED
  // _u has no default value.
  _u = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _u;
}
modelica_metatype boxptr_logic2_junCHWRet_vol_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, modelica_metatype _state)
{
  logic2_junCHWRet_vol_dynBal_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _u;
  modelica_metatype out_u;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _u = omc_logic2_junCHWRet_vol_dynBal_Medium_specificInternalEnergy(threadData, tmp1);
  out_u = mmc_mk_rcon(_u);
  return out_u;
}

logic2_junCHWRet2_res1_Medium_ThermodynamicState omc_logic2_junCHWRet2_res1_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_junCHWRet2_res1_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_junCHWRet2_res1_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_junCHWRet2_res1_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_junCHWRet2_res1_Medium_dynamicViscosity(threadData_t *threadData, logic2_junCHWRet2_res1_Medium_ThermodynamicState _state)
{
  modelica_real _eta;
  _tailrecursive: OMC_LABEL_UNUSED
  // _eta has no default value.
  _eta = 0.001;
  _return: OMC_LABEL_UNUSED
  return _eta;
}
modelica_metatype boxptr_logic2_junCHWRet2_res1_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state)
{
  logic2_junCHWRet2_res1_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _eta;
  modelica_metatype out_eta;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _eta = omc_logic2_junCHWRet2_res1_Medium_dynamicViscosity(threadData, tmp1);
  out_eta = mmc_mk_rcon(_eta);
  return out_eta;
}

logic2_junCHWRet2_res2_Medium_ThermodynamicState omc_logic2_junCHWRet2_res2_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_junCHWRet2_res2_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_junCHWRet2_res2_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_junCHWRet2_res2_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_junCHWRet2_res2_Medium_dynamicViscosity(threadData_t *threadData, logic2_junCHWRet2_res2_Medium_ThermodynamicState _state)
{
  modelica_real _eta;
  _tailrecursive: OMC_LABEL_UNUSED
  // _eta has no default value.
  _eta = 0.001;
  _return: OMC_LABEL_UNUSED
  return _eta;
}
modelica_metatype boxptr_logic2_junCHWRet2_res2_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state)
{
  logic2_junCHWRet2_res2_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _eta;
  modelica_metatype out_eta;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _eta = omc_logic2_junCHWRet2_res2_Medium_dynamicViscosity(threadData, tmp1);
  out_eta = mmc_mk_rcon(_eta);
  return out_eta;
}

logic2_junCHWRet2_res3_Medium_ThermodynamicState omc_logic2_junCHWRet2_res3_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_junCHWRet2_res3_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_junCHWRet2_res3_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_junCHWRet2_res3_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_junCHWRet2_res3_Medium_dynamicViscosity(threadData_t *threadData, logic2_junCHWRet2_res3_Medium_ThermodynamicState _state)
{
  modelica_real _eta;
  _tailrecursive: OMC_LABEL_UNUSED
  // _eta has no default value.
  _eta = 0.001;
  _return: OMC_LABEL_UNUSED
  return _eta;
}
modelica_metatype boxptr_logic2_junCHWRet2_res3_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state)
{
  logic2_junCHWRet2_res3_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _eta;
  modelica_metatype out_eta;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _eta = omc_logic2_junCHWRet2_res3_Medium_dynamicViscosity(threadData, tmp1);
  out_eta = mmc_mk_rcon(_eta);
  return out_eta;
}

logic2_junCHWRet2_vol_Medium_ThermodynamicState omc_logic2_junCHWRet2_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_junCHWRet2_vol_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_junCHWRet2_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_junCHWRet2_vol_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_junCHWRet2_vol_Medium_density(threadData_t *threadData, logic2_junCHWRet2_vol_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_logic2_junCHWRet2_vol_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  logic2_junCHWRet2_vol_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_logic2_junCHWRet2_vol_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
modelica_real omc_logic2_junCHWRet2_vol_Medium_temperature__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  modelica_real _T;
  modelica_real tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  tmp1 = 4184.0;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  _T = 273.15 + (_h) / tmp1;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_logic2_junCHWRet2_vol_Medium_temperature__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _T;
  modelica_metatype out_T;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _T = omc_logic2_junCHWRet2_vol_Medium_temperature__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState omc_logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_junCHWRet2_vol_dynBal_Medium_density(threadData_t *threadData, logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_logic2_junCHWRet2_vol_dynBal_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_logic2_junCHWRet2_vol_dynBal_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState omc_logic2_junCHWRet2_vol_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState _state;
  logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState tmp1;
  logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp2._p = _p;
  tmp2._T = _T;
  tmp1 = tmp2;
  logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_logic2_junCHWRet2_vol_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _state = omc_logic2_junCHWRet2_vol_dynBal_Medium_setState__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_logic2_junCHWRet2_vol_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_logic2_junCHWRet2_vol_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _h = omc_logic2_junCHWRet2_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLDirection
modelica_real omc_logic2_junCHWRet2_vol_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState _state)
{
  modelica_real _u;
  _tailrecursive: OMC_LABEL_UNUSED
  // _u has no default value.
  _u = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _u;
}
modelica_metatype boxptr_logic2_junCHWRet2_vol_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, modelica_metatype _state)
{
  logic2_junCHWRet2_vol_dynBal_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _u;
  modelica_metatype out_u;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _u = omc_logic2_junCHWRet2_vol_dynBal_Medium_specificInternalEnergy(threadData, tmp1);
  out_u = mmc_mk_rcon(_u);
  return out_u;
}

logic2_junCHWSup_res1_Medium_ThermodynamicState omc_logic2_junCHWSup_res1_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_junCHWSup_res1_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_junCHWSup_res1_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_junCHWSup_res1_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_junCHWSup_res1_Medium_dynamicViscosity(threadData_t *threadData, logic2_junCHWSup_res1_Medium_ThermodynamicState _state)
{
  modelica_real _eta;
  _tailrecursive: OMC_LABEL_UNUSED
  // _eta has no default value.
  _eta = 0.001;
  _return: OMC_LABEL_UNUSED
  return _eta;
}
modelica_metatype boxptr_logic2_junCHWSup_res1_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state)
{
  logic2_junCHWSup_res1_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _eta;
  modelica_metatype out_eta;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _eta = omc_logic2_junCHWSup_res1_Medium_dynamicViscosity(threadData, tmp1);
  out_eta = mmc_mk_rcon(_eta);
  return out_eta;
}

logic2_junCHWSup_res2_Medium_ThermodynamicState omc_logic2_junCHWSup_res2_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_junCHWSup_res2_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_junCHWSup_res2_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_junCHWSup_res2_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_junCHWSup_res2_Medium_dynamicViscosity(threadData_t *threadData, logic2_junCHWSup_res2_Medium_ThermodynamicState _state)
{
  modelica_real _eta;
  _tailrecursive: OMC_LABEL_UNUSED
  // _eta has no default value.
  _eta = 0.001;
  _return: OMC_LABEL_UNUSED
  return _eta;
}
modelica_metatype boxptr_logic2_junCHWSup_res2_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state)
{
  logic2_junCHWSup_res2_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _eta;
  modelica_metatype out_eta;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _eta = omc_logic2_junCHWSup_res2_Medium_dynamicViscosity(threadData, tmp1);
  out_eta = mmc_mk_rcon(_eta);
  return out_eta;
}

logic2_junCHWSup_res3_Medium_ThermodynamicState omc_logic2_junCHWSup_res3_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_junCHWSup_res3_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_junCHWSup_res3_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_junCHWSup_res3_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_junCHWSup_res3_Medium_dynamicViscosity(threadData_t *threadData, logic2_junCHWSup_res3_Medium_ThermodynamicState _state)
{
  modelica_real _eta;
  _tailrecursive: OMC_LABEL_UNUSED
  // _eta has no default value.
  _eta = 0.001;
  _return: OMC_LABEL_UNUSED
  return _eta;
}
modelica_metatype boxptr_logic2_junCHWSup_res3_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state)
{
  logic2_junCHWSup_res3_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _eta;
  modelica_metatype out_eta;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _eta = omc_logic2_junCHWSup_res3_Medium_dynamicViscosity(threadData, tmp1);
  out_eta = mmc_mk_rcon(_eta);
  return out_eta;
}

logic2_junCHWSup_vol_Medium_ThermodynamicState omc_logic2_junCHWSup_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_junCHWSup_vol_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_junCHWSup_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_junCHWSup_vol_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_junCHWSup_vol_Medium_density(threadData_t *threadData, logic2_junCHWSup_vol_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_logic2_junCHWSup_vol_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  logic2_junCHWSup_vol_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_logic2_junCHWSup_vol_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
modelica_real omc_logic2_junCHWSup_vol_Medium_temperature__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  modelica_real _T;
  modelica_real tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  tmp1 = 4184.0;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  _T = 273.15 + (_h) / tmp1;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_logic2_junCHWSup_vol_Medium_temperature__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _T;
  modelica_metatype out_T;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _T = omc_logic2_junCHWSup_vol_Medium_temperature__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState omc_logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_junCHWSup_vol_dynBal_Medium_density(threadData_t *threadData, logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_logic2_junCHWSup_vol_dynBal_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_logic2_junCHWSup_vol_dynBal_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState omc_logic2_junCHWSup_vol_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState _state;
  logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState tmp1;
  logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp2._p = _p;
  tmp2._T = _T;
  tmp1 = tmp2;
  logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_logic2_junCHWSup_vol_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _state = omc_logic2_junCHWSup_vol_dynBal_Medium_setState__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_logic2_junCHWSup_vol_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_logic2_junCHWSup_vol_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _h = omc_logic2_junCHWSup_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLDirection
modelica_real omc_logic2_junCHWSup_vol_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState _state)
{
  modelica_real _u;
  _tailrecursive: OMC_LABEL_UNUSED
  // _u has no default value.
  _u = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _u;
}
modelica_metatype boxptr_logic2_junCHWSup_vol_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, modelica_metatype _state)
{
  logic2_junCHWSup_vol_dynBal_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _u;
  modelica_metatype out_u;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _u = omc_logic2_junCHWSup_vol_dynBal_Medium_specificInternalEnergy(threadData, tmp1);
  out_u = mmc_mk_rcon(_u);
  return out_u;
}

logic2_junCHWSup2_res1_Medium_ThermodynamicState omc_logic2_junCHWSup2_res1_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_junCHWSup2_res1_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_junCHWSup2_res1_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_junCHWSup2_res1_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_junCHWSup2_res1_Medium_dynamicViscosity(threadData_t *threadData, logic2_junCHWSup2_res1_Medium_ThermodynamicState _state)
{
  modelica_real _eta;
  _tailrecursive: OMC_LABEL_UNUSED
  // _eta has no default value.
  _eta = 0.001;
  _return: OMC_LABEL_UNUSED
  return _eta;
}
modelica_metatype boxptr_logic2_junCHWSup2_res1_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state)
{
  logic2_junCHWSup2_res1_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _eta;
  modelica_metatype out_eta;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _eta = omc_logic2_junCHWSup2_res1_Medium_dynamicViscosity(threadData, tmp1);
  out_eta = mmc_mk_rcon(_eta);
  return out_eta;
}

logic2_junCHWSup2_res2_Medium_ThermodynamicState omc_logic2_junCHWSup2_res2_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_junCHWSup2_res2_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_junCHWSup2_res2_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_junCHWSup2_res2_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_junCHWSup2_res2_Medium_dynamicViscosity(threadData_t *threadData, logic2_junCHWSup2_res2_Medium_ThermodynamicState _state)
{
  modelica_real _eta;
  _tailrecursive: OMC_LABEL_UNUSED
  // _eta has no default value.
  _eta = 0.001;
  _return: OMC_LABEL_UNUSED
  return _eta;
}
modelica_metatype boxptr_logic2_junCHWSup2_res2_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state)
{
  logic2_junCHWSup2_res2_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _eta;
  modelica_metatype out_eta;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _eta = omc_logic2_junCHWSup2_res2_Medium_dynamicViscosity(threadData, tmp1);
  out_eta = mmc_mk_rcon(_eta);
  return out_eta;
}

logic2_junCHWSup2_res3_Medium_ThermodynamicState omc_logic2_junCHWSup2_res3_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_junCHWSup2_res3_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_junCHWSup2_res3_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_junCHWSup2_res3_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_junCHWSup2_res3_Medium_dynamicViscosity(threadData_t *threadData, logic2_junCHWSup2_res3_Medium_ThermodynamicState _state)
{
  modelica_real _eta;
  _tailrecursive: OMC_LABEL_UNUSED
  // _eta has no default value.
  _eta = 0.001;
  _return: OMC_LABEL_UNUSED
  return _eta;
}
modelica_metatype boxptr_logic2_junCHWSup2_res3_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state)
{
  logic2_junCHWSup2_res3_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _eta;
  modelica_metatype out_eta;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _eta = omc_logic2_junCHWSup2_res3_Medium_dynamicViscosity(threadData, tmp1);
  out_eta = mmc_mk_rcon(_eta);
  return out_eta;
}

logic2_junCHWSup2_vol_Medium_ThermodynamicState omc_logic2_junCHWSup2_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_junCHWSup2_vol_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_junCHWSup2_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_junCHWSup2_vol_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_junCHWSup2_vol_Medium_density(threadData_t *threadData, logic2_junCHWSup2_vol_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_logic2_junCHWSup2_vol_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  logic2_junCHWSup2_vol_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_logic2_junCHWSup2_vol_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
modelica_real omc_logic2_junCHWSup2_vol_Medium_temperature__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  modelica_real _T;
  modelica_real tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  tmp1 = 4184.0;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  _T = 273.15 + (_h) / tmp1;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_logic2_junCHWSup2_vol_Medium_temperature__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _T;
  modelica_metatype out_T;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _T = omc_logic2_junCHWSup2_vol_Medium_temperature__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState omc_logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_junCHWSup2_vol_dynBal_Medium_density(threadData_t *threadData, logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_logic2_junCHWSup2_vol_dynBal_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_logic2_junCHWSup2_vol_dynBal_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState omc_logic2_junCHWSup2_vol_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState _state;
  logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState tmp1;
  logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp2._p = _p;
  tmp2._T = _T;
  tmp1 = tmp2;
  logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_logic2_junCHWSup2_vol_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _state = omc_logic2_junCHWSup2_vol_dynBal_Medium_setState__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_logic2_junCHWSup2_vol_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_logic2_junCHWSup2_vol_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _h = omc_logic2_junCHWSup2_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLDirection
modelica_real omc_logic2_junCHWSup2_vol_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState _state)
{
  modelica_real _u;
  _tailrecursive: OMC_LABEL_UNUSED
  // _u has no default value.
  _u = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _u;
}
modelica_metatype boxptr_logic2_junCHWSup2_vol_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, modelica_metatype _state)
{
  logic2_junCHWSup2_vol_dynBal_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _u;
  modelica_metatype out_u;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _u = omc_logic2_junCHWSup2_vol_dynBal_Medium_specificInternalEnergy(threadData, tmp1);
  out_u = mmc_mk_rcon(_u);
  return out_u;
}

logic2_junOut_res1_Medium_ThermodynamicState omc_logic2_junOut_res1_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X)
{
  logic2_junOut_res1_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  tmp1._X = omc_X;
  return tmp1;
}

modelica_metatype boxptr_logic2_junOut_res1_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  return mmc_mk_box4(3, &logic2_junOut_res1_Medium_ThermodynamicState__desc, _p, _T, _X);
}

logic2_junOut_res2_Medium_ThermodynamicState omc_logic2_junOut_res2_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X)
{
  logic2_junOut_res2_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  tmp1._X = omc_X;
  return tmp1;
}

modelica_metatype boxptr_logic2_junOut_res2_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  return mmc_mk_box4(3, &logic2_junOut_res2_Medium_ThermodynamicState__desc, _p, _T, _X);
}

logic2_junOut_res3_Medium_ThermodynamicState omc_logic2_junOut_res3_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X)
{
  logic2_junOut_res3_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  tmp1._X = omc_X;
  return tmp1;
}

modelica_metatype boxptr_logic2_junOut_res3_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  return mmc_mk_box4(3, &logic2_junOut_res3_Medium_ThermodynamicState__desc, _p, _T, _X);
}

logic2_junOut_vol_Medium_ThermodynamicState omc_logic2_junOut_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X)
{
  logic2_junOut_vol_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  tmp1._X = omc_X;
  return tmp1;
}

modelica_metatype boxptr_logic2_junOut_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  return mmc_mk_box4(3, &logic2_junOut_vol_Medium_ThermodynamicState__desc, _p, _T, _X);
}

logic2_junOut_vol_dynBal_Medium_ThermodynamicState omc_logic2_junOut_vol_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X)
{
  logic2_junOut_vol_dynBal_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  tmp1._X = omc_X;
  return tmp1;
}

modelica_metatype boxptr_logic2_junOut_vol_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  return mmc_mk_box4(3, &logic2_junOut_vol_dynBal_Medium_ThermodynamicState__desc, _p, _T, _X);
}

logic2_junRet_res1_Medium_ThermodynamicState omc_logic2_junRet_res1_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X)
{
  logic2_junRet_res1_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  tmp1._X = omc_X;
  return tmp1;
}

modelica_metatype boxptr_logic2_junRet_res1_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  return mmc_mk_box4(3, &logic2_junRet_res1_Medium_ThermodynamicState__desc, _p, _T, _X);
}

logic2_junRet_res2_Medium_ThermodynamicState omc_logic2_junRet_res2_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X)
{
  logic2_junRet_res2_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  tmp1._X = omc_X;
  return tmp1;
}

modelica_metatype boxptr_logic2_junRet_res2_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  return mmc_mk_box4(3, &logic2_junRet_res2_Medium_ThermodynamicState__desc, _p, _T, _X);
}

logic2_junRet_res3_Medium_ThermodynamicState omc_logic2_junRet_res3_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X)
{
  logic2_junRet_res3_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  tmp1._X = omc_X;
  return tmp1;
}

modelica_metatype boxptr_logic2_junRet_res3_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  return mmc_mk_box4(3, &logic2_junRet_res3_Medium_ThermodynamicState__desc, _p, _T, _X);
}

logic2_junRet_vol_Medium_ThermodynamicState omc_logic2_junRet_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X)
{
  logic2_junRet_vol_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  tmp1._X = omc_X;
  return tmp1;
}

modelica_metatype boxptr_logic2_junRet_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  return mmc_mk_box4(3, &logic2_junRet_vol_Medium_ThermodynamicState__desc, _p, _T, _X);
}

logic2_junRet_vol_dynBal_Medium_ThermodynamicState omc_logic2_junRet_vol_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X)
{
  logic2_junRet_vol_dynBal_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  tmp1._X = omc_X;
  return tmp1;
}

modelica_metatype boxptr_logic2_junRet_vol_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  return mmc_mk_box4(3, &logic2_junRet_vol_dynBal_Medium_ThermodynamicState__desc, _p, _T, _X);
}

logic2_out_Medium_ThermodynamicState omc_logic2_out_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X)
{
  logic2_out_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  tmp1._X = omc_X;
  return tmp1;
}

modelica_metatype boxptr_logic2_out_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  return mmc_mk_box4(3, &logic2_out_Medium_ThermodynamicState__desc, _p, _T, _X);
}

logic2_pumCHW_Medium_ThermodynamicState omc_logic2_pumCHW_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_pumCHW_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_pumCHW_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_pumCHW_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_pumCHW_Medium_specificEnthalpy(threadData_t *threadData, logic2_pumCHW_Medium_ThermodynamicState _state)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_logic2_pumCHW_Medium_specificEnthalpy(threadData_t *threadData, modelica_metatype _state)
{
  logic2_pumCHW_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _h;
  modelica_metatype out_h;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _h = omc_logic2_pumCHW_Medium_specificEnthalpy(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

logic2_pumCHW_preSou_Medium_ThermodynamicState omc_logic2_pumCHW_preSou_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_pumCHW_preSou_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_pumCHW_preSou_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_pumCHW_preSou_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_pumCHW_preSou_Medium_density(threadData_t *threadData, logic2_pumCHW_preSou_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_logic2_pumCHW_preSou_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  logic2_pumCHW_preSou_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_logic2_pumCHW_preSou_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
logic2_pumCHW_preSou_Medium_ThermodynamicState omc_logic2_pumCHW_preSou_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  logic2_pumCHW_preSou_Medium_ThermodynamicState _state;
  logic2_pumCHW_preSou_Medium_ThermodynamicState tmp1;
  logic2_pumCHW_preSou_Medium_ThermodynamicState tmp2;
  modelica_real tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  logic2_pumCHW_preSou_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp3 = 4184.0;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  tmp2._p = _p;
  tmp2._T = 273.15 + (_h) / tmp3;
  tmp1 = tmp2;
  logic2_pumCHW_preSou_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_logic2_pumCHW_preSou_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  logic2_pumCHW_preSou_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _state = omc_logic2_pumCHW_preSou_Medium_setState__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &logic2_pumCHW_preSou_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

logic2_pumCHW_vol_Medium_ThermodynamicState omc_logic2_pumCHW_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_pumCHW_vol_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_pumCHW_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_pumCHW_vol_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_pumCHW_vol_Medium_density(threadData_t *threadData, logic2_pumCHW_vol_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_logic2_pumCHW_vol_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  logic2_pumCHW_vol_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_logic2_pumCHW_vol_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
modelica_real omc_logic2_pumCHW_vol_Medium_temperature__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  modelica_real _T;
  modelica_real tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  tmp1 = 4184.0;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  _T = 273.15 + (_h) / tmp1;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_logic2_pumCHW_vol_Medium_temperature__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _T;
  modelica_metatype out_T;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _T = omc_logic2_pumCHW_vol_Medium_temperature__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState omc_logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_pumCHW_vol_dynBal_Medium_density(threadData_t *threadData, logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_logic2_pumCHW_vol_dynBal_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_logic2_pumCHW_vol_dynBal_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState omc_logic2_pumCHW_vol_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState _state;
  logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState tmp1;
  logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp2._p = _p;
  tmp2._T = _T;
  tmp1 = tmp2;
  logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_logic2_pumCHW_vol_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _state = omc_logic2_pumCHW_vol_dynBal_Medium_setState__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_logic2_pumCHW_vol_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_logic2_pumCHW_vol_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _h = omc_logic2_pumCHW_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLDirection
modelica_real omc_logic2_pumCHW_vol_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState _state)
{
  modelica_real _u;
  _tailrecursive: OMC_LABEL_UNUSED
  // _u has no default value.
  _u = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _u;
}
modelica_metatype boxptr_logic2_pumCHW_vol_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, modelica_metatype _state)
{
  logic2_pumCHW_vol_dynBal_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _u;
  modelica_metatype out_u;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _u = omc_logic2_pumCHW_vol_dynBal_Medium_specificInternalEnergy(threadData, tmp1);
  out_u = mmc_mk_rcon(_u);
  return out_u;
}

logic2_pumCHW2_Medium_ThermodynamicState omc_logic2_pumCHW2_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_pumCHW2_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_pumCHW2_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_pumCHW2_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_pumCHW2_Medium_specificEnthalpy(threadData_t *threadData, logic2_pumCHW2_Medium_ThermodynamicState _state)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_logic2_pumCHW2_Medium_specificEnthalpy(threadData_t *threadData, modelica_metatype _state)
{
  logic2_pumCHW2_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _h;
  modelica_metatype out_h;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _h = omc_logic2_pumCHW2_Medium_specificEnthalpy(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

logic2_pumCHW2_preSou_Medium_ThermodynamicState omc_logic2_pumCHW2_preSou_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_pumCHW2_preSou_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_pumCHW2_preSou_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_pumCHW2_preSou_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_pumCHW2_preSou_Medium_density(threadData_t *threadData, logic2_pumCHW2_preSou_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_logic2_pumCHW2_preSou_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  logic2_pumCHW2_preSou_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_logic2_pumCHW2_preSou_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
logic2_pumCHW2_preSou_Medium_ThermodynamicState omc_logic2_pumCHW2_preSou_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  logic2_pumCHW2_preSou_Medium_ThermodynamicState _state;
  logic2_pumCHW2_preSou_Medium_ThermodynamicState tmp1;
  logic2_pumCHW2_preSou_Medium_ThermodynamicState tmp2;
  modelica_real tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  logic2_pumCHW2_preSou_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp3 = 4184.0;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  tmp2._p = _p;
  tmp2._T = 273.15 + (_h) / tmp3;
  tmp1 = tmp2;
  logic2_pumCHW2_preSou_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_logic2_pumCHW2_preSou_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  logic2_pumCHW2_preSou_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _state = omc_logic2_pumCHW2_preSou_Medium_setState__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &logic2_pumCHW2_preSou_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

logic2_pumCHW2_vol_Medium_ThermodynamicState omc_logic2_pumCHW2_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_pumCHW2_vol_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_pumCHW2_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_pumCHW2_vol_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_pumCHW2_vol_Medium_density(threadData_t *threadData, logic2_pumCHW2_vol_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_logic2_pumCHW2_vol_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  logic2_pumCHW2_vol_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_logic2_pumCHW2_vol_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
modelica_real omc_logic2_pumCHW2_vol_Medium_temperature__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  modelica_real _T;
  modelica_real tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  tmp1 = 4184.0;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  _T = 273.15 + (_h) / tmp1;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_logic2_pumCHW2_vol_Medium_temperature__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _T;
  modelica_metatype out_T;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _T = omc_logic2_pumCHW2_vol_Medium_temperature__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState omc_logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_pumCHW2_vol_dynBal_Medium_density(threadData_t *threadData, logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_logic2_pumCHW2_vol_dynBal_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_logic2_pumCHW2_vol_dynBal_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState omc_logic2_pumCHW2_vol_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState _state;
  logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState tmp1;
  logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp2._p = _p;
  tmp2._T = _T;
  tmp1 = tmp2;
  logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_logic2_pumCHW2_vol_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _state = omc_logic2_pumCHW2_vol_dynBal_Medium_setState__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_logic2_pumCHW2_vol_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_logic2_pumCHW2_vol_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _h = omc_logic2_pumCHW2_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLDirection
modelica_real omc_logic2_pumCHW2_vol_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState _state)
{
  modelica_real _u;
  _tailrecursive: OMC_LABEL_UNUSED
  // _u has no default value.
  _u = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _u;
}
modelica_metatype boxptr_logic2_pumCHW2_vol_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, modelica_metatype _state)
{
  logic2_pumCHW2_vol_dynBal_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _u;
  modelica_metatype out_u;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _u = omc_logic2_pumCHW2_vol_dynBal_Medium_specificInternalEnergy(threadData, tmp1);
  out_u = mmc_mk_rcon(_u);
  return out_u;
}

logic2_pumCW_Medium_ThermodynamicState omc_logic2_pumCW_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_pumCW_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_pumCW_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_pumCW_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_pumCW_Medium_specificEnthalpy(threadData_t *threadData, logic2_pumCW_Medium_ThermodynamicState _state)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_logic2_pumCW_Medium_specificEnthalpy(threadData_t *threadData, modelica_metatype _state)
{
  logic2_pumCW_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _h;
  modelica_metatype out_h;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _h = omc_logic2_pumCW_Medium_specificEnthalpy(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

logic2_pumCW_preSou_Medium_ThermodynamicState omc_logic2_pumCW_preSou_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_pumCW_preSou_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_pumCW_preSou_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_pumCW_preSou_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_pumCW_preSou_Medium_density(threadData_t *threadData, logic2_pumCW_preSou_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_logic2_pumCW_preSou_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  logic2_pumCW_preSou_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_logic2_pumCW_preSou_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
logic2_pumCW_preSou_Medium_ThermodynamicState omc_logic2_pumCW_preSou_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  logic2_pumCW_preSou_Medium_ThermodynamicState _state;
  logic2_pumCW_preSou_Medium_ThermodynamicState tmp1;
  logic2_pumCW_preSou_Medium_ThermodynamicState tmp2;
  modelica_real tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  logic2_pumCW_preSou_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp3 = 4184.0;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  tmp2._p = _p;
  tmp2._T = 273.15 + (_h) / tmp3;
  tmp1 = tmp2;
  logic2_pumCW_preSou_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_logic2_pumCW_preSou_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  logic2_pumCW_preSou_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _state = omc_logic2_pumCW_preSou_Medium_setState__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &logic2_pumCW_preSou_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

logic2_pumCW_vol_Medium_ThermodynamicState omc_logic2_pumCW_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_pumCW_vol_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_pumCW_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_pumCW_vol_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_pumCW_vol_Medium_density(threadData_t *threadData, logic2_pumCW_vol_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_logic2_pumCW_vol_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  logic2_pumCW_vol_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_logic2_pumCW_vol_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
modelica_real omc_logic2_pumCW_vol_Medium_temperature__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  modelica_real _T;
  modelica_real tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  tmp1 = 4184.0;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  _T = 273.15 + (_h) / tmp1;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_logic2_pumCW_vol_Medium_temperature__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _T;
  modelica_metatype out_T;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _T = omc_logic2_pumCW_vol_Medium_temperature__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

logic2_pumCW_vol_dynBal_Medium_ThermodynamicState omc_logic2_pumCW_vol_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_pumCW_vol_dynBal_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_pumCW_vol_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_pumCW_vol_dynBal_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_pumCW_vol_dynBal_Medium_density(threadData_t *threadData, logic2_pumCW_vol_dynBal_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_logic2_pumCW_vol_dynBal_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  logic2_pumCW_vol_dynBal_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_logic2_pumCW_vol_dynBal_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
logic2_pumCW_vol_dynBal_Medium_ThermodynamicState omc_logic2_pumCW_vol_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  logic2_pumCW_vol_dynBal_Medium_ThermodynamicState _state;
  logic2_pumCW_vol_dynBal_Medium_ThermodynamicState tmp1;
  logic2_pumCW_vol_dynBal_Medium_ThermodynamicState tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  logic2_pumCW_vol_dynBal_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp2._p = _p;
  tmp2._T = _T;
  tmp1 = tmp2;
  logic2_pumCW_vol_dynBal_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_logic2_pumCW_vol_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  logic2_pumCW_vol_dynBal_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _state = omc_logic2_pumCW_vol_dynBal_Medium_setState__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &logic2_pumCW_vol_dynBal_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_logic2_pumCW_vol_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_logic2_pumCW_vol_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _h = omc_logic2_pumCW_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLDirection
modelica_real omc_logic2_pumCW_vol_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, logic2_pumCW_vol_dynBal_Medium_ThermodynamicState _state)
{
  modelica_real _u;
  _tailrecursive: OMC_LABEL_UNUSED
  // _u has no default value.
  _u = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _u;
}
modelica_metatype boxptr_logic2_pumCW_vol_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, modelica_metatype _state)
{
  logic2_pumCW_vol_dynBal_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _u;
  modelica_metatype out_u;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _u = omc_logic2_pumCW_vol_dynBal_Medium_specificInternalEnergy(threadData, tmp1);
  out_u = mmc_mk_rcon(_u);
  return out_u;
}

logic2_pumCW2_Medium_ThermodynamicState omc_logic2_pumCW2_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_pumCW2_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_pumCW2_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_pumCW2_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_pumCW2_Medium_specificEnthalpy(threadData_t *threadData, logic2_pumCW2_Medium_ThermodynamicState _state)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_logic2_pumCW2_Medium_specificEnthalpy(threadData_t *threadData, modelica_metatype _state)
{
  logic2_pumCW2_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _h;
  modelica_metatype out_h;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _h = omc_logic2_pumCW2_Medium_specificEnthalpy(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

logic2_pumCW2_preSou_Medium_ThermodynamicState omc_logic2_pumCW2_preSou_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_pumCW2_preSou_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_pumCW2_preSou_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_pumCW2_preSou_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_pumCW2_preSou_Medium_density(threadData_t *threadData, logic2_pumCW2_preSou_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_logic2_pumCW2_preSou_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  logic2_pumCW2_preSou_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_logic2_pumCW2_preSou_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
logic2_pumCW2_preSou_Medium_ThermodynamicState omc_logic2_pumCW2_preSou_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  logic2_pumCW2_preSou_Medium_ThermodynamicState _state;
  logic2_pumCW2_preSou_Medium_ThermodynamicState tmp1;
  logic2_pumCW2_preSou_Medium_ThermodynamicState tmp2;
  modelica_real tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  logic2_pumCW2_preSou_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp3 = 4184.0;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  tmp2._p = _p;
  tmp2._T = 273.15 + (_h) / tmp3;
  tmp1 = tmp2;
  logic2_pumCW2_preSou_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_logic2_pumCW2_preSou_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  logic2_pumCW2_preSou_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _state = omc_logic2_pumCW2_preSou_Medium_setState__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &logic2_pumCW2_preSou_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

logic2_pumCW2_vol_Medium_ThermodynamicState omc_logic2_pumCW2_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_pumCW2_vol_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_pumCW2_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_pumCW2_vol_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_pumCW2_vol_Medium_density(threadData_t *threadData, logic2_pumCW2_vol_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_logic2_pumCW2_vol_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  logic2_pumCW2_vol_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_logic2_pumCW2_vol_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
modelica_real omc_logic2_pumCW2_vol_Medium_temperature__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  modelica_real _T;
  modelica_real tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  tmp1 = 4184.0;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  _T = 273.15 + (_h) / tmp1;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_logic2_pumCW2_vol_Medium_temperature__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _T;
  modelica_metatype out_T;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _T = omc_logic2_pumCW2_vol_Medium_temperature__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState omc_logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_pumCW2_vol_dynBal_Medium_density(threadData_t *threadData, logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_logic2_pumCW2_vol_dynBal_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_logic2_pumCW2_vol_dynBal_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState omc_logic2_pumCW2_vol_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState _state;
  logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState tmp1;
  logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp2._p = _p;
  tmp2._T = _T;
  tmp1 = tmp2;
  logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_logic2_pumCW2_vol_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _state = omc_logic2_pumCW2_vol_dynBal_Medium_setState__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_logic2_pumCW2_vol_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_logic2_pumCW2_vol_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _h = omc_logic2_pumCW2_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLDirection
modelica_real omc_logic2_pumCW2_vol_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState _state)
{
  modelica_real _u;
  _tailrecursive: OMC_LABEL_UNUSED
  // _u has no default value.
  _u = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _u;
}
modelica_metatype boxptr_logic2_pumCW2_vol_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, modelica_metatype _state)
{
  logic2_pumCW2_vol_dynBal_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _u;
  modelica_metatype out_u;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _u = omc_logic2_pumCW2_vol_dynBal_Medium_specificInternalEnergy(threadData, tmp1);
  out_u = mmc_mk_rcon(_u);
  return out_u;
}

logic2_val1_Medium_ThermodynamicState omc_logic2_val1_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_val1_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_val1_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_val1_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_val1_Medium_dynamicViscosity(threadData_t *threadData, logic2_val1_Medium_ThermodynamicState _state)
{
  modelica_real _eta;
  _tailrecursive: OMC_LABEL_UNUSED
  // _eta has no default value.
  _eta = 0.001;
  _return: OMC_LABEL_UNUSED
  return _eta;
}
modelica_metatype boxptr_logic2_val1_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state)
{
  logic2_val1_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _eta;
  modelica_metatype out_eta;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _eta = omc_logic2_val1_Medium_dynamicViscosity(threadData, tmp1);
  out_eta = mmc_mk_rcon(_eta);
  return out_eta;
}

logic2_val5_Medium_ThermodynamicState omc_logic2_val5_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_val5_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_val5_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_val5_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_val5_Medium_dynamicViscosity(threadData_t *threadData, logic2_val5_Medium_ThermodynamicState _state)
{
  modelica_real _eta;
  _tailrecursive: OMC_LABEL_UNUSED
  // _eta has no default value.
  _eta = 0.001;
  _return: OMC_LABEL_UNUSED
  return _eta;
}
modelica_metatype boxptr_logic2_val5_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state)
{
  logic2_val5_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _eta;
  modelica_metatype out_eta;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _eta = omc_logic2_val5_Medium_dynamicViscosity(threadData, tmp1);
  out_eta = mmc_mk_rcon(_eta);
  return out_eta;
}

logic2_val6_Medium_ThermodynamicState omc_logic2_val6_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_val6_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_val6_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_val6_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_val6_Medium_dynamicViscosity(threadData_t *threadData, logic2_val6_Medium_ThermodynamicState _state)
{
  modelica_real _eta;
  _tailrecursive: OMC_LABEL_UNUSED
  // _eta has no default value.
  _eta = 0.001;
  _return: OMC_LABEL_UNUSED
  return _eta;
}
modelica_metatype boxptr_logic2_val6_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state)
{
  logic2_val6_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _eta;
  modelica_metatype out_eta;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _eta = omc_logic2_val6_Medium_dynamicViscosity(threadData, tmp1);
  out_eta = mmc_mk_rcon(_eta);
  return out_eta;
}

logic2_val7_Medium_ThermodynamicState omc_logic2_val7_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_val7_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_val7_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_val7_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_val7_Medium_dynamicViscosity(threadData_t *threadData, logic2_val7_Medium_ThermodynamicState _state)
{
  modelica_real _eta;
  _tailrecursive: OMC_LABEL_UNUSED
  // _eta has no default value.
  _eta = 0.001;
  _return: OMC_LABEL_UNUSED
  return _eta;
}
modelica_metatype boxptr_logic2_val7_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state)
{
  logic2_val7_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _eta;
  modelica_metatype out_eta;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _eta = omc_logic2_val7_Medium_dynamicViscosity(threadData, tmp1);
  out_eta = mmc_mk_rcon(_eta);
  return out_eta;
}

logic2_val8_Medium_ThermodynamicState omc_logic2_val8_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_val8_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_val8_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_val8_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_val8_Medium_dynamicViscosity(threadData_t *threadData, logic2_val8_Medium_ThermodynamicState _state)
{
  modelica_real _eta;
  _tailrecursive: OMC_LABEL_UNUSED
  // _eta has no default value.
  _eta = 0.001;
  _return: OMC_LABEL_UNUSED
  return _eta;
}
modelica_metatype boxptr_logic2_val8_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state)
{
  logic2_val8_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _eta;
  modelica_metatype out_eta;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _eta = omc_logic2_val8_Medium_dynamicViscosity(threadData, tmp1);
  out_eta = mmc_mk_rcon(_eta);
  return out_eta;
}

logic2_val8__2_Medium_ThermodynamicState omc_logic2_val8__2_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_val8__2_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_val8__2_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_val8__2_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_val8__2_Medium_dynamicViscosity(threadData_t *threadData, logic2_val8__2_Medium_ThermodynamicState _state)
{
  modelica_real _eta;
  _tailrecursive: OMC_LABEL_UNUSED
  // _eta has no default value.
  _eta = 0.001;
  _return: OMC_LABEL_UNUSED
  return _eta;
}
modelica_metatype boxptr_logic2_val8__2_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state)
{
  logic2_val8__2_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _eta;
  modelica_metatype out_eta;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _eta = omc_logic2_val8__2_Medium_dynamicViscosity(threadData, tmp1);
  out_eta = mmc_mk_rcon(_eta);
  return out_eta;
}

logic2_valByp_Medium_ThermodynamicState omc_logic2_valByp_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  logic2_valByp_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_logic2_valByp_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &logic2_valByp_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_logic2_valByp_Medium_dynamicViscosity(threadData_t *threadData, logic2_valByp_Medium_ThermodynamicState _state)
{
  modelica_real _eta;
  _tailrecursive: OMC_LABEL_UNUSED
  // _eta has no default value.
  _eta = 0.001;
  _return: OMC_LABEL_UNUSED
  return _eta;
}
modelica_metatype boxptr_logic2_valByp_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state)
{
  logic2_valByp_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _eta;
  modelica_metatype out_eta;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _eta = omc_logic2_valByp_Medium_dynamicViscosity(threadData, tmp1);
  out_eta = mmc_mk_rcon(_eta);
  return out_eta;
}

logic2_vol_Medium_ThermodynamicState omc_logic2_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X)
{
  logic2_vol_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  tmp1._X = omc_X;
  return tmp1;
}

modelica_metatype boxptr_logic2_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  return mmc_mk_box4(3, &logic2_vol_Medium_ThermodynamicState__desc, _p, _T, _X);
}

logic2_vol_dynBal_Medium_ThermodynamicState omc_logic2_vol_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, real_array omc_X)
{
  logic2_vol_dynBal_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  tmp1._X = omc_X;
  return tmp1;
}

modelica_metatype boxptr_logic2_vol_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  return mmc_mk_box4(3, &logic2_vol_dynBal_Medium_ThermodynamicState__desc, _p, _T, _X);
}

#ifdef __cplusplus
}
#endif
