/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "logic2_raw_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void logic2_raw_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
  /* sample 1 */
  data->modelData->samplesInfo[i].index = 1;
  data->modelData->samplesInfo[i].start = 0.0;
  data->modelData->samplesInfo[i].interval = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[418]] /* chillerStagingCtrl.samplePeriod PARAM */) /* (max real for single time events) */;
  i++;
}

const char *logic2_raw_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"time < ramp.startTime",
  "time < ramp.startTime + ramp.duration",
  "chillerStagingCtrl.roomHeatGain_TR > chillerStagingCtrl.minimumLoad_TR",
  "weaData.conTim1.canRepeatWeatherFile and weaData.add.y > pre(weaData.conTim1.tNext)",
  "weaData.conTim.canRepeatWeatherFile and weaBus.cloTim > pre(weaData.conTim.tNext)",
  "val5.m_flow > 0.0",
  "(-val5.m_flow) > 0.0",
  "val7.m_flow > 0.0",
  "(-val7.m_flow) > 0.0",
  "time >= pre(chwstCtrl2.nextControlTime)",
  "time >= pre(chwstCtrl1.nextControlTime)"};
  static const int occurEqs0[] = {1,3142};
  static const int occurEqs1[] = {1,3142};
  static const int occurEqs2[] = {1,3146};
  static const int occurEqs3[] = {1,3008};
  static const int occurEqs4[] = {1,3026};
  static const int occurEqs5[] = {1,3669};
  static const int occurEqs6[] = {1,3675};
  static const int occurEqs7[] = {1,3638};
  static const int occurEqs8[] = {1,3642};
  static const int occurEqs9[] = {1,3619};
  static const int occurEqs10[] = {1,3615};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4,occurEqs5,occurEqs6,occurEqs7,occurEqs8,occurEqs9,occurEqs10};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void logic2_raw_eqFunction_2932(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_2934(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_2935(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_2938(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_2940(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_2941(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_2942(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_2943(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_2947(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_2949(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_2950(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_2951(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_2952(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_2953(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_2957(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_2958(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_2959(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_2960(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_2961(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_2962(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_2966(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_2971(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_2972(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_2973(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_2974(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_2978(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_2982(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_2983(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_2987(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_2988(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_2989(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_2992(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_2993(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_2994(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_2995(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3003(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3006(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3007(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3026(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3028(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3062(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3063(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3064(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3067(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3068(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3069(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3070(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3075(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3076(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3090(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3091(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3110(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3115(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3116(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3117(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3118(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3119(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3120(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3121(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3122(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3123(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3124(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3125(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3126(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3127(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3128(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3129(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3130(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3131(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3132(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3133(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3135(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3136(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3141(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3142(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3144(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3145(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3146(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3147(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3148(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3149(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3150(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3151(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3152(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3153(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3156(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3157(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3158(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3159(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3160(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3165(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3166(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3167(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3171(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3178(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3180(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3181(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3182(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3183(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3184(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3185(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3186(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3187(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3188(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3189(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3190(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3195(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3196(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3199(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3200(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3202(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3203(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3205(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3206(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3207(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3208(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3209(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3239(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3240(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3249(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3250(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3251(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3252(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3253(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3254(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3255(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3256(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3257(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3258(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3259(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3260(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3261(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3263(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3264(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3266(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3267(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3268(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3269(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3274(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3276(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3277(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3278(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3279(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3280(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3287(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3288(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3289(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3290(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3291(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3292(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3293(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3294(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3295(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3296(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3297(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3298(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3299(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3300(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3301(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3306(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3307(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3308(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3309(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3310(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3311(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3312(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3319(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3320(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3321(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3322(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3324(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3325(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3326(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3327(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3330(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3331(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3332(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3333(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3334(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3336(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3337(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3339(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3340(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3341(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3342(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3343(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3344(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3345(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3347(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3348(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3350(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3351(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3352(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3353(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3354(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3355(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3356(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3359(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3360(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3361(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3363(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3364(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3365(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3368(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3371(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3372(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3373(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3374(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3375(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3377(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3378(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3379(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3380(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3381(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3382(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3383(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3387(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3388(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3389(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3390(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3391(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3393(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3402(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3406(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3408(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3409(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3410(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3411(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3415(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3418(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3419(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3420(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3421(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3423(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3426(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3428(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3429(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3430(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3431(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3435(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3436(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3437(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3438(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3439(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3442(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3443(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3447(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3448(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3449(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3450(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3451(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3455(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3462(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3465(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3466(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3467(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3469(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3470(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3471(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3479(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3480(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3481(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3482(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3494(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3495(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3496(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3499(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3502(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3503(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3504(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3505(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3506(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3507(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3508(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3509(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3510(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3511(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3512(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3514(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3515(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3516(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3524(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3525(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3526(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3527(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3528(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3531(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3532(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3533(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3534(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3536(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3537(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3543(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3546(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3547(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3548(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3549(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3551(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3552(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3554(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3555(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3556(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3557(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3562(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3563(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3566(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3567(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3568(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3576(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3577(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3578(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3579(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3582(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3583(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3584(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3585(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3586(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3587(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3589(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3590(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3591(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3592(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3593(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3594(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3598(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3599(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3600(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3601(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3602(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3603(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3605(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3606(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3607(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3608(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3613(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3614(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3615(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3616(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3617(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3618(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3619(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3620(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3621(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3624(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3625(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3626(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3627(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3629(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3630(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3631(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3632(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3633(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3638(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3639(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3640(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3641(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3642(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3643(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3644(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3645(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3646(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3647(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3648(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3649(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3650(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3651(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3652(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3653(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3657(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3661(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3662(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3663(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3664(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3669(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3670(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3671(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3672(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3673(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3674(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3675(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3676(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3677(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3678(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3679(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3680(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3681(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3682(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3683(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3684(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3685(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3686(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3687(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3688(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3689(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3693(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3694(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3695(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3696(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3697(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3700(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3701(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3702(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3703(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3711(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3712(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3713(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3714(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3717(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3718(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3719(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3720(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3721(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3729(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3730(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3731(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3732(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3733(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3734(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3735(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3737(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3738(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3740(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3741(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3742(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3744(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3745(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3746(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3747(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3748(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3768(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3770(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3771(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3772(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3773(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3774(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3775(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3776(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3777(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3778(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3779(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3780(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3796(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3797(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3798(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3799(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3800(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3801(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3802(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3803(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3805(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3808(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3809(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3810(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3811(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3812(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3813(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3814(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3815(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3816(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3817(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3818(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3819(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3820(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3821(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3822(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3823(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3824(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3826(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3827(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3828(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3829(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3830(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3831(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3832(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3833(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3834(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3835(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3836(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3837(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3838(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3839(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3840(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3841(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3842(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3843(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3844(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3845(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3846(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3847(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3848(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3849(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3850(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3852(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3853(DATA* data, threadData_t *threadData);
extern void logic2_raw_eqFunction_3854(DATA* data, threadData_t *threadData);

int logic2_raw_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  static void (*const eqFunctions[495])(DATA*, threadData_t*) = {
    logic2_raw_eqFunction_2932,
    logic2_raw_eqFunction_2934,
    logic2_raw_eqFunction_2935,
    logic2_raw_eqFunction_2938,
    logic2_raw_eqFunction_2940,
    logic2_raw_eqFunction_2941,
    logic2_raw_eqFunction_2942,
    logic2_raw_eqFunction_2943,
    logic2_raw_eqFunction_2947,
    logic2_raw_eqFunction_2949,
    logic2_raw_eqFunction_2950,
    logic2_raw_eqFunction_2951,
    logic2_raw_eqFunction_2952,
    logic2_raw_eqFunction_2953,
    logic2_raw_eqFunction_2957,
    logic2_raw_eqFunction_2958,
    logic2_raw_eqFunction_2959,
    logic2_raw_eqFunction_2960,
    logic2_raw_eqFunction_2961,
    logic2_raw_eqFunction_2962,
    logic2_raw_eqFunction_2966,
    logic2_raw_eqFunction_2971,
    logic2_raw_eqFunction_2972,
    logic2_raw_eqFunction_2973,
    logic2_raw_eqFunction_2974,
    logic2_raw_eqFunction_2978,
    logic2_raw_eqFunction_2982,
    logic2_raw_eqFunction_2983,
    logic2_raw_eqFunction_2987,
    logic2_raw_eqFunction_2988,
    logic2_raw_eqFunction_2989,
    logic2_raw_eqFunction_2992,
    logic2_raw_eqFunction_2993,
    logic2_raw_eqFunction_2994,
    logic2_raw_eqFunction_2995,
    logic2_raw_eqFunction_3003,
    logic2_raw_eqFunction_3006,
    logic2_raw_eqFunction_3007,
    logic2_raw_eqFunction_3026,
    logic2_raw_eqFunction_3028,
    logic2_raw_eqFunction_3062,
    logic2_raw_eqFunction_3063,
    logic2_raw_eqFunction_3064,
    logic2_raw_eqFunction_3067,
    logic2_raw_eqFunction_3068,
    logic2_raw_eqFunction_3069,
    logic2_raw_eqFunction_3070,
    logic2_raw_eqFunction_3075,
    logic2_raw_eqFunction_3076,
    logic2_raw_eqFunction_3090,
    logic2_raw_eqFunction_3091,
    logic2_raw_eqFunction_3110,
    logic2_raw_eqFunction_3115,
    logic2_raw_eqFunction_3116,
    logic2_raw_eqFunction_3117,
    logic2_raw_eqFunction_3118,
    logic2_raw_eqFunction_3119,
    logic2_raw_eqFunction_3120,
    logic2_raw_eqFunction_3121,
    logic2_raw_eqFunction_3122,
    logic2_raw_eqFunction_3123,
    logic2_raw_eqFunction_3124,
    logic2_raw_eqFunction_3125,
    logic2_raw_eqFunction_3126,
    logic2_raw_eqFunction_3127,
    logic2_raw_eqFunction_3128,
    logic2_raw_eqFunction_3129,
    logic2_raw_eqFunction_3130,
    logic2_raw_eqFunction_3131,
    logic2_raw_eqFunction_3132,
    logic2_raw_eqFunction_3133,
    logic2_raw_eqFunction_3135,
    logic2_raw_eqFunction_3136,
    logic2_raw_eqFunction_3141,
    logic2_raw_eqFunction_3142,
    logic2_raw_eqFunction_3144,
    logic2_raw_eqFunction_3145,
    logic2_raw_eqFunction_3146,
    logic2_raw_eqFunction_3147,
    logic2_raw_eqFunction_3148,
    logic2_raw_eqFunction_3149,
    logic2_raw_eqFunction_3150,
    logic2_raw_eqFunction_3151,
    logic2_raw_eqFunction_3152,
    logic2_raw_eqFunction_3153,
    logic2_raw_eqFunction_3156,
    logic2_raw_eqFunction_3157,
    logic2_raw_eqFunction_3158,
    logic2_raw_eqFunction_3159,
    logic2_raw_eqFunction_3160,
    logic2_raw_eqFunction_3165,
    logic2_raw_eqFunction_3166,
    logic2_raw_eqFunction_3167,
    logic2_raw_eqFunction_3171,
    logic2_raw_eqFunction_3178,
    logic2_raw_eqFunction_3180,
    logic2_raw_eqFunction_3181,
    logic2_raw_eqFunction_3182,
    logic2_raw_eqFunction_3183,
    logic2_raw_eqFunction_3184,
    logic2_raw_eqFunction_3185,
    logic2_raw_eqFunction_3186,
    logic2_raw_eqFunction_3187,
    logic2_raw_eqFunction_3188,
    logic2_raw_eqFunction_3189,
    logic2_raw_eqFunction_3190,
    logic2_raw_eqFunction_3195,
    logic2_raw_eqFunction_3196,
    logic2_raw_eqFunction_3199,
    logic2_raw_eqFunction_3200,
    logic2_raw_eqFunction_3202,
    logic2_raw_eqFunction_3203,
    logic2_raw_eqFunction_3205,
    logic2_raw_eqFunction_3206,
    logic2_raw_eqFunction_3207,
    logic2_raw_eqFunction_3208,
    logic2_raw_eqFunction_3209,
    logic2_raw_eqFunction_3239,
    logic2_raw_eqFunction_3240,
    logic2_raw_eqFunction_3249,
    logic2_raw_eqFunction_3250,
    logic2_raw_eqFunction_3251,
    logic2_raw_eqFunction_3252,
    logic2_raw_eqFunction_3253,
    logic2_raw_eqFunction_3254,
    logic2_raw_eqFunction_3255,
    logic2_raw_eqFunction_3256,
    logic2_raw_eqFunction_3257,
    logic2_raw_eqFunction_3258,
    logic2_raw_eqFunction_3259,
    logic2_raw_eqFunction_3260,
    logic2_raw_eqFunction_3261,
    logic2_raw_eqFunction_3263,
    logic2_raw_eqFunction_3264,
    logic2_raw_eqFunction_3266,
    logic2_raw_eqFunction_3267,
    logic2_raw_eqFunction_3268,
    logic2_raw_eqFunction_3269,
    logic2_raw_eqFunction_3274,
    logic2_raw_eqFunction_3276,
    logic2_raw_eqFunction_3277,
    logic2_raw_eqFunction_3278,
    logic2_raw_eqFunction_3279,
    logic2_raw_eqFunction_3280,
    logic2_raw_eqFunction_3287,
    logic2_raw_eqFunction_3288,
    logic2_raw_eqFunction_3289,
    logic2_raw_eqFunction_3290,
    logic2_raw_eqFunction_3291,
    logic2_raw_eqFunction_3292,
    logic2_raw_eqFunction_3293,
    logic2_raw_eqFunction_3294,
    logic2_raw_eqFunction_3295,
    logic2_raw_eqFunction_3296,
    logic2_raw_eqFunction_3297,
    logic2_raw_eqFunction_3298,
    logic2_raw_eqFunction_3299,
    logic2_raw_eqFunction_3300,
    logic2_raw_eqFunction_3301,
    logic2_raw_eqFunction_3306,
    logic2_raw_eqFunction_3307,
    logic2_raw_eqFunction_3308,
    logic2_raw_eqFunction_3309,
    logic2_raw_eqFunction_3310,
    logic2_raw_eqFunction_3311,
    logic2_raw_eqFunction_3312,
    logic2_raw_eqFunction_3319,
    logic2_raw_eqFunction_3320,
    logic2_raw_eqFunction_3321,
    logic2_raw_eqFunction_3322,
    logic2_raw_eqFunction_3324,
    logic2_raw_eqFunction_3325,
    logic2_raw_eqFunction_3326,
    logic2_raw_eqFunction_3327,
    logic2_raw_eqFunction_3330,
    logic2_raw_eqFunction_3331,
    logic2_raw_eqFunction_3332,
    logic2_raw_eqFunction_3333,
    logic2_raw_eqFunction_3334,
    logic2_raw_eqFunction_3336,
    logic2_raw_eqFunction_3337,
    logic2_raw_eqFunction_3339,
    logic2_raw_eqFunction_3340,
    logic2_raw_eqFunction_3341,
    logic2_raw_eqFunction_3342,
    logic2_raw_eqFunction_3343,
    logic2_raw_eqFunction_3344,
    logic2_raw_eqFunction_3345,
    logic2_raw_eqFunction_3347,
    logic2_raw_eqFunction_3348,
    logic2_raw_eqFunction_3350,
    logic2_raw_eqFunction_3351,
    logic2_raw_eqFunction_3352,
    logic2_raw_eqFunction_3353,
    logic2_raw_eqFunction_3354,
    logic2_raw_eqFunction_3355,
    logic2_raw_eqFunction_3356,
    logic2_raw_eqFunction_3359,
    logic2_raw_eqFunction_3360,
    logic2_raw_eqFunction_3361,
    logic2_raw_eqFunction_3363,
    logic2_raw_eqFunction_3364,
    logic2_raw_eqFunction_3365,
    logic2_raw_eqFunction_3368,
    logic2_raw_eqFunction_3371,
    logic2_raw_eqFunction_3372,
    logic2_raw_eqFunction_3373,
    logic2_raw_eqFunction_3374,
    logic2_raw_eqFunction_3375,
    logic2_raw_eqFunction_3377,
    logic2_raw_eqFunction_3378,
    logic2_raw_eqFunction_3379,
    logic2_raw_eqFunction_3380,
    logic2_raw_eqFunction_3381,
    logic2_raw_eqFunction_3382,
    logic2_raw_eqFunction_3383,
    logic2_raw_eqFunction_3387,
    logic2_raw_eqFunction_3388,
    logic2_raw_eqFunction_3389,
    logic2_raw_eqFunction_3390,
    logic2_raw_eqFunction_3391,
    logic2_raw_eqFunction_3393,
    logic2_raw_eqFunction_3402,
    logic2_raw_eqFunction_3406,
    logic2_raw_eqFunction_3408,
    logic2_raw_eqFunction_3409,
    logic2_raw_eqFunction_3410,
    logic2_raw_eqFunction_3411,
    logic2_raw_eqFunction_3415,
    logic2_raw_eqFunction_3418,
    logic2_raw_eqFunction_3419,
    logic2_raw_eqFunction_3420,
    logic2_raw_eqFunction_3421,
    logic2_raw_eqFunction_3423,
    logic2_raw_eqFunction_3426,
    logic2_raw_eqFunction_3428,
    logic2_raw_eqFunction_3429,
    logic2_raw_eqFunction_3430,
    logic2_raw_eqFunction_3431,
    logic2_raw_eqFunction_3435,
    logic2_raw_eqFunction_3436,
    logic2_raw_eqFunction_3437,
    logic2_raw_eqFunction_3438,
    logic2_raw_eqFunction_3439,
    logic2_raw_eqFunction_3442,
    logic2_raw_eqFunction_3443,
    logic2_raw_eqFunction_3447,
    logic2_raw_eqFunction_3448,
    logic2_raw_eqFunction_3449,
    logic2_raw_eqFunction_3450,
    logic2_raw_eqFunction_3451,
    logic2_raw_eqFunction_3455,
    logic2_raw_eqFunction_3462,
    logic2_raw_eqFunction_3465,
    logic2_raw_eqFunction_3466,
    logic2_raw_eqFunction_3467,
    logic2_raw_eqFunction_3469,
    logic2_raw_eqFunction_3470,
    logic2_raw_eqFunction_3471,
    logic2_raw_eqFunction_3479,
    logic2_raw_eqFunction_3480,
    logic2_raw_eqFunction_3481,
    logic2_raw_eqFunction_3482,
    logic2_raw_eqFunction_3494,
    logic2_raw_eqFunction_3495,
    logic2_raw_eqFunction_3496,
    logic2_raw_eqFunction_3499,
    logic2_raw_eqFunction_3502,
    logic2_raw_eqFunction_3503,
    logic2_raw_eqFunction_3504,
    logic2_raw_eqFunction_3505,
    logic2_raw_eqFunction_3506,
    logic2_raw_eqFunction_3507,
    logic2_raw_eqFunction_3508,
    logic2_raw_eqFunction_3509,
    logic2_raw_eqFunction_3510,
    logic2_raw_eqFunction_3511,
    logic2_raw_eqFunction_3512,
    logic2_raw_eqFunction_3514,
    logic2_raw_eqFunction_3515,
    logic2_raw_eqFunction_3516,
    logic2_raw_eqFunction_3524,
    logic2_raw_eqFunction_3525,
    logic2_raw_eqFunction_3526,
    logic2_raw_eqFunction_3527,
    logic2_raw_eqFunction_3528,
    logic2_raw_eqFunction_3531,
    logic2_raw_eqFunction_3532,
    logic2_raw_eqFunction_3533,
    logic2_raw_eqFunction_3534,
    logic2_raw_eqFunction_3536,
    logic2_raw_eqFunction_3537,
    logic2_raw_eqFunction_3543,
    logic2_raw_eqFunction_3546,
    logic2_raw_eqFunction_3547,
    logic2_raw_eqFunction_3548,
    logic2_raw_eqFunction_3549,
    logic2_raw_eqFunction_3551,
    logic2_raw_eqFunction_3552,
    logic2_raw_eqFunction_3554,
    logic2_raw_eqFunction_3555,
    logic2_raw_eqFunction_3556,
    logic2_raw_eqFunction_3557,
    logic2_raw_eqFunction_3562,
    logic2_raw_eqFunction_3563,
    logic2_raw_eqFunction_3566,
    logic2_raw_eqFunction_3567,
    logic2_raw_eqFunction_3568,
    logic2_raw_eqFunction_3576,
    logic2_raw_eqFunction_3577,
    logic2_raw_eqFunction_3578,
    logic2_raw_eqFunction_3579,
    logic2_raw_eqFunction_3582,
    logic2_raw_eqFunction_3583,
    logic2_raw_eqFunction_3584,
    logic2_raw_eqFunction_3585,
    logic2_raw_eqFunction_3586,
    logic2_raw_eqFunction_3587,
    logic2_raw_eqFunction_3589,
    logic2_raw_eqFunction_3590,
    logic2_raw_eqFunction_3591,
    logic2_raw_eqFunction_3592,
    logic2_raw_eqFunction_3593,
    logic2_raw_eqFunction_3594,
    logic2_raw_eqFunction_3598,
    logic2_raw_eqFunction_3599,
    logic2_raw_eqFunction_3600,
    logic2_raw_eqFunction_3601,
    logic2_raw_eqFunction_3602,
    logic2_raw_eqFunction_3603,
    logic2_raw_eqFunction_3605,
    logic2_raw_eqFunction_3606,
    logic2_raw_eqFunction_3607,
    logic2_raw_eqFunction_3608,
    logic2_raw_eqFunction_3613,
    logic2_raw_eqFunction_3614,
    logic2_raw_eqFunction_3615,
    logic2_raw_eqFunction_3616,
    logic2_raw_eqFunction_3617,
    logic2_raw_eqFunction_3618,
    logic2_raw_eqFunction_3619,
    logic2_raw_eqFunction_3620,
    logic2_raw_eqFunction_3621,
    logic2_raw_eqFunction_3624,
    logic2_raw_eqFunction_3625,
    logic2_raw_eqFunction_3626,
    logic2_raw_eqFunction_3627,
    logic2_raw_eqFunction_3629,
    logic2_raw_eqFunction_3630,
    logic2_raw_eqFunction_3631,
    logic2_raw_eqFunction_3632,
    logic2_raw_eqFunction_3633,
    logic2_raw_eqFunction_3638,
    logic2_raw_eqFunction_3639,
    logic2_raw_eqFunction_3640,
    logic2_raw_eqFunction_3641,
    logic2_raw_eqFunction_3642,
    logic2_raw_eqFunction_3643,
    logic2_raw_eqFunction_3644,
    logic2_raw_eqFunction_3645,
    logic2_raw_eqFunction_3646,
    logic2_raw_eqFunction_3647,
    logic2_raw_eqFunction_3648,
    logic2_raw_eqFunction_3649,
    logic2_raw_eqFunction_3650,
    logic2_raw_eqFunction_3651,
    logic2_raw_eqFunction_3652,
    logic2_raw_eqFunction_3653,
    logic2_raw_eqFunction_3657,
    logic2_raw_eqFunction_3661,
    logic2_raw_eqFunction_3662,
    logic2_raw_eqFunction_3663,
    logic2_raw_eqFunction_3664,
    logic2_raw_eqFunction_3669,
    logic2_raw_eqFunction_3670,
    logic2_raw_eqFunction_3671,
    logic2_raw_eqFunction_3672,
    logic2_raw_eqFunction_3673,
    logic2_raw_eqFunction_3674,
    logic2_raw_eqFunction_3675,
    logic2_raw_eqFunction_3676,
    logic2_raw_eqFunction_3677,
    logic2_raw_eqFunction_3678,
    logic2_raw_eqFunction_3679,
    logic2_raw_eqFunction_3680,
    logic2_raw_eqFunction_3681,
    logic2_raw_eqFunction_3682,
    logic2_raw_eqFunction_3683,
    logic2_raw_eqFunction_3684,
    logic2_raw_eqFunction_3685,
    logic2_raw_eqFunction_3686,
    logic2_raw_eqFunction_3687,
    logic2_raw_eqFunction_3688,
    logic2_raw_eqFunction_3689,
    logic2_raw_eqFunction_3693,
    logic2_raw_eqFunction_3694,
    logic2_raw_eqFunction_3695,
    logic2_raw_eqFunction_3696,
    logic2_raw_eqFunction_3697,
    logic2_raw_eqFunction_3700,
    logic2_raw_eqFunction_3701,
    logic2_raw_eqFunction_3702,
    logic2_raw_eqFunction_3703,
    logic2_raw_eqFunction_3711,
    logic2_raw_eqFunction_3712,
    logic2_raw_eqFunction_3713,
    logic2_raw_eqFunction_3714,
    logic2_raw_eqFunction_3717,
    logic2_raw_eqFunction_3718,
    logic2_raw_eqFunction_3719,
    logic2_raw_eqFunction_3720,
    logic2_raw_eqFunction_3721,
    logic2_raw_eqFunction_3729,
    logic2_raw_eqFunction_3730,
    logic2_raw_eqFunction_3731,
    logic2_raw_eqFunction_3732,
    logic2_raw_eqFunction_3733,
    logic2_raw_eqFunction_3734,
    logic2_raw_eqFunction_3735,
    logic2_raw_eqFunction_3737,
    logic2_raw_eqFunction_3738,
    logic2_raw_eqFunction_3740,
    logic2_raw_eqFunction_3741,
    logic2_raw_eqFunction_3742,
    logic2_raw_eqFunction_3744,
    logic2_raw_eqFunction_3745,
    logic2_raw_eqFunction_3746,
    logic2_raw_eqFunction_3747,
    logic2_raw_eqFunction_3748,
    logic2_raw_eqFunction_3768,
    logic2_raw_eqFunction_3770,
    logic2_raw_eqFunction_3771,
    logic2_raw_eqFunction_3772,
    logic2_raw_eqFunction_3773,
    logic2_raw_eqFunction_3774,
    logic2_raw_eqFunction_3775,
    logic2_raw_eqFunction_3776,
    logic2_raw_eqFunction_3777,
    logic2_raw_eqFunction_3778,
    logic2_raw_eqFunction_3779,
    logic2_raw_eqFunction_3780,
    logic2_raw_eqFunction_3796,
    logic2_raw_eqFunction_3797,
    logic2_raw_eqFunction_3798,
    logic2_raw_eqFunction_3799,
    logic2_raw_eqFunction_3800,
    logic2_raw_eqFunction_3801,
    logic2_raw_eqFunction_3802,
    logic2_raw_eqFunction_3803,
    logic2_raw_eqFunction_3805,
    logic2_raw_eqFunction_3808,
    logic2_raw_eqFunction_3809,
    logic2_raw_eqFunction_3810,
    logic2_raw_eqFunction_3811,
    logic2_raw_eqFunction_3812,
    logic2_raw_eqFunction_3813,
    logic2_raw_eqFunction_3814,
    logic2_raw_eqFunction_3815,
    logic2_raw_eqFunction_3816,
    logic2_raw_eqFunction_3817,
    logic2_raw_eqFunction_3818,
    logic2_raw_eqFunction_3819,
    logic2_raw_eqFunction_3820,
    logic2_raw_eqFunction_3821,
    logic2_raw_eqFunction_3822,
    logic2_raw_eqFunction_3823,
    logic2_raw_eqFunction_3824,
    logic2_raw_eqFunction_3826,
    logic2_raw_eqFunction_3827,
    logic2_raw_eqFunction_3828,
    logic2_raw_eqFunction_3829,
    logic2_raw_eqFunction_3830,
    logic2_raw_eqFunction_3831,
    logic2_raw_eqFunction_3832,
    logic2_raw_eqFunction_3833,
    logic2_raw_eqFunction_3834,
    logic2_raw_eqFunction_3835,
    logic2_raw_eqFunction_3836,
    logic2_raw_eqFunction_3837,
    logic2_raw_eqFunction_3838,
    logic2_raw_eqFunction_3839,
    logic2_raw_eqFunction_3840,
    logic2_raw_eqFunction_3841,
    logic2_raw_eqFunction_3842,
    logic2_raw_eqFunction_3843,
    logic2_raw_eqFunction_3844,
    logic2_raw_eqFunction_3845,
    logic2_raw_eqFunction_3846,
    logic2_raw_eqFunction_3847,
    logic2_raw_eqFunction_3848,
    logic2_raw_eqFunction_3849,
    logic2_raw_eqFunction_3850,
    logic2_raw_eqFunction_3852,
    logic2_raw_eqFunction_3853,
    logic2_raw_eqFunction_3854
  };
  
  for (int id = 0; id < 495; id++) {
    eqFunctions[id](data, threadData);
  }
  
  return 0;
}

int logic2_raw_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
{
  const int *equationIndexes = NULL;

  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_boolean tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_boolean tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_boolean tmp18;
  modelica_boolean tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  modelica_real tmp24;
  modelica_real tmp25;
  modelica_boolean tmp26;
  modelica_boolean tmp27;
  modelica_real tmp28;
  modelica_real tmp29;
  modelica_boolean tmp30;
  modelica_boolean tmp31;
  modelica_real tmp32;
  modelica_real tmp33;
  modelica_boolean tmp34;
  modelica_real tmp35;
  modelica_real tmp36;
  modelica_integer current_index = 0;
  modelica_integer start_index;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ZC);
#endif
  data->simulationInfo->callStatistics.functionZeroCrossings++;

  start_index = current_index;
  tmp1 = 1.0;
  tmp2 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2673]] /* ramp.startTime PARAM */));
  tmp0 = LessZC(data->localData[0]->timeValue, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2673]] /* ramp.startTime PARAM */), tmp1, tmp2, data->simulationInfo->storedRelations[0]);
  gout[start_index] = (tmp0) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp4 = 1.0;
  tmp5 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2673]] /* ramp.startTime PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2670]] /* ramp.duration PARAM */));
  tmp3 = LessZC(data->localData[0]->timeValue, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2673]] /* ramp.startTime PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2670]] /* ramp.duration PARAM */), tmp4, tmp5, data->simulationInfo->storedRelations[1]);
  gout[start_index] = (tmp3) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp7 = 1.0;
  tmp8 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[417]] /* chillerStagingCtrl.minimumLoad_TR PARAM */));
  tmp6 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[446]] /* chillerStagingCtrl.roomHeatGain_TR variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[417]] /* chillerStagingCtrl.minimumLoad_TR PARAM */), tmp7, tmp8, data->simulationInfo->storedRelations[2]);
  gout[start_index] = (tmp6) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp10 = 1.0;
  tmp11 = 1.0;
  tmp9 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1291]] /* weaData.add.y variable */), (data->simulationInfo->realVarsPre[1345] /* weaData.conTim1.tNext DISCRETE */), tmp10, tmp11, data->simulationInfo->storedRelations[3]);
  gout[start_index] = (((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[874]] /* weaData.conTim1.canRepeatWeatherFile PARAM */) && tmp9)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp13 = 1.0;
  tmp14 = 1.0;
  tmp12 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1273]] /* weaBus.cloTim variable */), (data->simulationInfo->realVarsPre[1344] /* weaData.conTim.tNext DISCRETE */), tmp13, tmp14, data->simulationInfo->storedRelations[4]);
  gout[start_index] = (((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[873]] /* weaData.conTim.canRepeatWeatherFile PARAM */) && tmp12)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp18 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2718]] /* val5.m_flow_nominal_pos PARAM */),2.220446049250313e-16);
  tmp16 = fabs((tmp18?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2718]] /* val5.m_flow_nominal_pos PARAM */):1.0));
  tmp17 = 0.0;
  tmp15 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1210]] /* val5.m_flow variable */), 0.0, tmp16, tmp17, data->simulationInfo->storedRelations[5]);
  gout[start_index] = (tmp15) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp22 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2718]] /* val5.m_flow_nominal_pos PARAM */),2.220446049250313e-16);
  tmp20 = fabs((tmp22?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2718]] /* val5.m_flow_nominal_pos PARAM */):1.0));
  tmp21 = 0.0;
  tmp19 = GreaterZC((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1210]] /* val5.m_flow variable */)), 0.0, tmp20, tmp21, data->simulationInfo->storedRelations[6]);
  gout[start_index] = (tmp19) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp26 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2764]] /* val7.m_flow_nominal_pos PARAM */),2.220446049250313e-16);
  tmp24 = fabs((tmp26?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2764]] /* val7.m_flow_nominal_pos PARAM */):1.0));
  tmp25 = 0.0;
  tmp23 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val7.m_flow variable */), 0.0, tmp24, tmp25, data->simulationInfo->storedRelations[7]);
  gout[start_index] = (tmp23) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp30 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2764]] /* val7.m_flow_nominal_pos PARAM */),2.220446049250313e-16);
  tmp28 = fabs((tmp30?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2764]] /* val7.m_flow_nominal_pos PARAM */):1.0));
  tmp29 = 0.0;
  tmp27 = GreaterZC((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val7.m_flow variable */)), 0.0, tmp28, tmp29, data->simulationInfo->storedRelations[8]);
  gout[start_index] = (tmp27) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp32 = 1.0;
  tmp33 = 1.0;
  tmp31 = GreaterEqZC(data->localData[0]->timeValue, (data->simulationInfo->realVarsPre[1343] /* chwstCtrl2.nextControlTime DISCRETE */), tmp32, tmp33, data->simulationInfo->storedRelations[9]);
  gout[start_index] = (tmp31) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp35 = 1.0;
  tmp36 = 1.0;
  tmp34 = GreaterEqZC(data->localData[0]->timeValue, (data->simulationInfo->realVarsPre[1337] /* chwstCtrl1.nextControlTime DISCRETE */), tmp35, tmp36, data->simulationInfo->storedRelations[10]);
  gout[start_index] = (tmp34) ? 1 : -1;
  current_index++;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  return 0;
}

const char *logic2_raw_relationDescription(int i)
{
  const char *res[] = {"time < ramp.startTime",
  "time < ramp.startTime + ramp.duration",
  "chillerStagingCtrl.roomHeatGain_TR > chillerStagingCtrl.minimumLoad_TR",
  "weaData.add.y > pre(weaData.conTim1.tNext)",
  "weaBus.cloTim > pre(weaData.conTim.tNext)",
  "val5.m_flow > 0.0",
  "(-val5.m_flow) > 0.0",
  "val7.m_flow > 0.0",
  "(-val7.m_flow) > 0.0",
  "time >= pre(chwstCtrl2.nextControlTime)",
  "time >= pre(chwstCtrl1.nextControlTime)"};
  return res[i];
}

int logic2_raw_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  const int *equationIndexes = NULL;

  modelica_boolean tmp37;
  modelica_real tmp38;
  modelica_real tmp39;
  modelica_boolean tmp40;
  modelica_real tmp41;
  modelica_real tmp42;
  modelica_boolean tmp43;
  modelica_real tmp44;
  modelica_real tmp45;
  modelica_boolean tmp46;
  modelica_real tmp47;
  modelica_real tmp48;
  modelica_boolean tmp49;
  modelica_real tmp50;
  modelica_real tmp51;
  modelica_boolean tmp52;
  modelica_real tmp53;
  modelica_real tmp54;
  modelica_boolean tmp55;
  modelica_boolean tmp56;
  modelica_real tmp57;
  modelica_real tmp58;
  modelica_boolean tmp59;
  modelica_boolean tmp60;
  modelica_real tmp61;
  modelica_real tmp62;
  modelica_boolean tmp63;
  modelica_boolean tmp64;
  modelica_real tmp65;
  modelica_real tmp66;
  modelica_boolean tmp67;
  modelica_boolean tmp68;
  modelica_real tmp69;
  modelica_real tmp70;
  modelica_boolean tmp71;
  modelica_real tmp72;
  modelica_real tmp73;
  modelica_integer current_index = 0;
  modelica_integer start_index;
  
  if(evalforZeroCross) {
    start_index = current_index;
    tmp38 = 1.0;
    tmp39 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2673]] /* ramp.startTime PARAM */));
    tmp37 = LessZC(data->localData[0]->timeValue, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2673]] /* ramp.startTime PARAM */), tmp38, tmp39, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[start_index] = tmp37;
    current_index++;

    start_index = current_index;
    tmp41 = 1.0;
    tmp42 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2673]] /* ramp.startTime PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2670]] /* ramp.duration PARAM */));
    tmp40 = LessZC(data->localData[0]->timeValue, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2673]] /* ramp.startTime PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2670]] /* ramp.duration PARAM */), tmp41, tmp42, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[start_index] = tmp40;
    current_index++;

    start_index = current_index;
    tmp44 = 1.0;
    tmp45 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[417]] /* chillerStagingCtrl.minimumLoad_TR PARAM */));
    tmp43 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[446]] /* chillerStagingCtrl.roomHeatGain_TR variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[417]] /* chillerStagingCtrl.minimumLoad_TR PARAM */), tmp44, tmp45, data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[start_index] = tmp43;
    current_index++;

    start_index = current_index;
    tmp47 = 1.0;
    tmp48 = 1.0;
    tmp46 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1291]] /* weaData.add.y variable */), (data->simulationInfo->realVarsPre[1345] /* weaData.conTim1.tNext DISCRETE */), tmp47, tmp48, data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[start_index] = tmp46;
    current_index++;

    start_index = current_index;
    tmp50 = 1.0;
    tmp51 = 1.0;
    tmp49 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1273]] /* weaBus.cloTim variable */), (data->simulationInfo->realVarsPre[1344] /* weaData.conTim.tNext DISCRETE */), tmp50, tmp51, data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[start_index] = tmp49;
    current_index++;

    start_index = current_index;
    tmp55 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2718]] /* val5.m_flow_nominal_pos PARAM */),2.220446049250313e-16);
    tmp53 = fabs((tmp55?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2718]] /* val5.m_flow_nominal_pos PARAM */):1.0));
    tmp54 = 0.0;
    tmp52 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1210]] /* val5.m_flow variable */), 0.0, tmp53, tmp54, data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[start_index] = tmp52;
    current_index++;

    start_index = current_index;
    tmp59 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2718]] /* val5.m_flow_nominal_pos PARAM */),2.220446049250313e-16);
    tmp57 = fabs((tmp59?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2718]] /* val5.m_flow_nominal_pos PARAM */):1.0));
    tmp58 = 0.0;
    tmp56 = GreaterZC((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1210]] /* val5.m_flow variable */)), 0.0, tmp57, tmp58, data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[start_index] = tmp56;
    current_index++;

    start_index = current_index;
    tmp63 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2764]] /* val7.m_flow_nominal_pos PARAM */),2.220446049250313e-16);
    tmp61 = fabs((tmp63?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2764]] /* val7.m_flow_nominal_pos PARAM */):1.0));
    tmp62 = 0.0;
    tmp60 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val7.m_flow variable */), 0.0, tmp61, tmp62, data->simulationInfo->storedRelations[7]);
    data->simulationInfo->relations[start_index] = tmp60;
    current_index++;

    start_index = current_index;
    tmp67 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2764]] /* val7.m_flow_nominal_pos PARAM */),2.220446049250313e-16);
    tmp65 = fabs((tmp67?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2764]] /* val7.m_flow_nominal_pos PARAM */):1.0));
    tmp66 = 0.0;
    tmp64 = GreaterZC((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val7.m_flow variable */)), 0.0, tmp65, tmp66, data->simulationInfo->storedRelations[8]);
    data->simulationInfo->relations[start_index] = tmp64;
    current_index++;

    start_index = current_index;
    tmp69 = 1.0;
    tmp70 = 1.0;
    tmp68 = GreaterEqZC(data->localData[0]->timeValue, (data->simulationInfo->realVarsPre[1343] /* chwstCtrl2.nextControlTime DISCRETE */), tmp69, tmp70, data->simulationInfo->storedRelations[9]);
    data->simulationInfo->relations[start_index] = tmp68;
    current_index++;

    start_index = current_index;
    tmp72 = 1.0;
    tmp73 = 1.0;
    tmp71 = GreaterEqZC(data->localData[0]->timeValue, (data->simulationInfo->realVarsPre[1337] /* chwstCtrl1.nextControlTime DISCRETE */), tmp72, tmp73, data->simulationInfo->storedRelations[10]);
    data->simulationInfo->relations[start_index] = tmp71;
    current_index++;
  } else {
    start_index = current_index;
    data->simulationInfo->relations[start_index] = (data->localData[0]->timeValue < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2673]] /* ramp.startTime PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (data->localData[0]->timeValue < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2673]] /* ramp.startTime PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2670]] /* ramp.duration PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[446]] /* chillerStagingCtrl.roomHeatGain_TR variable */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[417]] /* chillerStagingCtrl.minimumLoad_TR PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1291]] /* weaData.add.y variable */) > (data->simulationInfo->realVarsPre[1345] /* weaData.conTim1.tNext DISCRETE */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1273]] /* weaBus.cloTim variable */) > (data->simulationInfo->realVarsPre[1344] /* weaData.conTim.tNext DISCRETE */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1210]] /* val5.m_flow variable */) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1210]] /* val5.m_flow variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val7.m_flow variable */) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val7.m_flow variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (data->localData[0]->timeValue >= (data->simulationInfo->realVarsPre[1343] /* chwstCtrl2.nextControlTime DISCRETE */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (data->localData[0]->timeValue >= (data->simulationInfo->realVarsPre[1337] /* chwstCtrl1.nextControlTime DISCRETE */));
    current_index++;
  }
  
  return 0;
}

#if defined(__cplusplus)
}
#endif
