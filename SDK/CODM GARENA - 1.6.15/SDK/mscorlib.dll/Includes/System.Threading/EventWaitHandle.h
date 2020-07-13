#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Threading {

class EventWaitHandle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Threading", "EventWaitHandle"));
	}


	template <typename T = bool> T IsManualReset(uintptr_t mode) {
		return ((T (*)(EventWaitHandle*, uintptr_t))(Il2CppBase() + 0x4D87D68))(this, mode);
	}
	template <typename T = bool> T Reset() {
		return ((T (*)(EventWaitHandle*))(Il2CppBase() + 0x4D87E44))(this);
	}
	template <typename T = bool> T Set() {
		return ((T (*)(EventWaitHandle*))(Il2CppBase() + 0x4D87F60))(this);
	}

};

}
