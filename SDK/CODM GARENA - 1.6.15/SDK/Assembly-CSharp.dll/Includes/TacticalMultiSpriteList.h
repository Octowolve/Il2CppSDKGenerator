#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TacticalMultiSpriteList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TacticalMultiSpriteList"));
	}

	template <typename T = uintptr_t> T& MainSprite() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& AttachDirectionRoot() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& AttachDirectionSprite() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& AttachAreaRoot() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& AttachAreaSprite() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& SeatIndexLabel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& SelectSprite() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_CachedTransform() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T get_CachedTransform() {
		return ((T (*)(TacticalMultiSpriteList*))(Il2CppBase() + 0x3F45B1C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(TacticalMultiSpriteList*))(Il2CppBase() + 0x3F45BEC))(this);
	}

};

}
