#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class GrenadeIndicatorHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "GrenadeIndicatorHUD"));
	}

	template <typename T = uintptr_t> T& PanelRoot() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& SpriteIcon() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& SpriteDirection() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& CenterOffset() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(GrenadeIndicatorHUD*))(Il2CppBase() + 0x1ED3480))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(GrenadeIndicatorHUD*, float))(Il2CppBase() + 0x1ED3488))(this, dt);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(GrenadeIndicatorHUD*, float))(Il2CppBase() + 0x1ED3BF0))(this, P0);
	}

};

}
