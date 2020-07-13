#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Lifetime {

class LifetimeServices
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Lifetime", "LifetimeServices"));
	}

	template <typename T = uintptr_t> static T& _leaseManagerPollTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _leaseTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _renewOnCallTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& _sponsorshipTimeout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& _leaseManager() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> static T get_LeaseManagerPollTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x4B321B0))(0);
	}
	template <typename T = void> static T set_LeaseManagerPollTime(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4B27AC8))(0, value);
	}
	template <typename T = uintptr_t> static T get_LeaseTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x4B30B60))(0);
	}
	template <typename T = void> static T set_LeaseTime(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4B278A0))(0, value);
	}
	template <typename T = uintptr_t> static T get_RenewOnCallTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x4B30C18))(0);
	}
	template <typename T = void> static T set_RenewOnCallTime(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4B27A10))(0, value);
	}
	template <typename T = uintptr_t> static T get_SponsorshipTimeout() {
		return ((T (*)(void *))(Il2CppBase() + 0x4B30CD0))(0);
	}
	template <typename T = void> static T set_SponsorshipTimeout(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4B27958))(0, value);
	}
	template <typename T = void> static T TrackLifetime(uintptr_t identity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4B3268C))(0, identity);
	}

};

}
