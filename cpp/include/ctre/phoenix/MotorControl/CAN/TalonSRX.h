#pragma once

#include "ctre/phoenix/MotorControl/CAN/BaseMotorController.h"
#include "ctre/phoenix/MotorControl/IMotorControllerEnhanced.h"

namespace ctre {
namespace phoenix {
namespace motorcontrol {
namespace can {

class TalonSRX: public virtual BaseMotorController,
		public virtual IMotorControllerEnhanced {
public:
	TalonSRX(int deviceNumber);
	virtual ~TalonSRX() {
	}

	virtual ctre::phoenix::ErrorCode ConfigSelectedFeedbackSensor(
			FeedbackDevice feedbackDevice, int pidxIdx, int timeoutMs);

	virtual ctre::phoenix::ErrorCode SetStatusFramePeriod(StatusFrameEnhanced frame,
			int periodMs, int timeoutMs);
	virtual int GetStatusFramePeriod(StatusFrameEnhanced frame, int timeoutMs);

	//------ Velocity measurement ----------//
	virtual ctre::phoenix::ErrorCode ConfigVelocityMeasurementPeriod(VelocityMeasPeriod period,
			int timeoutMs);
	virtual ctre::phoenix::ErrorCode ConfigVelocityMeasurementWindow(int windowSize,
			int timeoutMs);

	//------ limit switch ----------//
	virtual ctre::phoenix::ErrorCode ConfigForwardLimitSwitchSource(
			LimitSwitchSource limitSwitchSource,
			LimitSwitchNormal normalOpenOrClose, int timeoutMs);
	virtual ctre::phoenix::ErrorCode ConfigReverseLimitSwitchSource(
			LimitSwitchSource limitSwitchSource,
			LimitSwitchNormal normalOpenOrClose, int timeoutMs);
	virtual ctre::phoenix::ErrorCode ConfigForwardLimitSwitchSource(
			RemoteLimitSwitchSource limitSwitchSource,
			LimitSwitchNormal normalOpenOrClose, int deviceID, int timeoutMs);
	virtual ctre::phoenix::ErrorCode ConfigReverseLimitSwitchSource(
			RemoteLimitSwitchSource limitSwitchSource,
			LimitSwitchNormal normalOpenOrClose, int deviceID, int timeoutMs);

	//------ Current Limit ----------//
	virtual ctre::phoenix::ErrorCode ConfigPeakCurrentLimit(int amps, int timeoutMs);
	virtual ctre::phoenix::ErrorCode ConfigPeakCurrentDuration(int milliseconds,
			int timeoutMs);
	virtual ctre::phoenix::ErrorCode ConfigContinuousCurrentLimit(int amps, int timeoutMs);
	virtual void EnableCurrentLimit(bool enable);

};
// class TalonSRX
} // namespace can
} // namespace motorcontrol
} // namespace phoenix
} // namespace ctre
