/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_ctre_phoenix_motorcontrol_can_MotControllerJNI */

#ifndef _Included_com_ctre_phoenix_motorcontrol_can_MotControllerJNI
#define _Included_com_ctre_phoenix_motorcontrol_can_MotControllerJNI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    Create
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_Create
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    GetDeviceNumber
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_GetDeviceNumber
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    SetDemand
 * Signature: (JIII)V
 */
JNIEXPORT void JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_SetDemand
  (JNIEnv *, jclass, jlong, jint, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    SetNeutralMode
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_SetNeutralMode
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    SetSensorPhase
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_SetSensorPhase
  (JNIEnv *, jclass, jlong, jboolean);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    SetInverted
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_SetInverted
  (JNIEnv *, jclass, jlong, jboolean);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigOpenLoopRamp
 * Signature: (JFI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigOpenLoopRamp
  (JNIEnv *, jclass, jlong, jfloat, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigClosedLoopRamp
 * Signature: (JFI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigClosedLoopRamp
  (JNIEnv *, jclass, jlong, jfloat, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigPeakOutputForward
 * Signature: (JFI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigPeakOutputForward
  (JNIEnv *, jclass, jlong, jfloat, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigPeakOutputReverse
 * Signature: (JFI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigPeakOutputReverse
  (JNIEnv *, jclass, jlong, jfloat, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigNominalOutputForward
 * Signature: (JFI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigNominalOutputForward
  (JNIEnv *, jclass, jlong, jfloat, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigNominalOutputReverse
 * Signature: (JFI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigNominalOutputReverse
  (JNIEnv *, jclass, jlong, jfloat, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigNeutralDeadband
 * Signature: (JFI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigNeutralDeadband
  (JNIEnv *, jclass, jlong, jfloat, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigVoltageCompSaturation
 * Signature: (JFI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigVoltageCompSaturation
  (JNIEnv *, jclass, jlong, jfloat, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigVoltageMeasurementFilter
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigVoltageMeasurementFilter
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    EnableVoltageCompensation
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_EnableVoltageCompensation
  (JNIEnv *, jclass, jlong, jboolean);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    GetBusVoltage
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_GetBusVoltage
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    GetMotorOutputPercent
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_GetMotorOutputPercent
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    GetOutputCurrent
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_GetOutputCurrent
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    GetTemperature
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_GetTemperature
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigRemoteFeedbackFilter
 * Signature: (JIIII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigRemoteFeedbackFilter
  (JNIEnv *, jclass, jlong, jint, jint, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigSelectedFeedbackSensor
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigSelectedFeedbackSensor
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    GetSelectedSensorPosition
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_GetSelectedSensorPosition
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    GetSelectedSensorVelocity
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_GetSelectedSensorVelocity
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    SetSelectedSensorPosition
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_SetSelectedSensorPosition
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    SetControlFramePeriod
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_SetControlFramePeriod
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    SetStatusFramePeriod
 * Signature: (JIII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_SetStatusFramePeriod
  (JNIEnv *, jclass, jlong, jint, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    GetStatusFramePeriod
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_GetStatusFramePeriod
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigVelocityMeasurementPeriod
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigVelocityMeasurementPeriod
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigVelocityMeasurementWindow
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigVelocityMeasurementWindow
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigForwardLimitSwitchSource
 * Signature: (JIIII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigForwardLimitSwitchSource
  (JNIEnv *, jclass, jlong, jint, jint, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigReverseLimitSwitchSource
 * Signature: (JIIII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigReverseLimitSwitchSource
  (JNIEnv *, jclass, jlong, jint, jint, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    EnableLimitSwitches
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_EnableLimitSwitches
  (JNIEnv *, jclass, jlong, jboolean);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigForwardSoftLimit
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigForwardSoftLimit
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigReverseSoftLimit
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigReverseSoftLimit
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    EnableSoftLimits
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_EnableSoftLimits
  (JNIEnv *, jclass, jlong, jboolean);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    Config_kP
 * Signature: (JIFI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_Config_1kP
  (JNIEnv *, jclass, jlong, jint, jfloat, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    Config_kI
 * Signature: (JIFI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_Config_1kI
  (JNIEnv *, jclass, jlong, jint, jfloat, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    Config_kD
 * Signature: (JIFI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_Config_1kD
  (JNIEnv *, jclass, jlong, jint, jfloat, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    Config_kF
 * Signature: (JIFI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_Config_1kF
  (JNIEnv *, jclass, jlong, jint, jfloat, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    Config_IntegralZone
 * Signature: (JIFI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_Config_1IntegralZone
  (JNIEnv *, jclass, jlong, jint, jfloat, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigAllowableClosedloopError
 * Signature: (JIII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigAllowableClosedloopError
  (JNIEnv *, jclass, jlong, jint, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigMaxIntegralAccumulator
 * Signature: (JIFI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigMaxIntegralAccumulator
  (JNIEnv *, jclass, jlong, jint, jfloat, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    SetIntegralAccumulator
 * Signature: (JFI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_SetIntegralAccumulator
  (JNIEnv *, jclass, jlong, jfloat, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    GetClosedLoopError
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_GetClosedLoopError
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    GetIntegralAccumulator
 * Signature: (JI)F
 */
JNIEXPORT jfloat JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_GetIntegralAccumulator
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    GetErrorDerivative
 * Signature: (JI)F
 */
JNIEXPORT jfloat JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_GetErrorDerivative
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    SelectProfileSlot
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_SelectProfileSlot
  (JNIEnv *, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_SelectProfileSlots
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigMotionCruiseVelocity
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigMotionCruiseVelocity
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigMotionAcceleration
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigMotionAcceleration
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    GetLastError
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_GetLastError
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    GetFirmwareVersion
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_GetFirmwareVersion
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    HasResetOccurred
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_HasResetOccurred
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigSetCustomParam
 * Signature: (JIII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigSetCustomParam
  (JNIEnv *, jclass, jlong, jint, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigGetCustomParam
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigGetCustomParam
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigSetParameter
 * Signature: (JIFIII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigSetParameter
  (JNIEnv *, jclass, jlong, jint, jfloat, jint, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigGetParameter
 * Signature: (JIII)D
 */
JNIEXPORT jdouble JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigGetParameter
  (JNIEnv *, jclass, jlong, jint, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigPeakCurrentLimit
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigPeakCurrentLimit
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigPeakCurrentDuration
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigPeakCurrentDuration
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigContinuousCurrentLimit
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigContinuousCurrentLimit
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    EnableCurrentLimit
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_EnableCurrentLimit
  (JNIEnv *, jclass, jlong, jboolean);

#ifdef __cplusplus
}
#endif
#endif
