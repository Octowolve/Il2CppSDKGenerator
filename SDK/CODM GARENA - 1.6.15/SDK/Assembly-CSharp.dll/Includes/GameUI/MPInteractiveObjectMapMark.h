#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class MPInteractiveObjectMapMark
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "MPInteractiveObjectMapMark"));
	}

	template <typename T = uintptr_t> T& SpriteIcon() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Up() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Down() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& UpDownDis() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& bindObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T Init(uintptr_t lvObj) {
		return ((T (*)(MPInteractiveObjectMapMark*, uintptr_t))(Il2CppBase() + 0x1FA6A44))(this, lvObj);
	}
	template <typename T = void> T CheckUpDown(uintptr_t pawn, bool noUpDown) {
		return ((T (*)(MPInteractiveObjectMapMark*, uintptr_t, bool))(Il2CppBase() + 0x1FA6A4C))(this, pawn, noUpDown);
	}

};

}
