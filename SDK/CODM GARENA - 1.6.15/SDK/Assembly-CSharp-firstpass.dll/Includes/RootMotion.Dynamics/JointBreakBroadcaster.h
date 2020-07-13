#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RootMotion.Dynamics {

class JointBreakBroadcaster
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "RootMotion.Dynamics", "JointBreakBroadcaster"));
	}

	template <typename T = uintptr_t> T& puppetMaster() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& muscleIndex() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T OnJointBreak() {
		return ((T (*)(JointBreakBroadcaster*))(Il2CppBase() + 0x38AFD80))(this);
	}

};

}
