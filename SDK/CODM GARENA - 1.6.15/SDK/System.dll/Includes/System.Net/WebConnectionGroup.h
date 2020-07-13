#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class WebConnectionGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "WebConnectionGroup"));
	}

	template <typename T = uintptr_t> T& sPoint() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& connections() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& rnd() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& queue() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T GetConnection(uintptr_t request) {
		return ((T (*)(WebConnectionGroup*, uintptr_t))(Il2CppBase() + 0x3E544A8))(this, request);
	}
	template <typename T = void> static T PrepareSharingNtlm(uintptr_t cnc, uintptr_t request) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E6DD64))(0, cnc, request);
	}
	template <typename T = uintptr_t> T CreateOrReuseConnection(uintptr_t request) {
		return ((T (*)(WebConnectionGroup*, uintptr_t))(Il2CppBase() + 0x3E6D994))(this, request);
	}
	template <typename T = uintptr_t> T get_Queue() {
		return ((T (*)(WebConnectionGroup*))(Il2CppBase() + 0x3E65A98))(this);
	}

};

}
