#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Contexts {

class ContextAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Contexts", "ContextAttribute"));
	}

	template <typename T = Il2CppString*> T& AttributeName() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(ContextAttribute*))(Il2CppBase() + 0x4B2EEE0))(this);
	}
	template <typename T = bool> T Equals(uintptr_t o) {
		return ((T (*)(ContextAttribute*, uintptr_t))(Il2CppBase() + 0x4B2EEE8))(this, o);
	}
	template <typename T = void> T Freeze(uintptr_t newContext) {
		return ((T (*)(ContextAttribute*, uintptr_t))(Il2CppBase() + 0x4B2F014))(this, newContext);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ContextAttribute*))(Il2CppBase() + 0x4B2F018))(this);
	}
	template <typename T = void> T GetPropertiesForNewContext(uintptr_t ctorMsg) {
		return ((T (*)(ContextAttribute*, uintptr_t))(Il2CppBase() + 0x4B2F030))(this, ctorMsg);
	}
	template <typename T = bool> T IsContextOK(uintptr_t ctx, uintptr_t ctorMsg) {
		return ((T (*)(ContextAttribute*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4B2F200))(this, ctx, ctorMsg);
	}
	template <typename T = bool> T IsNewContextOK(uintptr_t newCtx) {
		return ((T (*)(ContextAttribute*, uintptr_t))(Il2CppBase() + 0x4B2F3D0))(this, newCtx);
	}

};

}
