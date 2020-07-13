#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalBRMapMineManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalBRMapMineManager"));
	}

	template <typename T = uintptr_t> T& tacticalBRMapInstance() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Init() {
		return ((T (*)(TacticalBRMapMineManager*))(Il2CppBase() + 0x30BF408))(this);
	}
	template <typename T = void> T SetCulling(uintptr_t clipPanel, uintptr_t sprite) {
		return ((T (*)(TacticalBRMapMineManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x30BF704))(this, clipPanel, sprite);
	}

};

}
