#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Lifetime {

class LeaseManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Lifetime", "LeaseManager"));
	}

	template <typename T = uintptr_t> T& _objects() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _timer() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T SetPollTime(uintptr_t timeSpan) {
		return ((T (*)(LeaseManager*, uintptr_t))(Il2CppBase() + 0x4B31E84))(this, timeSpan);
	}
	template <typename T = void> T TrackLifetime(uintptr_t identity) {
		return ((T (*)(LeaseManager*, uintptr_t))(Il2CppBase() + 0x4B31F5C))(this, identity);
	}
	template <typename T = void> T StartManager() {
		return ((T (*)(LeaseManager*))(Il2CppBase() + 0x4B32078))(this);
	}
	template <typename T = void> T StopManager() {
		return ((T (*)(LeaseManager*))(Il2CppBase() + 0x4B32268))(this);
	}
	template <typename T = void> T ManageLeases(uintptr_t state) {
		return ((T (*)(LeaseManager*, uintptr_t))(Il2CppBase() + 0x4B322A0))(this, state);
	}

};

}
