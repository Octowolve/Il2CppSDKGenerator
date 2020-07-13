#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngineInternal {

class NetFxCoreExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngineInternal", "NetFxCoreExtensions"));
	}


	template <typename T = uintptr_t> static T CreateDelegate(uintptr_t self, uintptr_t delegateType, uintptr_t target) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D42350))(0, self, delegateType, target);
	}
	template <typename T = uintptr_t> static T GetMethodInfo(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D42384))(0, self);
	}

};

}
