#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class UILineInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "UILineInfo"));
	}

	template <typename T = int32_t> T& startCharIdx() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& height() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& topY() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& leading() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
