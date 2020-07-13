#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BROBPawnTopName
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BROBPawnTopName"));
	}

	template <typename T = uintptr_t> T& TeamNo() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& TeamColor() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& HPSprite() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uint32_t> T& PlayerID() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitStyle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNameAndBloodScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNameHUDAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBloodValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Init(uintptr_t owner) {
		return ((T (*)(BROBPawnTopName*, uintptr_t))(Il2CppBase() + 0x52F7050))(this, owner);
	}
	template <typename T = void> T InitStyle() {
		return ((T (*)(BROBPawnTopName*))(Il2CppBase() + 0x52F7798))(this);
	}
	template <typename T = void> T SetNameAndBloodScale(float value) {
		return ((T (*)(BROBPawnTopName*, float))(Il2CppBase() + 0x52F7984))(this, value);
	}
	template <typename T = void> T SetNameHUDAlpha(float value) {
		return ((T (*)(BROBPawnTopName*, float))(Il2CppBase() + 0x52F7A24))(this, value);
	}
	template <typename T = void> T UpdateUI(float dt, uintptr_t worldCam, uintptr_t uiCam) {
		return ((T (*)(BROBPawnTopName*, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x52F7B4C))(this, dt, worldCam, uiCam);
	}
	template <typename T = void> T SetBloodValue(float crtHealth, float maxHealth) {
		return ((T (*)(BROBPawnTopName*, float, float))(Il2CppBase() + 0x52F7F10))(this, crtHealth, maxHealth);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(BROBPawnTopName*, uintptr_t))(Il2CppBase() + 0x52F8408))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_InitStyle() {
		return ((T (*)(BROBPawnTopName*))(Il2CppBase() + 0x52F840C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetNameAndBloodScale(float P0) {
		return ((T (*)(BROBPawnTopName*, float))(Il2CppBase() + 0x52F8A6C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SetNameHUDAlpha(float P0) {
		return ((T (*)(BROBPawnTopName*, float))(Il2CppBase() + 0x52F8A74))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateUI(float P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(BROBPawnTopName*, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x52F8A7C))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_SetBloodValue(float P0, float P1) {
		return ((T (*)(BROBPawnTopName*, float, float))(Il2CppBase() + 0x52F8A9C))(this, P0, P1);
	}

};

}
