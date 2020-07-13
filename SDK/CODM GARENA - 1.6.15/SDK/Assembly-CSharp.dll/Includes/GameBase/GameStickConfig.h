#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class GameStickConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "GameStickConfig"));
	}

	template <typename T = float> T& xPos() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& yPos() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Side() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& SideLock() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& Alpha() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& Scale() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& MaxScale() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& MinScale() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = float> T get_ClampedScale() {
		return ((T (*)(GameStickConfig*))(Il2CppBase() + 0x1E8FF4C))(this);
	}

};

}
