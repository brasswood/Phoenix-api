#pragma once

namespace ctre {
namespace phoenix {
namespace motorcontrol {

enum LimitSwitchSource {
	LimitSwitchSource_FeedbackConnector = 0, /* default */
	LimitSwitchSource_RemoteTalonSRX = 1,
	LimitSwitchSource_RemoteCANifier = 2,
	LimitSwitchSource_Deactivated = 3,
};

enum RemoteLimitSwitchSource {
	RemoteLimitSwitchSource_RemoteTalonSRX = 1,
	RemoteLimitSwitchSource_RemoteCANifier = 2,
	RemoteLimitSwitchSource_Deactivated = 3,
};

enum LimitSwitchNormal {
	LimitSwitchNormal_NormallyOpen = 0,
	LimitSwitchNormal_NormallyClosed = 1,
	LimitSwitchNormal_Disabled = 2
};

class IHasRemoteLimitSwitches {
public:
	virtual ~IHasRemoteLimitSwitches() {
	}
	virtual ErrorCode ConfigForwardLimitSwitchSource(
			RemoteLimitSwitchSource type, LimitSwitchNormal normalOpenOrClose,
			int deviceID)=0;
	virtual ErrorCode ConfigReverseLimitSwitchSource(
			RemoteLimitSwitchSource type, LimitSwitchNormal normalOpenOrClose,
			int deviceID)=0;

	virtual void EnableLimitSwitch(bool forwardEnable, bool reverseEnable)=0;
};

class IHasLimitSwitches {
public:
	virtual ~IHasLimitSwitches() {
	}
	virtual ErrorCode ConfigForwardLimitSwitchSource(LimitSwitchSource type,
			LimitSwitchNormal normalOpenOrClose) = 0;
	virtual ErrorCode ConfigReverseLimitSwitchSource(LimitSwitchSource type,
			LimitSwitchNormal normalOpenOrClose) = 0;
	virtual void EnableLimitSwitch(bool forwardEnable, bool reverseEnable) = 0;
};

class LimitSwitchRoutines {
public:
	static LimitSwitchSource Promote(
			RemoteLimitSwitchSource limitSwitchSource) {
		return (LimitSwitchSource) limitSwitchSource;
	}
};
} // namespace motorcontrol
} // namespace phoenix
} // namespace ctre
