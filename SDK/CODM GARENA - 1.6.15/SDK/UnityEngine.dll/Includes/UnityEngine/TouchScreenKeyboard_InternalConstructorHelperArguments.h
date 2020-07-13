#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class TouchScreenKeyboardInternalConstructorHelperArguments
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "TouchScreenKeyboard_InternalConstructorHelperArguments"));
	}

	template <typename T = uint32_t> T& keyboardType() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uint32_t> T& autocorrection() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = uint32_t> T& multiline() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& secure() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& alert() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
