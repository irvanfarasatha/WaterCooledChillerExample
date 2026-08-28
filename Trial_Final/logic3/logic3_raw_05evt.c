/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "logic3_raw_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void logic3_raw_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
  /* sample 1 */
  data->modelData->samplesInfo[i].index = 1;
  data->modelData->samplesInfo[i].start = 0.0;
  data->modelData->samplesInfo[i].interval = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[418]] /* chillerStagingCtrl.samplePeriod PARAM */) /* (max real for single time events) */;
  i++;
}

const char *logic3_raw_zeroCrossingDescription(int i, int **out_EquationIndexes)
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
  "time >= pre(combinedCtrl2.nextControlTime)",
  "time >= pre(combinedCtrl1.nextControlTime)"};
  static const int occurEqs0[] = {1,3162};
  static const int occurEqs1[] = {1,3162};
  static const int occurEqs2[] = {1,3166};
  static const int occurEqs3[] = {1,3028};
  static const int occurEqs4[] = {1,3046};
  static const int occurEqs5[] = {1,3697};
  static const int occurEqs6[] = {1,3703};
  static const int occurEqs7[] = {1,3666};
  static const int occurEqs8[] = {1,3670};
  static const int occurEqs9[] = {1,3646};
  static const int occurEqs10[] = {1,3640};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4,occurEqs5,occurEqs6,occurEqs7,occurEqs8,occurEqs9,occurEqs10};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void logic3_raw_eqFunction_2952(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_2954(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_2955(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_2958(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_2960(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_2961(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_2962(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_2963(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_2967(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_2969(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_2970(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_2971(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_2972(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_2973(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_2977(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_2978(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_2979(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_2980(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_2981(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_2982(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_2986(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_2991(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_2992(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_2993(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_2994(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_2998(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3002(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3003(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3007(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3008(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3009(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3012(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3013(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3014(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3015(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3023(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3026(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3027(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3046(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3048(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3082(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3083(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3084(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3087(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3088(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3089(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3090(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3095(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3096(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3110(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3111(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3130(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3135(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3136(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3137(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3138(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3139(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3140(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3141(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3142(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3143(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3144(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3145(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3146(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3147(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3148(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3149(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3150(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3151(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3152(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3153(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3155(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3156(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3161(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3162(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3164(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3165(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3166(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3167(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3168(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3169(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3170(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3171(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3172(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3174(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3175(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3176(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3177(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3178(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3179(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3180(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3181(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3182(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3183(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3184(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3185(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3187(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3190(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3191(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3192(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3193(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3194(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3199(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3200(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3201(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3205(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3212(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3214(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3215(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3216(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3217(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3218(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3219(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3220(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3221(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3222(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3223(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3224(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3229(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3259(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3260(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3261(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3262(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3265(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3266(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3275(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3277(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3278(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3279(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3280(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3281(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3282(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3283(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3285(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3286(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3287(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3288(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3289(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3294(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3295(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3296(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3297(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3298(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3299(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3300(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3301(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3302(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3303(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3304(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3305(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3306(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3307(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3308(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3309(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3310(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3322(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3323(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3324(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3325(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3326(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3327(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3328(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3329(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3330(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3331(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3332(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3333(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3334(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3335(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3337(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3338(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3341(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3343(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3344(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3346(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3347(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3348(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3349(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3350(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3351(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3352(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3353(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3354(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3355(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3356(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3358(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3359(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3361(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3362(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3363(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3364(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3365(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3366(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3367(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3369(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3370(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3372(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3373(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3374(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3375(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3376(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3377(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3378(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3383(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3384(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3385(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3387(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3388(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3389(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3392(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3395(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3396(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3397(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3398(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3399(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3401(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3402(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3403(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3404(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3405(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3406(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3407(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3411(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3412(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3413(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3414(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3415(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3417(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3426(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3430(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3432(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3433(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3434(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3435(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3439(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3442(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3443(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3444(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3445(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3447(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3450(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3452(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3453(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3454(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3455(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3459(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3460(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3461(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3462(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3463(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3466(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3467(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3471(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3472(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3473(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3474(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3475(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3479(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3483(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3486(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3487(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3491(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3493(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3494(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3495(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3503(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3504(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3505(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3506(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3518(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3519(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3520(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3523(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3526(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3527(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3528(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3529(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3530(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3531(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3532(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3533(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3534(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3535(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3536(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3538(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3539(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3540(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3546(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3547(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3548(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3549(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3550(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3551(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3552(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3555(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3556(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3557(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3558(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3560(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3561(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3562(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3563(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3564(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3565(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3567(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3570(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3571(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3572(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3573(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3575(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3576(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3578(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3579(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3580(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3581(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3586(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3587(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3590(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3591(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3592(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3600(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3601(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3602(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3603(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3606(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3607(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3608(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3609(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3610(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3611(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3613(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3614(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3615(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3616(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3617(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3618(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3622(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3623(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3624(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3625(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3626(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3627(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3629(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3630(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3631(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3632(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3633(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3634(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3635(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3636(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3637(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3638(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3639(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3640(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3641(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3642(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3643(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3644(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3645(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3646(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3647(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3648(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3649(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3652(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3653(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3654(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3655(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3657(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3658(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3659(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3660(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3661(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3666(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3667(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3668(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3669(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3670(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3671(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3672(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3673(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3674(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3675(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3676(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3677(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3678(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3679(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3680(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3681(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3685(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3689(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3690(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3691(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3692(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3697(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3698(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3699(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3700(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3701(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3702(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3703(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3704(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3705(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3706(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3707(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3708(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3709(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3710(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3711(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3712(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3713(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3714(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3715(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3716(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3717(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3721(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3722(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3723(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3724(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3725(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3728(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3729(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3730(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3731(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3739(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3740(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3741(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3742(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3745(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3746(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3747(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3748(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3749(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3757(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3758(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3759(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3760(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3761(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3762(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3763(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3765(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3766(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3768(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3769(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3770(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3772(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3773(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3774(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3775(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3776(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3796(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3798(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3799(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3800(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3801(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3802(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3803(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3804(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3805(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3806(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3807(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3808(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3824(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3825(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3826(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3827(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3828(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3829(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3830(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3831(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3833(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3836(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3837(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3838(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3839(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3840(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3841(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3842(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3843(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3844(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3845(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3846(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3847(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3848(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3849(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3850(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3851(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3852(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3854(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3855(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3856(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3857(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3858(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3859(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3860(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3861(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3862(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3863(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3864(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3865(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3866(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3867(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3868(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3869(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3870(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3871(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3872(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3873(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3874(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3875(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3876(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3877(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3878(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3880(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3881(DATA* data, threadData_t *threadData);
extern void logic3_raw_eqFunction_3882(DATA* data, threadData_t *threadData);

int logic3_raw_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  static void (*const eqFunctions[515])(DATA*, threadData_t*) = {
    logic3_raw_eqFunction_2952,
    logic3_raw_eqFunction_2954,
    logic3_raw_eqFunction_2955,
    logic3_raw_eqFunction_2958,
    logic3_raw_eqFunction_2960,
    logic3_raw_eqFunction_2961,
    logic3_raw_eqFunction_2962,
    logic3_raw_eqFunction_2963,
    logic3_raw_eqFunction_2967,
    logic3_raw_eqFunction_2969,
    logic3_raw_eqFunction_2970,
    logic3_raw_eqFunction_2971,
    logic3_raw_eqFunction_2972,
    logic3_raw_eqFunction_2973,
    logic3_raw_eqFunction_2977,
    logic3_raw_eqFunction_2978,
    logic3_raw_eqFunction_2979,
    logic3_raw_eqFunction_2980,
    logic3_raw_eqFunction_2981,
    logic3_raw_eqFunction_2982,
    logic3_raw_eqFunction_2986,
    logic3_raw_eqFunction_2991,
    logic3_raw_eqFunction_2992,
    logic3_raw_eqFunction_2993,
    logic3_raw_eqFunction_2994,
    logic3_raw_eqFunction_2998,
    logic3_raw_eqFunction_3002,
    logic3_raw_eqFunction_3003,
    logic3_raw_eqFunction_3007,
    logic3_raw_eqFunction_3008,
    logic3_raw_eqFunction_3009,
    logic3_raw_eqFunction_3012,
    logic3_raw_eqFunction_3013,
    logic3_raw_eqFunction_3014,
    logic3_raw_eqFunction_3015,
    logic3_raw_eqFunction_3023,
    logic3_raw_eqFunction_3026,
    logic3_raw_eqFunction_3027,
    logic3_raw_eqFunction_3046,
    logic3_raw_eqFunction_3048,
    logic3_raw_eqFunction_3082,
    logic3_raw_eqFunction_3083,
    logic3_raw_eqFunction_3084,
    logic3_raw_eqFunction_3087,
    logic3_raw_eqFunction_3088,
    logic3_raw_eqFunction_3089,
    logic3_raw_eqFunction_3090,
    logic3_raw_eqFunction_3095,
    logic3_raw_eqFunction_3096,
    logic3_raw_eqFunction_3110,
    logic3_raw_eqFunction_3111,
    logic3_raw_eqFunction_3130,
    logic3_raw_eqFunction_3135,
    logic3_raw_eqFunction_3136,
    logic3_raw_eqFunction_3137,
    logic3_raw_eqFunction_3138,
    logic3_raw_eqFunction_3139,
    logic3_raw_eqFunction_3140,
    logic3_raw_eqFunction_3141,
    logic3_raw_eqFunction_3142,
    logic3_raw_eqFunction_3143,
    logic3_raw_eqFunction_3144,
    logic3_raw_eqFunction_3145,
    logic3_raw_eqFunction_3146,
    logic3_raw_eqFunction_3147,
    logic3_raw_eqFunction_3148,
    logic3_raw_eqFunction_3149,
    logic3_raw_eqFunction_3150,
    logic3_raw_eqFunction_3151,
    logic3_raw_eqFunction_3152,
    logic3_raw_eqFunction_3153,
    logic3_raw_eqFunction_3155,
    logic3_raw_eqFunction_3156,
    logic3_raw_eqFunction_3161,
    logic3_raw_eqFunction_3162,
    logic3_raw_eqFunction_3164,
    logic3_raw_eqFunction_3165,
    logic3_raw_eqFunction_3166,
    logic3_raw_eqFunction_3167,
    logic3_raw_eqFunction_3168,
    logic3_raw_eqFunction_3169,
    logic3_raw_eqFunction_3170,
    logic3_raw_eqFunction_3171,
    logic3_raw_eqFunction_3172,
    logic3_raw_eqFunction_3174,
    logic3_raw_eqFunction_3175,
    logic3_raw_eqFunction_3176,
    logic3_raw_eqFunction_3177,
    logic3_raw_eqFunction_3178,
    logic3_raw_eqFunction_3179,
    logic3_raw_eqFunction_3180,
    logic3_raw_eqFunction_3181,
    logic3_raw_eqFunction_3182,
    logic3_raw_eqFunction_3183,
    logic3_raw_eqFunction_3184,
    logic3_raw_eqFunction_3185,
    logic3_raw_eqFunction_3187,
    logic3_raw_eqFunction_3190,
    logic3_raw_eqFunction_3191,
    logic3_raw_eqFunction_3192,
    logic3_raw_eqFunction_3193,
    logic3_raw_eqFunction_3194,
    logic3_raw_eqFunction_3199,
    logic3_raw_eqFunction_3200,
    logic3_raw_eqFunction_3201,
    logic3_raw_eqFunction_3205,
    logic3_raw_eqFunction_3212,
    logic3_raw_eqFunction_3214,
    logic3_raw_eqFunction_3215,
    logic3_raw_eqFunction_3216,
    logic3_raw_eqFunction_3217,
    logic3_raw_eqFunction_3218,
    logic3_raw_eqFunction_3219,
    logic3_raw_eqFunction_3220,
    logic3_raw_eqFunction_3221,
    logic3_raw_eqFunction_3222,
    logic3_raw_eqFunction_3223,
    logic3_raw_eqFunction_3224,
    logic3_raw_eqFunction_3229,
    logic3_raw_eqFunction_3259,
    logic3_raw_eqFunction_3260,
    logic3_raw_eqFunction_3261,
    logic3_raw_eqFunction_3262,
    logic3_raw_eqFunction_3265,
    logic3_raw_eqFunction_3266,
    logic3_raw_eqFunction_3275,
    logic3_raw_eqFunction_3277,
    logic3_raw_eqFunction_3278,
    logic3_raw_eqFunction_3279,
    logic3_raw_eqFunction_3280,
    logic3_raw_eqFunction_3281,
    logic3_raw_eqFunction_3282,
    logic3_raw_eqFunction_3283,
    logic3_raw_eqFunction_3285,
    logic3_raw_eqFunction_3286,
    logic3_raw_eqFunction_3287,
    logic3_raw_eqFunction_3288,
    logic3_raw_eqFunction_3289,
    logic3_raw_eqFunction_3294,
    logic3_raw_eqFunction_3295,
    logic3_raw_eqFunction_3296,
    logic3_raw_eqFunction_3297,
    logic3_raw_eqFunction_3298,
    logic3_raw_eqFunction_3299,
    logic3_raw_eqFunction_3300,
    logic3_raw_eqFunction_3301,
    logic3_raw_eqFunction_3302,
    logic3_raw_eqFunction_3303,
    logic3_raw_eqFunction_3304,
    logic3_raw_eqFunction_3305,
    logic3_raw_eqFunction_3306,
    logic3_raw_eqFunction_3307,
    logic3_raw_eqFunction_3308,
    logic3_raw_eqFunction_3309,
    logic3_raw_eqFunction_3310,
    logic3_raw_eqFunction_3322,
    logic3_raw_eqFunction_3323,
    logic3_raw_eqFunction_3324,
    logic3_raw_eqFunction_3325,
    logic3_raw_eqFunction_3326,
    logic3_raw_eqFunction_3327,
    logic3_raw_eqFunction_3328,
    logic3_raw_eqFunction_3329,
    logic3_raw_eqFunction_3330,
    logic3_raw_eqFunction_3331,
    logic3_raw_eqFunction_3332,
    logic3_raw_eqFunction_3333,
    logic3_raw_eqFunction_3334,
    logic3_raw_eqFunction_3335,
    logic3_raw_eqFunction_3337,
    logic3_raw_eqFunction_3338,
    logic3_raw_eqFunction_3341,
    logic3_raw_eqFunction_3343,
    logic3_raw_eqFunction_3344,
    logic3_raw_eqFunction_3346,
    logic3_raw_eqFunction_3347,
    logic3_raw_eqFunction_3348,
    logic3_raw_eqFunction_3349,
    logic3_raw_eqFunction_3350,
    logic3_raw_eqFunction_3351,
    logic3_raw_eqFunction_3352,
    logic3_raw_eqFunction_3353,
    logic3_raw_eqFunction_3354,
    logic3_raw_eqFunction_3355,
    logic3_raw_eqFunction_3356,
    logic3_raw_eqFunction_3358,
    logic3_raw_eqFunction_3359,
    logic3_raw_eqFunction_3361,
    logic3_raw_eqFunction_3362,
    logic3_raw_eqFunction_3363,
    logic3_raw_eqFunction_3364,
    logic3_raw_eqFunction_3365,
    logic3_raw_eqFunction_3366,
    logic3_raw_eqFunction_3367,
    logic3_raw_eqFunction_3369,
    logic3_raw_eqFunction_3370,
    logic3_raw_eqFunction_3372,
    logic3_raw_eqFunction_3373,
    logic3_raw_eqFunction_3374,
    logic3_raw_eqFunction_3375,
    logic3_raw_eqFunction_3376,
    logic3_raw_eqFunction_3377,
    logic3_raw_eqFunction_3378,
    logic3_raw_eqFunction_3383,
    logic3_raw_eqFunction_3384,
    logic3_raw_eqFunction_3385,
    logic3_raw_eqFunction_3387,
    logic3_raw_eqFunction_3388,
    logic3_raw_eqFunction_3389,
    logic3_raw_eqFunction_3392,
    logic3_raw_eqFunction_3395,
    logic3_raw_eqFunction_3396,
    logic3_raw_eqFunction_3397,
    logic3_raw_eqFunction_3398,
    logic3_raw_eqFunction_3399,
    logic3_raw_eqFunction_3401,
    logic3_raw_eqFunction_3402,
    logic3_raw_eqFunction_3403,
    logic3_raw_eqFunction_3404,
    logic3_raw_eqFunction_3405,
    logic3_raw_eqFunction_3406,
    logic3_raw_eqFunction_3407,
    logic3_raw_eqFunction_3411,
    logic3_raw_eqFunction_3412,
    logic3_raw_eqFunction_3413,
    logic3_raw_eqFunction_3414,
    logic3_raw_eqFunction_3415,
    logic3_raw_eqFunction_3417,
    logic3_raw_eqFunction_3426,
    logic3_raw_eqFunction_3430,
    logic3_raw_eqFunction_3432,
    logic3_raw_eqFunction_3433,
    logic3_raw_eqFunction_3434,
    logic3_raw_eqFunction_3435,
    logic3_raw_eqFunction_3439,
    logic3_raw_eqFunction_3442,
    logic3_raw_eqFunction_3443,
    logic3_raw_eqFunction_3444,
    logic3_raw_eqFunction_3445,
    logic3_raw_eqFunction_3447,
    logic3_raw_eqFunction_3450,
    logic3_raw_eqFunction_3452,
    logic3_raw_eqFunction_3453,
    logic3_raw_eqFunction_3454,
    logic3_raw_eqFunction_3455,
    logic3_raw_eqFunction_3459,
    logic3_raw_eqFunction_3460,
    logic3_raw_eqFunction_3461,
    logic3_raw_eqFunction_3462,
    logic3_raw_eqFunction_3463,
    logic3_raw_eqFunction_3466,
    logic3_raw_eqFunction_3467,
    logic3_raw_eqFunction_3471,
    logic3_raw_eqFunction_3472,
    logic3_raw_eqFunction_3473,
    logic3_raw_eqFunction_3474,
    logic3_raw_eqFunction_3475,
    logic3_raw_eqFunction_3479,
    logic3_raw_eqFunction_3483,
    logic3_raw_eqFunction_3486,
    logic3_raw_eqFunction_3487,
    logic3_raw_eqFunction_3491,
    logic3_raw_eqFunction_3493,
    logic3_raw_eqFunction_3494,
    logic3_raw_eqFunction_3495,
    logic3_raw_eqFunction_3503,
    logic3_raw_eqFunction_3504,
    logic3_raw_eqFunction_3505,
    logic3_raw_eqFunction_3506,
    logic3_raw_eqFunction_3518,
    logic3_raw_eqFunction_3519,
    logic3_raw_eqFunction_3520,
    logic3_raw_eqFunction_3523,
    logic3_raw_eqFunction_3526,
    logic3_raw_eqFunction_3527,
    logic3_raw_eqFunction_3528,
    logic3_raw_eqFunction_3529,
    logic3_raw_eqFunction_3530,
    logic3_raw_eqFunction_3531,
    logic3_raw_eqFunction_3532,
    logic3_raw_eqFunction_3533,
    logic3_raw_eqFunction_3534,
    logic3_raw_eqFunction_3535,
    logic3_raw_eqFunction_3536,
    logic3_raw_eqFunction_3538,
    logic3_raw_eqFunction_3539,
    logic3_raw_eqFunction_3540,
    logic3_raw_eqFunction_3546,
    logic3_raw_eqFunction_3547,
    logic3_raw_eqFunction_3548,
    logic3_raw_eqFunction_3549,
    logic3_raw_eqFunction_3550,
    logic3_raw_eqFunction_3551,
    logic3_raw_eqFunction_3552,
    logic3_raw_eqFunction_3555,
    logic3_raw_eqFunction_3556,
    logic3_raw_eqFunction_3557,
    logic3_raw_eqFunction_3558,
    logic3_raw_eqFunction_3560,
    logic3_raw_eqFunction_3561,
    logic3_raw_eqFunction_3562,
    logic3_raw_eqFunction_3563,
    logic3_raw_eqFunction_3564,
    logic3_raw_eqFunction_3565,
    logic3_raw_eqFunction_3567,
    logic3_raw_eqFunction_3570,
    logic3_raw_eqFunction_3571,
    logic3_raw_eqFunction_3572,
    logic3_raw_eqFunction_3573,
    logic3_raw_eqFunction_3575,
    logic3_raw_eqFunction_3576,
    logic3_raw_eqFunction_3578,
    logic3_raw_eqFunction_3579,
    logic3_raw_eqFunction_3580,
    logic3_raw_eqFunction_3581,
    logic3_raw_eqFunction_3586,
    logic3_raw_eqFunction_3587,
    logic3_raw_eqFunction_3590,
    logic3_raw_eqFunction_3591,
    logic3_raw_eqFunction_3592,
    logic3_raw_eqFunction_3600,
    logic3_raw_eqFunction_3601,
    logic3_raw_eqFunction_3602,
    logic3_raw_eqFunction_3603,
    logic3_raw_eqFunction_3606,
    logic3_raw_eqFunction_3607,
    logic3_raw_eqFunction_3608,
    logic3_raw_eqFunction_3609,
    logic3_raw_eqFunction_3610,
    logic3_raw_eqFunction_3611,
    logic3_raw_eqFunction_3613,
    logic3_raw_eqFunction_3614,
    logic3_raw_eqFunction_3615,
    logic3_raw_eqFunction_3616,
    logic3_raw_eqFunction_3617,
    logic3_raw_eqFunction_3618,
    logic3_raw_eqFunction_3622,
    logic3_raw_eqFunction_3623,
    logic3_raw_eqFunction_3624,
    logic3_raw_eqFunction_3625,
    logic3_raw_eqFunction_3626,
    logic3_raw_eqFunction_3627,
    logic3_raw_eqFunction_3629,
    logic3_raw_eqFunction_3630,
    logic3_raw_eqFunction_3631,
    logic3_raw_eqFunction_3632,
    logic3_raw_eqFunction_3633,
    logic3_raw_eqFunction_3634,
    logic3_raw_eqFunction_3635,
    logic3_raw_eqFunction_3636,
    logic3_raw_eqFunction_3637,
    logic3_raw_eqFunction_3638,
    logic3_raw_eqFunction_3639,
    logic3_raw_eqFunction_3640,
    logic3_raw_eqFunction_3641,
    logic3_raw_eqFunction_3642,
    logic3_raw_eqFunction_3643,
    logic3_raw_eqFunction_3644,
    logic3_raw_eqFunction_3645,
    logic3_raw_eqFunction_3646,
    logic3_raw_eqFunction_3647,
    logic3_raw_eqFunction_3648,
    logic3_raw_eqFunction_3649,
    logic3_raw_eqFunction_3652,
    logic3_raw_eqFunction_3653,
    logic3_raw_eqFunction_3654,
    logic3_raw_eqFunction_3655,
    logic3_raw_eqFunction_3657,
    logic3_raw_eqFunction_3658,
    logic3_raw_eqFunction_3659,
    logic3_raw_eqFunction_3660,
    logic3_raw_eqFunction_3661,
    logic3_raw_eqFunction_3666,
    logic3_raw_eqFunction_3667,
    logic3_raw_eqFunction_3668,
    logic3_raw_eqFunction_3669,
    logic3_raw_eqFunction_3670,
    logic3_raw_eqFunction_3671,
    logic3_raw_eqFunction_3672,
    logic3_raw_eqFunction_3673,
    logic3_raw_eqFunction_3674,
    logic3_raw_eqFunction_3675,
    logic3_raw_eqFunction_3676,
    logic3_raw_eqFunction_3677,
    logic3_raw_eqFunction_3678,
    logic3_raw_eqFunction_3679,
    logic3_raw_eqFunction_3680,
    logic3_raw_eqFunction_3681,
    logic3_raw_eqFunction_3685,
    logic3_raw_eqFunction_3689,
    logic3_raw_eqFunction_3690,
    logic3_raw_eqFunction_3691,
    logic3_raw_eqFunction_3692,
    logic3_raw_eqFunction_3697,
    logic3_raw_eqFunction_3698,
    logic3_raw_eqFunction_3699,
    logic3_raw_eqFunction_3700,
    logic3_raw_eqFunction_3701,
    logic3_raw_eqFunction_3702,
    logic3_raw_eqFunction_3703,
    logic3_raw_eqFunction_3704,
    logic3_raw_eqFunction_3705,
    logic3_raw_eqFunction_3706,
    logic3_raw_eqFunction_3707,
    logic3_raw_eqFunction_3708,
    logic3_raw_eqFunction_3709,
    logic3_raw_eqFunction_3710,
    logic3_raw_eqFunction_3711,
    logic3_raw_eqFunction_3712,
    logic3_raw_eqFunction_3713,
    logic3_raw_eqFunction_3714,
    logic3_raw_eqFunction_3715,
    logic3_raw_eqFunction_3716,
    logic3_raw_eqFunction_3717,
    logic3_raw_eqFunction_3721,
    logic3_raw_eqFunction_3722,
    logic3_raw_eqFunction_3723,
    logic3_raw_eqFunction_3724,
    logic3_raw_eqFunction_3725,
    logic3_raw_eqFunction_3728,
    logic3_raw_eqFunction_3729,
    logic3_raw_eqFunction_3730,
    logic3_raw_eqFunction_3731,
    logic3_raw_eqFunction_3739,
    logic3_raw_eqFunction_3740,
    logic3_raw_eqFunction_3741,
    logic3_raw_eqFunction_3742,
    logic3_raw_eqFunction_3745,
    logic3_raw_eqFunction_3746,
    logic3_raw_eqFunction_3747,
    logic3_raw_eqFunction_3748,
    logic3_raw_eqFunction_3749,
    logic3_raw_eqFunction_3757,
    logic3_raw_eqFunction_3758,
    logic3_raw_eqFunction_3759,
    logic3_raw_eqFunction_3760,
    logic3_raw_eqFunction_3761,
    logic3_raw_eqFunction_3762,
    logic3_raw_eqFunction_3763,
    logic3_raw_eqFunction_3765,
    logic3_raw_eqFunction_3766,
    logic3_raw_eqFunction_3768,
    logic3_raw_eqFunction_3769,
    logic3_raw_eqFunction_3770,
    logic3_raw_eqFunction_3772,
    logic3_raw_eqFunction_3773,
    logic3_raw_eqFunction_3774,
    logic3_raw_eqFunction_3775,
    logic3_raw_eqFunction_3776,
    logic3_raw_eqFunction_3796,
    logic3_raw_eqFunction_3798,
    logic3_raw_eqFunction_3799,
    logic3_raw_eqFunction_3800,
    logic3_raw_eqFunction_3801,
    logic3_raw_eqFunction_3802,
    logic3_raw_eqFunction_3803,
    logic3_raw_eqFunction_3804,
    logic3_raw_eqFunction_3805,
    logic3_raw_eqFunction_3806,
    logic3_raw_eqFunction_3807,
    logic3_raw_eqFunction_3808,
    logic3_raw_eqFunction_3824,
    logic3_raw_eqFunction_3825,
    logic3_raw_eqFunction_3826,
    logic3_raw_eqFunction_3827,
    logic3_raw_eqFunction_3828,
    logic3_raw_eqFunction_3829,
    logic3_raw_eqFunction_3830,
    logic3_raw_eqFunction_3831,
    logic3_raw_eqFunction_3833,
    logic3_raw_eqFunction_3836,
    logic3_raw_eqFunction_3837,
    logic3_raw_eqFunction_3838,
    logic3_raw_eqFunction_3839,
    logic3_raw_eqFunction_3840,
    logic3_raw_eqFunction_3841,
    logic3_raw_eqFunction_3842,
    logic3_raw_eqFunction_3843,
    logic3_raw_eqFunction_3844,
    logic3_raw_eqFunction_3845,
    logic3_raw_eqFunction_3846,
    logic3_raw_eqFunction_3847,
    logic3_raw_eqFunction_3848,
    logic3_raw_eqFunction_3849,
    logic3_raw_eqFunction_3850,
    logic3_raw_eqFunction_3851,
    logic3_raw_eqFunction_3852,
    logic3_raw_eqFunction_3854,
    logic3_raw_eqFunction_3855,
    logic3_raw_eqFunction_3856,
    logic3_raw_eqFunction_3857,
    logic3_raw_eqFunction_3858,
    logic3_raw_eqFunction_3859,
    logic3_raw_eqFunction_3860,
    logic3_raw_eqFunction_3861,
    logic3_raw_eqFunction_3862,
    logic3_raw_eqFunction_3863,
    logic3_raw_eqFunction_3864,
    logic3_raw_eqFunction_3865,
    logic3_raw_eqFunction_3866,
    logic3_raw_eqFunction_3867,
    logic3_raw_eqFunction_3868,
    logic3_raw_eqFunction_3869,
    logic3_raw_eqFunction_3870,
    logic3_raw_eqFunction_3871,
    logic3_raw_eqFunction_3872,
    logic3_raw_eqFunction_3873,
    logic3_raw_eqFunction_3874,
    logic3_raw_eqFunction_3875,
    logic3_raw_eqFunction_3876,
    logic3_raw_eqFunction_3877,
    logic3_raw_eqFunction_3878,
    logic3_raw_eqFunction_3880,
    logic3_raw_eqFunction_3881,
    logic3_raw_eqFunction_3882
  };
  
  for (int id = 0; id < 515; id++) {
    eqFunctions[id](data, threadData);
  }
  
  return 0;
}

int logic3_raw_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
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
  tmp2 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2683]] /* ramp.startTime PARAM */));
  tmp0 = LessZC(data->localData[0]->timeValue, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2683]] /* ramp.startTime PARAM */), tmp1, tmp2, data->simulationInfo->storedRelations[0]);
  gout[start_index] = (tmp0) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp4 = 1.0;
  tmp5 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2683]] /* ramp.startTime PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2680]] /* ramp.duration PARAM */));
  tmp3 = LessZC(data->localData[0]->timeValue, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2683]] /* ramp.startTime PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2680]] /* ramp.duration PARAM */), tmp4, tmp5, data->simulationInfo->storedRelations[1]);
  gout[start_index] = (tmp3) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp7 = 1.0;
  tmp8 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[417]] /* chillerStagingCtrl.minimumLoad_TR PARAM */));
  tmp6 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[450]] /* chillerStagingCtrl.roomHeatGain_TR variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[417]] /* chillerStagingCtrl.minimumLoad_TR PARAM */), tmp7, tmp8, data->simulationInfo->storedRelations[2]);
  gout[start_index] = (tmp6) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp10 = 1.0;
  tmp11 = 1.0;
  tmp9 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1301]] /* weaData.add.y variable */), (data->simulationInfo->realVarsPre[1349] /* weaData.conTim1.tNext DISCRETE */), tmp10, tmp11, data->simulationInfo->storedRelations[3]);
  gout[start_index] = (((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[874]] /* weaData.conTim1.canRepeatWeatherFile PARAM */) && tmp9)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp13 = 1.0;
  tmp14 = 1.0;
  tmp12 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1283]] /* weaBus.cloTim variable */), (data->simulationInfo->realVarsPre[1348] /* weaData.conTim.tNext DISCRETE */), tmp13, tmp14, data->simulationInfo->storedRelations[4]);
  gout[start_index] = (((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[873]] /* weaData.conTim.canRepeatWeatherFile PARAM */) && tmp12)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp18 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2728]] /* val5.m_flow_nominal_pos PARAM */),2.220446049250313e-16);
  tmp16 = fabs((tmp18?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2728]] /* val5.m_flow_nominal_pos PARAM */):1.0));
  tmp17 = 0.0;
  tmp15 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val5.m_flow variable */), 0.0, tmp16, tmp17, data->simulationInfo->storedRelations[5]);
  gout[start_index] = (tmp15) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp22 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2728]] /* val5.m_flow_nominal_pos PARAM */),2.220446049250313e-16);
  tmp20 = fabs((tmp22?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2728]] /* val5.m_flow_nominal_pos PARAM */):1.0));
  tmp21 = 0.0;
  tmp19 = GreaterZC((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val5.m_flow variable */)), 0.0, tmp20, tmp21, data->simulationInfo->storedRelations[6]);
  gout[start_index] = (tmp19) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp26 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2774]] /* val7.m_flow_nominal_pos PARAM */),2.220446049250313e-16);
  tmp24 = fabs((tmp26?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2774]] /* val7.m_flow_nominal_pos PARAM */):1.0));
  tmp25 = 0.0;
  tmp23 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1230]] /* val7.m_flow variable */), 0.0, tmp24, tmp25, data->simulationInfo->storedRelations[7]);
  gout[start_index] = (tmp23) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp30 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2774]] /* val7.m_flow_nominal_pos PARAM */),2.220446049250313e-16);
  tmp28 = fabs((tmp30?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2774]] /* val7.m_flow_nominal_pos PARAM */):1.0));
  tmp29 = 0.0;
  tmp27 = GreaterZC((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1230]] /* val7.m_flow variable */)), 0.0, tmp28, tmp29, data->simulationInfo->storedRelations[8]);
  gout[start_index] = (tmp27) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp32 = 1.0;
  tmp33 = 1.0;
  tmp31 = GreaterEqZC(data->localData[0]->timeValue, (data->simulationInfo->realVarsPre[1346] /* combinedCtrl2.nextControlTime DISCRETE */), tmp32, tmp33, data->simulationInfo->storedRelations[9]);
  gout[start_index] = (tmp31) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp35 = 1.0;
  tmp36 = 1.0;
  tmp34 = GreaterEqZC(data->localData[0]->timeValue, (data->simulationInfo->realVarsPre[1343] /* combinedCtrl1.nextControlTime DISCRETE */), tmp35, tmp36, data->simulationInfo->storedRelations[10]);
  gout[start_index] = (tmp34) ? 1 : -1;
  current_index++;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  return 0;
}

const char *logic3_raw_relationDescription(int i)
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
  "time >= pre(combinedCtrl2.nextControlTime)",
  "time >= pre(combinedCtrl1.nextControlTime)"};
  return res[i];
}

int logic3_raw_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
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
    tmp39 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2683]] /* ramp.startTime PARAM */));
    tmp37 = LessZC(data->localData[0]->timeValue, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2683]] /* ramp.startTime PARAM */), tmp38, tmp39, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[start_index] = tmp37;
    current_index++;

    start_index = current_index;
    tmp41 = 1.0;
    tmp42 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2683]] /* ramp.startTime PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2680]] /* ramp.duration PARAM */));
    tmp40 = LessZC(data->localData[0]->timeValue, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2683]] /* ramp.startTime PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2680]] /* ramp.duration PARAM */), tmp41, tmp42, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[start_index] = tmp40;
    current_index++;

    start_index = current_index;
    tmp44 = 1.0;
    tmp45 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[417]] /* chillerStagingCtrl.minimumLoad_TR PARAM */));
    tmp43 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[450]] /* chillerStagingCtrl.roomHeatGain_TR variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[417]] /* chillerStagingCtrl.minimumLoad_TR PARAM */), tmp44, tmp45, data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[start_index] = tmp43;
    current_index++;

    start_index = current_index;
    tmp47 = 1.0;
    tmp48 = 1.0;
    tmp46 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1301]] /* weaData.add.y variable */), (data->simulationInfo->realVarsPre[1349] /* weaData.conTim1.tNext DISCRETE */), tmp47, tmp48, data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[start_index] = tmp46;
    current_index++;

    start_index = current_index;
    tmp50 = 1.0;
    tmp51 = 1.0;
    tmp49 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1283]] /* weaBus.cloTim variable */), (data->simulationInfo->realVarsPre[1348] /* weaData.conTim.tNext DISCRETE */), tmp50, tmp51, data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[start_index] = tmp49;
    current_index++;

    start_index = current_index;
    tmp55 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2728]] /* val5.m_flow_nominal_pos PARAM */),2.220446049250313e-16);
    tmp53 = fabs((tmp55?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2728]] /* val5.m_flow_nominal_pos PARAM */):1.0));
    tmp54 = 0.0;
    tmp52 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val5.m_flow variable */), 0.0, tmp53, tmp54, data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[start_index] = tmp52;
    current_index++;

    start_index = current_index;
    tmp59 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2728]] /* val5.m_flow_nominal_pos PARAM */),2.220446049250313e-16);
    tmp57 = fabs((tmp59?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2728]] /* val5.m_flow_nominal_pos PARAM */):1.0));
    tmp58 = 0.0;
    tmp56 = GreaterZC((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val5.m_flow variable */)), 0.0, tmp57, tmp58, data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[start_index] = tmp56;
    current_index++;

    start_index = current_index;
    tmp63 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2774]] /* val7.m_flow_nominal_pos PARAM */),2.220446049250313e-16);
    tmp61 = fabs((tmp63?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2774]] /* val7.m_flow_nominal_pos PARAM */):1.0));
    tmp62 = 0.0;
    tmp60 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1230]] /* val7.m_flow variable */), 0.0, tmp61, tmp62, data->simulationInfo->storedRelations[7]);
    data->simulationInfo->relations[start_index] = tmp60;
    current_index++;

    start_index = current_index;
    tmp67 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2774]] /* val7.m_flow_nominal_pos PARAM */),2.220446049250313e-16);
    tmp65 = fabs((tmp67?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2774]] /* val7.m_flow_nominal_pos PARAM */):1.0));
    tmp66 = 0.0;
    tmp64 = GreaterZC((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1230]] /* val7.m_flow variable */)), 0.0, tmp65, tmp66, data->simulationInfo->storedRelations[8]);
    data->simulationInfo->relations[start_index] = tmp64;
    current_index++;

    start_index = current_index;
    tmp69 = 1.0;
    tmp70 = 1.0;
    tmp68 = GreaterEqZC(data->localData[0]->timeValue, (data->simulationInfo->realVarsPre[1346] /* combinedCtrl2.nextControlTime DISCRETE */), tmp69, tmp70, data->simulationInfo->storedRelations[9]);
    data->simulationInfo->relations[start_index] = tmp68;
    current_index++;

    start_index = current_index;
    tmp72 = 1.0;
    tmp73 = 1.0;
    tmp71 = GreaterEqZC(data->localData[0]->timeValue, (data->simulationInfo->realVarsPre[1343] /* combinedCtrl1.nextControlTime DISCRETE */), tmp72, tmp73, data->simulationInfo->storedRelations[10]);
    data->simulationInfo->relations[start_index] = tmp71;
    current_index++;
  } else {
    start_index = current_index;
    data->simulationInfo->relations[start_index] = (data->localData[0]->timeValue < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2683]] /* ramp.startTime PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (data->localData[0]->timeValue < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2683]] /* ramp.startTime PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2680]] /* ramp.duration PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[450]] /* chillerStagingCtrl.roomHeatGain_TR variable */) > (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[417]] /* chillerStagingCtrl.minimumLoad_TR PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1301]] /* weaData.add.y variable */) > (data->simulationInfo->realVarsPre[1349] /* weaData.conTim1.tNext DISCRETE */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1283]] /* weaBus.cloTim variable */) > (data->simulationInfo->realVarsPre[1348] /* weaData.conTim.tNext DISCRETE */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val5.m_flow variable */) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val5.m_flow variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1230]] /* val7.m_flow variable */) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1230]] /* val7.m_flow variable */)) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (data->localData[0]->timeValue >= (data->simulationInfo->realVarsPre[1346] /* combinedCtrl2.nextControlTime DISCRETE */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (data->localData[0]->timeValue >= (data->simulationInfo->realVarsPre[1343] /* combinedCtrl1.nextControlTime DISCRETE */));
    current_index++;
  }
  
  return 0;
}

#if defined(__cplusplus)
}
#endif
