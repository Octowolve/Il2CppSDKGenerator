#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class NativeClassAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "NativeClassAttribute"));
	}

	template <typename T = Il2CppString*> T& QualifiedNativeName() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T set_QualifiedNativeName(Il2CppString* value) {
		return ((T (*)(NativeClassAttribute*, Il2CppString*))(Il2CppBase() + 0x4AB9E80))(this, value);
	}

};

}
