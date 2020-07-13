#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BRMapMarkTipsEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BRMapMarkTipsEffect"));
	}

	template <typename T = uintptr_t> T& Effect() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& OutCircle() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& InsideCircle() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector3> T& Position() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_bHasPlay() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = void> T PlayEffect() {
		return ((T (*)(BRMapMarkTipsEffect*))(Il2CppBase() + 0x2D93E68))(this);
	}
	template <typename T = void> T ReActiveUISprite() {
		return ((T (*)(BRMapMarkTipsEffect*))(Il2CppBase() + 0x2D94188))(this);
	}
	template <typename T = void> T ResetNotifySelfUISpriteSize() {
		return ((T (*)(BRMapMarkTipsEffect*))(Il2CppBase() + 0x2D93F48))(this);
	}
	template <typename T = void> T ResetState() {
		return ((T (*)(BRMapMarkTipsEffect*))(Il2CppBase() + 0x2D9454C))(this);
	}

};

}
