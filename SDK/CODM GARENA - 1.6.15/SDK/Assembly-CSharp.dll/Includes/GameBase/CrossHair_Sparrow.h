#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class CrossHairSparrow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "CrossHair_Sparrow"));
	}

	template <typename T = uintptr_t> T& SpriteCenter() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNGUILayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCrosshairColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(CrossHairSparrow*))(Il2CppBase() + 0x40D0C1C))(this);
	}
	template <typename T = void> T SetVisible(bool visible) {
		return ((T (*)(CrossHairSparrow*, bool))(Il2CppBase() + 0x40D0C24))(this, visible);
	}
	template <typename T = void> T SetNGUILayer(int32_t layer) {
		return ((T (*)(CrossHairSparrow*, int32_t))(Il2CppBase() + 0x40D0D80))(this, layer);
	}
	template <typename T = void> T UpdateCrosshairColor(uintptr_t color) {
		return ((T (*)(CrossHairSparrow*, uintptr_t))(Il2CppBase() + 0x40D0EB0))(this, color);
	}
	template <typename T = void> T xLuaBaseProxy_SetVisible(bool P0) {
		return ((T (*)(CrossHairSparrow*, bool))(Il2CppBase() + 0x40D1044))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SetNGUILayer(int32_t P0) {
		return ((T (*)(CrossHairSparrow*, int32_t))(Il2CppBase() + 0x40D104C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateCrosshairColor(uintptr_t P0) {
		return ((T (*)(CrossHairSparrow*, uintptr_t))(Il2CppBase() + 0x40D1054))(this, P0);
	}

};

}
