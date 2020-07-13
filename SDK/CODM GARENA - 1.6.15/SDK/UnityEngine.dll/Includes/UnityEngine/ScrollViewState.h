#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class ScrollViewState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "ScrollViewState"));
	}

	template <typename T = Il2CppRect> T& position() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppRect> T& visibleRect() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppRect> T& viewRect() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector2> T& scrollPosition() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& apply() {
		return *(T*)((uintptr_t)this + 0x40);
	}


};

}
