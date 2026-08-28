/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "logic1_raw_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void logic1_raw_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
  /* sample 1 */
  data->modelData->samplesInfo[i].index = 1;
  data->modelData->samplesInfo[i].start = 0.0;
  data->modelData->samplesInfo[i].interval = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[417]] /* chillerStagingCtrl.samplePeriod PARAM */) /* (max real for single time events) */;
  i++;
}

const char *logic1_raw_zeroCrossingDescription(int i, int **out_EquationIndexes)
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
  "time >= pre(chwPump2PID.nextControlTime)",
  "time >= pre(chwPump1PID.nextControlTime)"};
  static const int occurEqs0[] = {1,3150};
  static const int occurEqs1[] = {1,3150};
  static const int occurEqs2[] = {1,3154};
  static const int occurEqs3[] = {1,3016};
  static const int occurEqs4[] = {1,3034};
  static const int occurEqs5[] = {1,3681};
  static const int occurEqs6[] = {1,3687};
  static const int occurEqs7[] = {1,3650};
  static const int occurEqs8[] = {1,3654};
  static const int occurEqs9[] = {1,3631};
  static const int occurEqs10[] = {1,3627};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4,occurEqs5,occurEqs6,occurEqs7,occurEqs8,occurEqs9,occurEqs10};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void logic1_raw_eqFunction_2940(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_2942(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_2943(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_2946(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_2948(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_2949(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_2950(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_2951(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_2955(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_2957(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_2958(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_2959(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_2960(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_2961(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_2965(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_2966(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_2967(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_2968(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_2969(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_2970(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_2974(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_2979(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_2980(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_2981(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_2982(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_2986(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_2990(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_2991(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_2995(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_2996(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_2997(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3000(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3001(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3002(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3003(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3011(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3014(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3015(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3034(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3036(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3070(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3071(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3072(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3075(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3076(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3077(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3078(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3083(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3084(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3098(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3099(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3118(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3123(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3124(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3125(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3126(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3127(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3128(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3129(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3130(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3131(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3132(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3133(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3134(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3135(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3136(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3137(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3138(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3139(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3140(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3141(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3143(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3144(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3149(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3150(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3152(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3153(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3154(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3155(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3156(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3157(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3158(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3159(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3160(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3162(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3163(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3164(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3165(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3166(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3167(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3168(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3169(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3170(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3171(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3172(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3173(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3175(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3178(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3179(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3180(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3181(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3182(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3187(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3188(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3189(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3193(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3200(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3202(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3203(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3204(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3205(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3206(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3207(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3208(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3209(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3210(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3211(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3212(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3217(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3247(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3248(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3249(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3250(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3253(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3254(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3263(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3265(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3266(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3267(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3268(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3269(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3270(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3271(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3273(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3274(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3275(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3276(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3277(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3282(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3283(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3284(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3285(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3286(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3287(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3288(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3289(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3290(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3291(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3292(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3293(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3294(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3295(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3296(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3297(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3298(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3310(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3311(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3312(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3313(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3314(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3315(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3316(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3317(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3318(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3319(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3320(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3321(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3322(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3323(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3325(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3326(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3329(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3331(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3332(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3334(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3335(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3336(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3337(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3338(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3339(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3340(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3341(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3342(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3343(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3344(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3346(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3347(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3349(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3350(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3351(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3352(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3353(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3354(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3355(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3357(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3358(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3360(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3361(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3362(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3363(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3364(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3365(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3366(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3371(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3372(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3373(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3375(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3376(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3377(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3380(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3383(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3384(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3385(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3386(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3387(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3389(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3390(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3391(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3392(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3393(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3394(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3395(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3399(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3400(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3401(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3402(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3403(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3405(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3414(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3418(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3420(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3421(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3422(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3423(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3427(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3430(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3431(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3432(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3433(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3435(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3438(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3440(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3441(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3442(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3443(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3447(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3448(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3449(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3450(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3451(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3454(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3455(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3459(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3460(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3461(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3462(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3463(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3467(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3471(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3474(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3475(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3479(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3481(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3482(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3483(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3491(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3492(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3493(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3494(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3506(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3507(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3508(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3511(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3514(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3515(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3516(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3517(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3518(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3519(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3520(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3521(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3522(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3523(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3524(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3526(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3527(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3528(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3534(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3535(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3536(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3537(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3538(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3539(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3540(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3543(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3544(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3545(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3546(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3548(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3549(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3550(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3551(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3552(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3553(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3555(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3558(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3559(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3560(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3561(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3563(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3564(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3566(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3567(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3568(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3569(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3574(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3575(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3578(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3579(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3580(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3588(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3589(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3590(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3591(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3594(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3595(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3596(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3597(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3598(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3599(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3601(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3602(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3603(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3604(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3605(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3606(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3610(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3611(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3612(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3613(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3614(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3615(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3617(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3618(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3619(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3620(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3621(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3622(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3623(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3624(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3625(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3626(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3627(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3628(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3629(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3630(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3631(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3632(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3633(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3636(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3637(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3638(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3639(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3641(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3642(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3643(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3644(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3645(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3650(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3651(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3652(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3653(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3654(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3655(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3656(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3657(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3658(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3659(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3660(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3661(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3662(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3663(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3664(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3665(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3669(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3673(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3674(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3675(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3676(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3681(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3682(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3683(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3684(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3685(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3686(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3687(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3688(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3689(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3690(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3691(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3692(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3693(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3694(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3695(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3696(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3697(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3698(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3699(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3700(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3701(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3705(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3706(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3707(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3708(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3709(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3712(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3713(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3714(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3715(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3723(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3724(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3725(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3726(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3729(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3730(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3731(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3732(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3733(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3741(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3742(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3743(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3744(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3745(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3746(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3747(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3749(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3750(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3752(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3753(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3754(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3756(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3757(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3758(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3759(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3760(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3780(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3782(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3783(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3784(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3785(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3786(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3787(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3788(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3789(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3790(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3791(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3792(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3808(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3809(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3813(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3814(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3815(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3816(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3817(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3818(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3819(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3820(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3821(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3822(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3823(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3824(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3825(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3826(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3827(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3828(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3829(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3830(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3831(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3832(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3833(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3834(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3835(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3836(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3838(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3839(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3840(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3841(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3842(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3843(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3844(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3845(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3846(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3847(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3848(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3849(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3850(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3851(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3852(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3853(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3854(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3855(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3856(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3857(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3858(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3859(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3860(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3861(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3862(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3864(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3865(DATA* data, threadData_t *threadData);
extern void logic1_raw_eqFunction_3866(DATA* data, threadData_t *threadData);

int logic1_raw_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  static void (*const eqFunctions[511])(DATA*, threadData_t*) = {
    logic1_raw_eqFunction_2940,
    logic1_raw_eqFunction_2942,
    logic1_raw_eqFunction_2943,
    logic1_raw_eqFunction_2946,
    logic1_raw_eqFunction_2948,
    logic1_raw_eqFunction_2949,
    logic1_raw_eqFunction_2950,
    logic1_raw_eqFunction_2951,
    logic1_raw_eqFunction_2955,
    logic1_raw_eqFunction_2957,
    logic1_raw_eqFunction_2958,
    logic1_raw_eqFunction_2959,
    logic1_raw_eqFunction_2960,
    logic1_raw_eqFunction_2961,
    logic1_raw_eqFunction_2965,
    logic1_raw_eqFunction_2966,
    logic1_raw_eqFunction_2967,
    logic1_raw_eqFunction_2968,
    logic1_raw_eqFunction_2969,
    logic1_raw_eqFunction_2970,
    logic1_raw_eqFunction_2974,
    logic1_raw_eqFunction_2979,
    logic1_raw_eqFunction_2980,
    logic1_raw_eqFunction_2981,
    logic1_raw_eqFunction_2982,
    logic1_raw_eqFunction_2986,
    logic1_raw_eqFunction_2990,
    logic1_raw_eqFunction_2991,
    logic1_raw_eqFunction_2995,
    logic1_raw_eqFunction_2996,
    logic1_raw_eqFunction_2997,
    logic1_raw_eqFunction_3000,
    logic1_raw_eqFunction_3001,
    logic1_raw_eqFunction_3002,
    logic1_raw_eqFunction_3003,
    logic1_raw_eqFunction_3011,
    logic1_raw_eqFunction_3014,
    logic1_raw_eqFunction_3015,
    logic1_raw_eqFunction_3034,
    logic1_raw_eqFunction_3036,
    logic1_raw_eqFunction_3070,
    logic1_raw_eqFunction_3071,
    logic1_raw_eqFunction_3072,
    logic1_raw_eqFunction_3075,
    logic1_raw_eqFunction_3076,
    logic1_raw_eqFunction_3077,
    logic1_raw_eqFunction_3078,
    logic1_raw_eqFunction_3083,
    logic1_raw_eqFunction_3084,
    logic1_raw_eqFunction_3098,
    logic1_raw_eqFunction_3099,
    logic1_raw_eqFunction_3118,
    logic1_raw_eqFunction_3123,
    logic1_raw_eqFunction_3124,
    logic1_raw_eqFunction_3125,
    logic1_raw_eqFunction_3126,
    logic1_raw_eqFunction_3127,
    logic1_raw_eqFunction_3128,
    logic1_raw_eqFunction_3129,
    logic1_raw_eqFunction_3130,
    logic1_raw_eqFunction_3131,
    logic1_raw_eqFunction_3132,
    logic1_raw_eqFunction_3133,
    logic1_raw_eqFunction_3134,
    logic1_raw_eqFunction_3135,
    logic1_raw_eqFunction_3136,
    logic1_raw_eqFunction_3137,
    logic1_raw_eqFunction_3138,
    logic1_raw_eqFunction_3139,
    logic1_raw_eqFunction_3140,
    logic1_raw_eqFunction_3141,
    logic1_raw_eqFunction_3143,
    logic1_raw_eqFunction_3144,
    logic1_raw_eqFunction_3149,
    logic1_raw_eqFunction_3150,
    logic1_raw_eqFunction_3152,
    logic1_raw_eqFunction_3153,
    logic1_raw_eqFunction_3154,
    logic1_raw_eqFunction_3155,
    logic1_raw_eqFunction_3156,
    logic1_raw_eqFunction_3157,
    logic1_raw_eqFunction_3158,
    logic1_raw_eqFunction_3159,
    logic1_raw_eqFunction_3160,
    logic1_raw_eqFunction_3162,
    logic1_raw_eqFunction_3163,
    logic1_raw_eqFunction_3164,
    logic1_raw_eqFunction_3165,
    logic1_raw_eqFunction_3166,
    logic1_raw_eqFunction_3167,
    logic1_raw_eqFunction_3168,
    logic1_raw_eqFunction_3169,
    logic1_raw_eqFunction_3170,
    logic1_raw_eqFunction_3171,
    logic1_raw_eqFunction_3172,
    logic1_raw_eqFunction_3173,
    logic1_raw_eqFunction_3175,
    logic1_raw_eqFunction_3178,
    logic1_raw_eqFunction_3179,
    logic1_raw_eqFunction_3180,
    logic1_raw_eqFunction_3181,
    logic1_raw_eqFunction_3182,
    logic1_raw_eqFunction_3187,
    logic1_raw_eqFunction_3188,
    logic1_raw_eqFunction_3189,
    logic1_raw_eqFunction_3193,
    logic1_raw_eqFunction_3200,
    logic1_raw_eqFunction_3202,
    logic1_raw_eqFunction_3203,
    logic1_raw_eqFunction_3204,
    logic1_raw_eqFunction_3205,
    logic1_raw_eqFunction_3206,
    logic1_raw_eqFunction_3207,
    logic1_raw_eqFunction_3208,
    logic1_raw_eqFunction_3209,
    logic1_raw_eqFunction_3210,
    logic1_raw_eqFunction_3211,
    logic1_raw_eqFunction_3212,
    logic1_raw_eqFunction_3217,
    logic1_raw_eqFunction_3247,
    logic1_raw_eqFunction_3248,
    logic1_raw_eqFunction_3249,
    logic1_raw_eqFunction_3250,
    logic1_raw_eqFunction_3253,
    logic1_raw_eqFunction_3254,
    logic1_raw_eqFunction_3263,
    logic1_raw_eqFunction_3265,
    logic1_raw_eqFunction_3266,
    logic1_raw_eqFunction_3267,
    logic1_raw_eqFunction_3268,
    logic1_raw_eqFunction_3269,
    logic1_raw_eqFunction_3270,
    logic1_raw_eqFunction_3271,
    logic1_raw_eqFunction_3273,
    logic1_raw_eqFunction_3274,
    logic1_raw_eqFunction_3275,
    logic1_raw_eqFunction_3276,
    logic1_raw_eqFunction_3277,
    logic1_raw_eqFunction_3282,
    logic1_raw_eqFunction_3283,
    logic1_raw_eqFunction_3284,
    logic1_raw_eqFunction_3285,
    logic1_raw_eqFunction_3286,
    logic1_raw_eqFunction_3287,
    logic1_raw_eqFunction_3288,
    logic1_raw_eqFunction_3289,
    logic1_raw_eqFunction_3290,
    logic1_raw_eqFunction_3291,
    logic1_raw_eqFunction_3292,
    logic1_raw_eqFunction_3293,
    logic1_raw_eqFunction_3294,
    logic1_raw_eqFunction_3295,
    logic1_raw_eqFunction_3296,
    logic1_raw_eqFunction_3297,
    logic1_raw_eqFunction_3298,
    logic1_raw_eqFunction_3310,
    logic1_raw_eqFunction_3311,
    logic1_raw_eqFunction_3312,
    logic1_raw_eqFunction_3313,
    logic1_raw_eqFunction_3314,
    logic1_raw_eqFunction_3315,
    logic1_raw_eqFunction_3316,
    logic1_raw_eqFunction_3317,
    logic1_raw_eqFunction_3318,
    logic1_raw_eqFunction_3319,
    logic1_raw_eqFunction_3320,
    logic1_raw_eqFunction_3321,
    logic1_raw_eqFunction_3322,
    logic1_raw_eqFunction_3323,
    logic1_raw_eqFunction_3325,
    logic1_raw_eqFunction_3326,
    logic1_raw_eqFunction_3329,
    logic1_raw_eqFunction_3331,
    logic1_raw_eqFunction_3332,
    logic1_raw_eqFunction_3334,
    logic1_raw_eqFunction_3335,
    logic1_raw_eqFunction_3336,
    logic1_raw_eqFunction_3337,
    logic1_raw_eqFunction_3338,
    logic1_raw_eqFunction_3339,
    logic1_raw_eqFunction_3340,
    logic1_raw_eqFunction_3341,
    logic1_raw_eqFunction_3342,
    logic1_raw_eqFunction_3343,
    logic1_raw_eqFunction_3344,
    logic1_raw_eqFunction_3346,
    logic1_raw_eqFunction_3347,
    logic1_raw_eqFunction_3349,
    logic1_raw_eqFunction_3350,
    logic1_raw_eqFunction_3351,
    logic1_raw_eqFunction_3352,
    logic1_raw_eqFunction_3353,
    logic1_raw_eqFunction_3354,
    logic1_raw_eqFunction_3355,
    logic1_raw_eqFunction_3357,
    logic1_raw_eqFunction_3358,
    logic1_raw_eqFunction_3360,
    logic1_raw_eqFunction_3361,
    logic1_raw_eqFunction_3362,
    logic1_raw_eqFunction_3363,
    logic1_raw_eqFunction_3364,
    logic1_raw_eqFunction_3365,
    logic1_raw_eqFunction_3366,
    logic1_raw_eqFunction_3371,
    logic1_raw_eqFunction_3372,
    logic1_raw_eqFunction_3373,
    logic1_raw_eqFunction_3375,
    logic1_raw_eqFunction_3376,
    logic1_raw_eqFunction_3377,
    logic1_raw_eqFunction_3380,
    logic1_raw_eqFunction_3383,
    logic1_raw_eqFunction_3384,
    logic1_raw_eqFunction_3385,
    logic1_raw_eqFunction_3386,
    logic1_raw_eqFunction_3387,
    logic1_raw_eqFunction_3389,
    logic1_raw_eqFunction_3390,
    logic1_raw_eqFunction_3391,
    logic1_raw_eqFunction_3392,
    logic1_raw_eqFunction_3393,
    logic1_raw_eqFunction_3394,
    logic1_raw_eqFunction_3395,
    logic1_raw_eqFunction_3399,
    logic1_raw_eqFunction_3400,
    logic1_raw_eqFunction_3401,
    logic1_raw_eqFunction_3402,
    logic1_raw_eqFunction_3403,
    logic1_raw_eqFunction_3405,
    logic1_raw_eqFunction_3414,
    logic1_raw_eqFunction_3418,
    logic1_raw_eqFunction_3420,
    logic1_raw_eqFunction_3421,
    logic1_raw_eqFunction_3422,
    logic1_raw_eqFunction_3423,
    logic1_raw_eqFunction_3427,
    logic1_raw_eqFunction_3430,
    logic1_raw_eqFunction_3431,
    logic1_raw_eqFunction_3432,
    logic1_raw_eqFunction_3433,
    logic1_raw_eqFunction_3435,
    logic1_raw_eqFunction_3438,
    logic1_raw_eqFunction_3440,
    logic1_raw_eqFunction_3441,
    logic1_raw_eqFunction_3442,
    logic1_raw_eqFunction_3443,
    logic1_raw_eqFunction_3447,
    logic1_raw_eqFunction_3448,
    logic1_raw_eqFunction_3449,
    logic1_raw_eqFunction_3450,
    logic1_raw_eqFunction_3451,
    logic1_raw_eqFunction_3454,
    logic1_raw_eqFunction_3455,
    logic1_raw_eqFunction_3459,
    logic1_raw_eqFunction_3460,
    logic1_raw_eqFunction_3461,
    logic1_raw_eqFunction_3462,
    logic1_raw_eqFunction_3463,
    logic1_raw_eqFunction_3467,
    logic1_raw_eqFunction_3471,
    logic1_raw_eqFunction_3474,
    logic1_raw_eqFunction_3475,
    logic1_raw_eqFunction_3479,
    logic1_raw_eqFunction_3481,
    logic1_raw_eqFunction_3482,
    logic1_raw_eqFunction_3483,
    logic1_raw_eqFunction_3491,
    logic1_raw_eqFunction_3492,
    logic1_raw_eqFunction_3493,
    logic1_raw_eqFunction_3494,
    logic1_raw_eqFunction_3506,
    logic1_raw_eqFunction_3507,
    logic1_raw_eqFunction_3508,
    logic1_raw_eqFunction_3511,
    logic1_raw_eqFunction_3514,
    logic1_raw_eqFunction_3515,
    logic1_raw_eqFunction_3516,
    logic1_raw_eqFunction_3517,
    logic1_raw_eqFunction_3518,
    logic1_raw_eqFunction_3519,
    logic1_raw_eqFunction_3520,
    logic1_raw_eqFunction_3521,
    logic1_raw_eqFunction_3522,
    logic1_raw_eqFunction_3523,
    logic1_raw_eqFunction_3524,
    logic1_raw_eqFunction_3526,
    logic1_raw_eqFunction_3527,
    logic1_raw_eqFunction_3528,
    logic1_raw_eqFunction_3534,
    logic1_raw_eqFunction_3535,
    logic1_raw_eqFunction_3536,
    logic1_raw_eqFunction_3537,
    logic1_raw_eqFunction_3538,
    logic1_raw_eqFunction_3539,
    logic1_raw_eqFunction_3540,
    logic1_raw_eqFunction_3543,
    logic1_raw_eqFunction_3544,
    logic1_raw_eqFunction_3545,
    logic1_raw_eqFunction_3546,
    logic1_raw_eqFunction_3548,
    logic1_raw_eqFunction_3549,
    logic1_raw_eqFunction_3550,
    logic1_raw_eqFunction_3551,
    logic1_raw_eqFunction_3552,
    logic1_raw_eqFunction_3553,
    logic1_raw_eqFunction_3555,
    logic1_raw_eqFunction_3558,
    logic1_raw_eqFunction_3559,
    logic1_raw_eqFunction_3560,
    logic1_raw_eqFunction_3561,
    logic1_raw_eqFunction_3563,
    logic1_raw_eqFunction_3564,
    logic1_raw_eqFunction_3566,
    logic1_raw_eqFunction_3567,
    logic1_raw_eqFunction_3568,
    logic1_raw_eqFunction_3569,
    logic1_raw_eqFunction_3574,
    logic1_raw_eqFunction_3575,
    logic1_raw_eqFunction_3578,
    logic1_raw_eqFunction_3579,
    logic1_raw_eqFunction_3580,
    logic1_raw_eqFunction_3588,
    logic1_raw_eqFunction_3589,
    logic1_raw_eqFunction_3590,
    logic1_raw_eqFunction_3591,
    logic1_raw_eqFunction_3594,
    logic1_raw_eqFunction_3595,
    logic1_raw_eqFunction_3596,
    logic1_raw_eqFunction_3597,
    logic1_raw_eqFunction_3598,
    logic1_raw_eqFunction_3599,
    logic1_raw_eqFunction_3601,
    logic1_raw_eqFunction_3602,
    logic1_raw_eqFunction_3603,
    logic1_raw_eqFunction_3604,
    logic1_raw_eqFunction_3605,
    logic1_raw_eqFunction_3606,
    logic1_raw_eqFunction_3610,
    logic1_raw_eqFunction_3611,
    logic1_raw_eqFunction_3612,
    logic1_raw_eqFunction_3613,
    logic1_raw_eqFunction_3614,
    logic1_raw_eqFunction_3615,
    logic1_raw_eqFunction_3617,
    logic1_raw_eqFunction_3618,
    logic1_raw_eqFunction_3619,
    logic1_raw_eqFunction_3620,
    logic1_raw_eqFunction_3621,
    logic1_raw_eqFunction_3622,
    logic1_raw_eqFunction_3623,
    logic1_raw_eqFunction_3624,
    logic1_raw_eqFunction_3625,
    logic1_raw_eqFunction_3626,
    logic1_raw_eqFunction_3627,
    logic1_raw_eqFunction_3628,
    logic1_raw_eqFunction_3629,
    logic1_raw_eqFunction_3630,
    logic1_raw_eqFunction_3631,
    logic1_raw_eqFunction_3632,
    logic1_raw_eqFunction_3633,
    logic1_raw_eqFunction_3636,
    logic1_raw_eqFunction_3637,
    logic1_raw_eqFunction_3638,
    logic1_raw_eqFunction_3639,
    logic1_raw_eqFunction_3641,
    logic1_raw_eqFunction_3642,
    logic1_raw_eqFunction_3643,
    logic1_raw_eqFunction_3644,
    logic1_raw_eqFunction_3645,
    logic1_raw_eqFunction_3650,
    logic1_raw_eqFunction_3651,
    logic1_raw_eqFunction_3652,
    logic1_raw_eqFunction_3653,
    logic1_raw_eqFunction_3654,
    logic1_raw_eqFunction_3655,
    logic1_raw_eqFunction_3656,
    logic1_raw_eqFunction_3657,
    logic1_raw_eqFunction_3658,
    logic1_raw_eqFunction_3659,
    logic1_raw_eqFunction_3660,
    logic1_raw_eqFunction_3661,
    logic1_raw_eqFunction_3662,
    logic1_raw_eqFunction_3663,
    logic1_raw_eqFunction_3664,
    logic1_raw_eqFunction_3665,
    logic1_raw_eqFunction_3669,
    logic1_raw_eqFunction_3673,
    logic1_raw_eqFunction_3674,
    logic1_raw_eqFunction_3675,
    logic1_raw_eqFunction_3676,
    logic1_raw_eqFunction_3681,
    logic1_raw_eqFunction_3682,
    logic1_raw_eqFunction_3683,
    logic1_raw_eqFunction_3684,
    logic1_raw_eqFunction_3685,
    logic1_raw_eqFunction_3686,
    logic1_raw_eqFunction_3687,
    logic1_raw_eqFunction_3688,
    logic1_raw_eqFunction_3689,
    logic1_raw_eqFunction_3690,
    logic1_raw_eqFunction_3691,
    logic1_raw_eqFunction_3692,
    logic1_raw_eqFunction_3693,
    logic1_raw_eqFunction_3694,
    logic1_raw_eqFunction_3695,
    logic1_raw_eqFunction_3696,
    logic1_raw_eqFunction_3697,
    logic1_raw_eqFunction_3698,
    logic1_raw_eqFunction_3699,
    logic1_raw_eqFunction_3700,
    logic1_raw_eqFunction_3701,
    logic1_raw_eqFunction_3705,
    logic1_raw_eqFunction_3706,
    logic1_raw_eqFunction_3707,
    logic1_raw_eqFunction_3708,
    logic1_raw_eqFunction_3709,
    logic1_raw_eqFunction_3712,
    logic1_raw_eqFunction_3713,
    logic1_raw_eqFunction_3714,
    logic1_raw_eqFunction_3715,
    logic1_raw_eqFunction_3723,
    logic1_raw_eqFunction_3724,
    logic1_raw_eqFunction_3725,
    logic1_raw_eqFunction_3726,
    logic1_raw_eqFunction_3729,
    logic1_raw_eqFunction_3730,
    logic1_raw_eqFunction_3731,
    logic1_raw_eqFunction_3732,
    logic1_raw_eqFunction_3733,
    logic1_raw_eqFunction_3741,
    logic1_raw_eqFunction_3742,
    logic1_raw_eqFunction_3743,
    logic1_raw_eqFunction_3744,
    logic1_raw_eqFunction_3745,
    logic1_raw_eqFunction_3746,
    logic1_raw_eqFunction_3747,
    logic1_raw_eqFunction_3749,
    logic1_raw_eqFunction_3750,
    logic1_raw_eqFunction_3752,
    logic1_raw_eqFunction_3753,
    logic1_raw_eqFunction_3754,
    logic1_raw_eqFunction_3756,
    logic1_raw_eqFunction_3757,
    logic1_raw_eqFunction_3758,
    logic1_raw_eqFunction_3759,
    logic1_raw_eqFunction_3760,
    logic1_raw_eqFunction_3780,
    logic1_raw_eqFunction_3782,
    logic1_raw_eqFunction_3783,
    logic1_raw_eqFunction_3784,
    logic1_raw_eqFunction_3785,
    logic1_raw_eqFunction_3786,
    logic1_raw_eqFunction_3787,
    logic1_raw_eqFunction_3788,
    logic1_raw_eqFunction_3789,
    logic1_raw_eqFunction_3790,
    logic1_raw_eqFunction_3791,
    logic1_raw_eqFunction_3792,
    logic1_raw_eqFunction_3808,
    logic1_raw_eqFunction_3809,
    logic1_raw_eqFunction_3813,
    logic1_raw_eqFunction_3814,
    logic1_raw_eqFunction_3815,
    logic1_raw_eqFunction_3816,
    logic1_raw_eqFunction_3817,
    logic1_raw_eqFunction_3818,
    logic1_raw_eqFunction_3819,
    logic1_raw_eqFunction_3820,
    logic1_raw_eqFunction_3821,
    logic1_raw_eqFunction_3822,
    logic1_raw_eqFunction_3823,
    logic1_raw_eqFunction_3824,
    logic1_raw_eqFunction_3825,
    logic1_raw_eqFunction_3826,
    logic1_raw_eqFunction_3827,
    logic1_raw_eqFunction_3828,
    logic1_raw_eqFunction_3829,
    logic1_raw_eqFunction_3830,
    logic1_raw_eqFunction_3831,
    logic1_raw_eqFunction_3832,
    logic1_raw_eqFunction_3833,
    logic1_raw_eqFunction_3834,
    logic1_raw_eqFunction_3835,
    logic1_raw_eqFunction_3836,
    logic1_raw_eqFunction_3838,
    logic1_raw_eqFunction_3839,
    logic1_raw_eqFunction_3840,
    logic1_raw_eqFunction_3841,
    logic1_raw_eqFunction_3842,
    logic1_raw_eqFunction_3843,
    logic1_raw_eqFunction_3844,
    logic1_raw_eqFunction_3845,
    logic1_raw_eqFunction_3846,
    logic1_raw_eqFunction_3847,
    logic1_raw_eqFunction_3848,
    logic1_raw_eqFunction_3849,
    logic1_raw_eqFunction_3850,
    logic1_raw_eqFunction_3851,
    logic1_raw_eqFunction_3852,
    logic1_raw_eqFunction_3853,
    logic1_raw_eqFunction_3854,
    logic1_raw_eqFunction_3855,
    logic1_raw_eqFunction_3856,
    logic1_raw_eqFunction_3857,
    logic1_raw_eqFunction_3858,
    logic1_raw_eqFunction_3859,
    logic1_raw_eqFunction_3860,
    logic1_raw_eqFunction_3861,
    logic1_raw_eqFunction_3862,
    logic1_raw_eqFunction_3864,
    logic1_raw_eqFunction_3865,
    logic1_raw_eqFunction_3866
  };
  
  for (int id = 0; id < 511; id++) {
    eqFunctions[id](data, threadData);
  }
  
  return 0;
}

int logic1_raw_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
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
  tmp2 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2675]] /* ramp.startTime PARAM */));
  tmp0 = LessZC(data->localData[0]->timeValue, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2675]] /* ramp.startTime PARAM */), tmp1, tmp2, data->simulationInfo->storedRelations[0]);
  gout[start_index] = (tmp0) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp4 = 1.0;
  tmp5 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2675]] /* ramp.startTime PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2672]] /* ramp.duration PARAM */));
  tmp3 = LessZC(data->localData[0]->timeValue, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2675]] /* ramp.startTime PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2672]] /* ramp.duration PARAM */), tmp4, tmp5, data->simulationInfo->storedRelations[1]);
  gout[start_index] = (tmp3) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp7 = 1.0;
  tmp8 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[416]] /* chillerStagingCtrl.minimumLoad_TR PARAM */));
  tmp6 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[446]] /* chillerStagingCtrl.roomHeatGain_TR variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[416]] /* chillerStagingCtrl.minimumLoad_TR PARAM */), tmp7, tmp8, data->simulationInfo->storedRelations[2]);
  gout[start_index] = (tmp6) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp10 = 1.0;
  tmp11 = 1.0;
  tmp9 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1295]] /* weaData.add.y variable */), (data->simulationInfo->realVarsPre[1349] /* weaData.conTim1.tNext DISCRETE */), tmp10, tmp11, data->simulationInfo->storedRelations[3]);
  gout[start_index] = (((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[874]] /* weaData.conTim1.canRepeatWeatherFile PARAM */) && tmp9)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp13 = 1.0;
  tmp14 = 1.0;
  tmp12 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1277]] /* weaBus.cloTim variable */), (data->simulationInfo->realVarsPre[1348] /* weaData.conTim.tNext DISCRETE */), tmp13, tmp14, data->simulationInfo->storedRelations[4]);
  gout[start_index] = (((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[873]] /* weaData.conTim.canRepeatWeatherFile PARAM */) && tmp12)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp18 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2720]] /* val5.m_flow_nominal_pos PARAM */),2.220446049250313e-16);
  tmp16 = fabs((tmp18?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2720]] /* val5.m_flow_nominal_pos PARAM */):1.0));
  tmp17 = 0.0;
  tmp15 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1214]] /* val5.m_flow variable */), 0.0, tmp16, tmp17, data->simulationInfo->storedRelations[5]);
  gout[start_index] = (tmp15) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp22 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2720]] /* val5.m_flow_nominal_pos PARAM */),2.220446049250313e-16);
  tmp20 = fabs((tmp22?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2720]] /* val5.m_flow_nominal_pos PARAM */):1.0));
  tmp21 = 0.0;
  tmp19 = GreaterZC((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1214]] /* val5.m_flow variable */)), 0.0, tmp20, tmp21, data->simulationInfo->storedRelations[6]);
  gout[start_index] = (tmp19) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp26 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2766]] /* val7.m_flow_nominal_pos PARAM */),2.220446049250313e-16);
  tmp24 = fabs((tmp26?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2766]] /* val7.m_flow_nominal_pos PARAM */):1.0));
  tmp25 = 0.0;
  tmp23 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1224]] /* val7.m_flow variable */), 0.0, tmp24, tmp25, data->simulationInfo->storedRelations[7]);
  gout[start_index] = (tmp23) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp30 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2766]] /* val7.m_flow_nominal_pos PARAM */),2.220446049250313e-16);
  tmp28 = fabs((tmp30?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2766]] /* val7.m_flow_nominal_pos PARAM */):1.0));
  tmp29 = 0.0;
  tmp27 = GreaterZC((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1224]] /* val7.m_flow variable */)), 0.0, tmp28, tmp29, data->simulationInfo->storedRelations[8]);
  gout[start_index] = (tmp27) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp32 = 1.0;
  tmp33 = 1.0;
  tmp31 = GreaterEqZC(data->localData[0]->timeValue, (data->simulationInfo->realVarsPre[1347] /* chwPump2PID.nextControlTime DISCRETE */), tmp32, tmp33, data->simulationInfo->storedRelations[9]);
  gout[start_index] = (tmp31) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp35 = 1.0;
  tmp36 = 1.0;
  tmp34 = GreaterEqZC(data->localData[0]->timeValue, (data->simulationInfo->realVarsPre[1341] /* chwPump1PID.nextControlTime DISCRETE */), tmp35, tmp36, data->simulationInfo->storedRelations[10]);
  gout[start_index] = (tmp34) ? 1 : -1;
  current_index++;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  return 0;
}

const char *logic1_raw_relationDescription(int i)
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
  "time >= pre(chwPump2PID.nextControlTime)",
  "time >= pre(chwPump1PID.nextControlTime)"};
  return res[i];
}

int logic1_raw_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
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
    tmp39 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2675]] /* ramp.startTime PARAM */));
    tmp37 = LessZC(data->localData[0]->timeValue, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2675]] /* ramp.startTime PARAM */), tmp38, tmp39, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[start_index] = tmp37;
    current_index++;

    start_index = current_index;
    tmp41 = 1.0;
    tmp42 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2675]] /* ramp.startTime PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2672]] /* ramp.duration PARAM */));
    tmp40 = LessZC(data->localData[0]->timeValue, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2675]] /* ramp.startTime PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2672]] /* ramp.duration PARAM */), tmp41, tmp42, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[start_index] = tmp40;
    current_index++;

    start_index = current_index;
    tmp44 = 1.0;
    tmp45 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[416]] /* chillerStagingCtrl.minimumLoad_TR PARAM */));
    tmp43 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[446]] /* chillerStagingCtrl.roomHeatGain_TR variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[416]] /* chillerStagingCtrl.minimumLoad_TR PARAM */), tmp44, tmp45, data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[start_index] = tmp43;
    current_index++;

    start_index = current_index;
    tmp47 = 1.0;
    tmp48 = 1.0;
    tmp46 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1295]] /* weaData.add.y variable */), (data->simulationInfo->realVarsPre[1349] /* weaData.conTim1.tNext DISCRETE */), tmp47, tmp48, data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[start_index] = tmp46;
    current_index++;

    start_index = current_index;
    tmp50 = 1.0;
    tmp51 = 1.0;
    tmp49 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1277]] /* weaBus.cloTim variable */), (data->simulationInfo->realVarsPre[1348] /* weaData.conTim.tNext DISCRETE */), tmp50, tmp51, data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[start_index] = tmp49;
    current_index++;

    start_index = current_index;
    tmp55 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2720]] /* val5.m_flow_nominal_pos PARAM */),2.220446049250313e-16);
    tmp53 = fabs((tmp55?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2720]] /* val5.m_flow_nominal_pos PARAM */):1.0));
    tmp54 = 0.0;
    tmp52 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1214]] /* val5.m_flow variable */), 0.0, tmp53, tmp54, data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[start_index] = tmp52;
    current_index++;

    start_index = current_index;
    tmp59 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2720]] /* val5.m_flow_nominal_pos PARAM */),2.220446049250313e-16);
    tmp57 = fabs((tmp59?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2720]] /* val5.m_flow_nominal_pos PARAM */):1.0));
    tmp58 = 0.0;
    tmp56 = GreaterZC((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1214]] /* val5.m_flow variable */)), 0.0, tmp57, tmp58, data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[start_index] = tmp56;
    current_index++;

    start_index = current_index;
    tmp63 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2766]] /* val7.m_flow_nominal_pos PARAM */),2.220446049250313e-16);
    tmp61 = fabs((tmp63?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2766]] /* val7.m_flow_nominal_pos PARAM */):1.0));
    tmp62 = 0.0;
    tmp60 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1224]] /* val7.m_flow variable */), 0.0, tmp61, tmp62, data->simulationInfo->storedRelations[7]);
    data->simulationInfo->relations[start_index] = tmp60;
    current_index++;

    start_index = current_index;
    tmp67 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2766]] /* val7.m_flow_nominal_pos PARAM */),2.220446049250313e-16);
    tmp65 = fabs((tmp67?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2766]] /* val7.m_flow_nominal_pos PARAM */):1.0));
    tmp66 = 0.0;
    tmp64 = GreaterZC((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1224]] /* val7.m_flow variable */)), 0.0, tmp65, tmp66, data->simulationInfo->storedRelations[8]);
    data->simulationInfo->relations[start_index] = tmp64;
    current_index++;

    start_index = current_index;
    tmp69 = 1.0;
    tmp70 = 1.0;
    tmp68 = GreaterEqZC(data->localData[0]->timeValue, (data->simulationInfo->realVarsPre[1347] /* chwPump2PID.nextControlTime DISCRETE */), tmp69, tmp70, data->simulationInfo->storedRelations[9]);
    data->simulationInfo->relations[start_index] = tmp68;
    current_index++;

    start_index = current_index;
    tmp72 = 1.0;
    tmp73 = 1.0;
    tmp71 = GreaterEqZC(data->localData[0]->timeValue, (data->simulationInfo->realVarsPre[1341] /* chwPump1PID.nextControlTime DISCRETE */), tmp72, tmp73, data->simulationInfo->storedRelations[10]);
    data->simulationInfo->relations[start_index] = tmp71;
    current_index++;
  } else {
    start_index = current_index;
    data->simulationInfo->relations[start_index] = (data->localData[0]->timeValue < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2675]] /* ramp.startTime PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (data->localData[0]->timeValue < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2675]] /* ramp.startTime PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2672]] /* ramp.duration PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[446]] /* chillerStagingCtrl.roomHeatGain_TR variable */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[416]] /* chillerStagingCtrl.minimumLoad_TR PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1295]] /* weaData.add.y variable */) > (data->simulationInfo->realVarsPre[1349] /* weaData.conTim1.tNext DISCRETE */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1277]] /* weaBus.cloTim variable */) > (data->simulationInfo->realVarsPre[1348] /* weaData.conTim.tNext DISCRETE */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1214]] /* val5.m_flow variable */) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1214]] /* val5.m_flow variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1224]] /* val7.m_flow variable */) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1224]] /* val7.m_flow variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (data->localData[0]->timeValue >= (data->simulationInfo->realVarsPre[1347] /* chwPump2PID.nextControlTime DISCRETE */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (data->localData[0]->timeValue >= (data->simulationInfo->realVarsPre[1341] /* chwPump1PID.nextControlTime DISCRETE */));
    current_index++;
  }
  
  return 0;
}

#if defined(__cplusplus)
}
#endif
