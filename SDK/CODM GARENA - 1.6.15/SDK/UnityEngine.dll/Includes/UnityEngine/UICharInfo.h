#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class UICharInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "UICharInfo"));
	}

	template <typename T = Il2CppVector2> T& cursorPos() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& charWidth() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
