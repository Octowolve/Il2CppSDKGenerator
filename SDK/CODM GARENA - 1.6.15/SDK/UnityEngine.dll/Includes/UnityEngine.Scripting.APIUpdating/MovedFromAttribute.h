#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Scripting.APIUpdating {

class MovedFromAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Scripting.APIUpdating", "MovedFromAttribute"));
	}

	template <typename T = Il2CppString*> T& Namespace() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& IsInDifferentAssembly() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T set_Namespace(Il2CppString* value) {
		return ((T (*)(MovedFromAttribute*, Il2CppString*))(Il2CppBase() + 0x4E7E5F0))(this, value);
	}
	template <typename T = void> T set_IsInDifferentAssembly(bool value) {
		return ((T (*)(MovedFromAttribute*, bool))(Il2CppBase() + 0x4E7E5F8))(this, value);
	}

};

}
