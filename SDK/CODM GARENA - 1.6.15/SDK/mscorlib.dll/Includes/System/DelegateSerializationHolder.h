#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class DelegateSerializationHolder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "DelegateSerializationHolder"));
	}

	template <typename T = uintptr_t> T& _delegate() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> static T GetDelegateData(uintptr_t instance, uintptr_t info, uintptr_t ctx) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x366DDB8))(0, instance, info, ctx);
	}
	template <typename T = void> T GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(DelegateSerializationHolder*, uintptr_t, uintptr_t))(Il2CppBase() + 0x366E9AC))(this, info, context);
	}
	template <typename T = uintptr_t> T GetRealObject(uintptr_t context) {
		return ((T (*)(DelegateSerializationHolder*, uintptr_t))(Il2CppBase() + 0x366EA40))(this, context);
	}

};

}
