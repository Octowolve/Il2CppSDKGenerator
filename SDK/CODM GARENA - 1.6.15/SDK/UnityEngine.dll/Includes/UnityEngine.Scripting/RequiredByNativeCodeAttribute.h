#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Scripting {

class RequiredByNativeCodeAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Scripting", "RequiredByNativeCodeAttribute"));
	}

	template <typename T = bool> T& Optional() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T set_Optional(bool value) {
		return ((T (*)(RequiredByNativeCodeAttribute*, bool))(Il2CppBase() + 0x4E7E610))(this, value);
	}

};

}
