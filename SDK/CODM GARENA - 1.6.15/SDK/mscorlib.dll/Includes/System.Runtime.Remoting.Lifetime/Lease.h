#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Lifetime {

class Lease
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Lifetime", "Lease"));
	}

	template <typename T = uintptr_t> T& _leaseExpireTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _currentState() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _initialLeaseTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _renewOnCallTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _sponsorshipTimeout() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _sponsors() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _renewingSponsors() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& _renewalDelegate() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = uintptr_t> T get_CurrentLeaseTime() {
		return ((T (*)(Lease*))(Il2CppBase() + 0x4B30D88))(this);
	}
	template <typename T = uintptr_t> T get_CurrentState() {
		return ((T (*)(Lease*))(Il2CppBase() + 0x4B30E78))(this);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(Lease*))(Il2CppBase() + 0x4B30E80))(this);
	}
	template <typename T = void> T set_InitialLeaseTime(uintptr_t value) {
		return ((T (*)(Lease*, uintptr_t))(Il2CppBase() + 0x4B30E8C))(this, value);
	}
	template <typename T = void> T set_RenewOnCallTime(uintptr_t value) {
		return ((T (*)(Lease*, uintptr_t))(Il2CppBase() + 0x4B310D8))(this, value);
	}
	template <typename T = void> T set_SponsorshipTimeout(uintptr_t value) {
		return ((T (*)(Lease*, uintptr_t))(Il2CppBase() + 0x4B31228))(this, value);
	}
	template <typename T = uintptr_t> T Renew(uintptr_t renewalTime) {
		return ((T (*)(Lease*, uintptr_t))(Il2CppBase() + 0x4B31378))(this, renewalTime);
	}
	template <typename T = void> T Unregister(uintptr_t obj) {
		return ((T (*)(Lease*, uintptr_t))(Il2CppBase() + 0x4B314C8))(this, obj);
	}
	template <typename T = void> T UpdateState() {
		return ((T (*)(Lease*))(Il2CppBase() + 0x4B315F8))(this);
	}
	template <typename T = void> T CheckNextSponsor() {
		return ((T (*)(Lease*))(Il2CppBase() + 0x4B317AC))(this);
	}
	template <typename T = void> T ProcessSponsorResponse(uintptr_t state, bool timedOut) {
		return ((T (*)(Lease*, uintptr_t, bool))(Il2CppBase() + 0x4B31A90))(this, state, timedOut);
	}

};

}
