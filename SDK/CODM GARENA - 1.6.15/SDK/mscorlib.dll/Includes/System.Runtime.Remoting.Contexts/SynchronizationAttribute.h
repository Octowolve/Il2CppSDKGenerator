#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Contexts {

class SynchronizationAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Contexts", "SynchronizationAttribute"));
	}

	template <typename T = bool> T& _bReEntrant() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _flavor() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _lockCount() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& _mutex() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _ownerThread() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T set_Locked(bool value) {
		return ((T (*)(SynchronizationAttribute*, bool))(Il2CppBase() + 0x4B2F814))(this, value);
	}
	template <typename T = void> T ReleaseLock() {
		return ((T (*)(SynchronizationAttribute*))(Il2CppBase() + 0x4B2FA20))(this);
	}
	template <typename T = void> T GetPropertiesForNewContext(uintptr_t ctorMsg) {
		return ((T (*)(SynchronizationAttribute*, uintptr_t))(Il2CppBase() + 0x4B2FB70))(this, ctorMsg);
	}
	template <typename T = uintptr_t> T GetClientContextSink(uintptr_t nextSink) {
		return ((T (*)(SynchronizationAttribute*, uintptr_t))(Il2CppBase() + 0x4B2FCFC))(this, nextSink);
	}
	template <typename T = uintptr_t> T GetServerContextSink(uintptr_t nextSink) {
		return ((T (*)(SynchronizationAttribute*, uintptr_t))(Il2CppBase() + 0x4B2FDC0))(this, nextSink);
	}
	template <typename T = bool> T IsContextOK(uintptr_t ctx, uintptr_t msg) {
		return ((T (*)(SynchronizationAttribute*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4B2FE84))(this, ctx, msg);
	}
	template <typename T = void> static T ExitContext() {
		return ((T (*)(void *))(Il2CppBase() + 0x4B2FFC0))(0);
	}
	template <typename T = void> static T EnterContext() {
		return ((T (*)(void *))(Il2CppBase() + 0x4B30144))(0);
	}

};

}
