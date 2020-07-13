#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Lifetime {

class ILease
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Lifetime", "ILease"));
	}


	template <typename T = uintptr_t> T get_CurrentState() {
		return ((T (*)(ILease*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_InitialLeaseTime(uintptr_t value) {
		return ((T (*)(ILease*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T set_RenewOnCallTime(uintptr_t value) {
		return ((T (*)(ILease*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T set_SponsorshipTimeout(uintptr_t value) {
		return ((T (*)(ILease*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}

};

}
