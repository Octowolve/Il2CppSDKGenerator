#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class CODMissileCrossHair
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "COD_MissileCrossHair"));
	}

	template <typename T = bool> static T& EnableInputOnUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& WidgetBtn() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& LabelBoost() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& SpriteSelf() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& SpriteEnemy() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& SpriteAimTarget() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_EnemyList() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadBoost() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDoubleClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddBrandTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateIndicators() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawIndicator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(CODMissileCrossHair*))(Il2CppBase() + 0x3C7B100))(this);
	}
	template <typename T = void> T Show(bool isActive) {
		return ((T (*)(CODMissileCrossHair*, bool))(Il2CppBase() + 0x3C7B2DC))(this, isActive);
	}
	template <typename T = void> T ForceRegisterDelegates() {
		return ((T (*)(CODMissileCrossHair*))(Il2CppBase() + 0x3C7B5C4))(this);
	}
	template <typename T = bool> T OnGamepadBoost() {
		return ((T (*)(CODMissileCrossHair*))(Il2CppBase() + 0x3C7B68C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(CODMissileCrossHair*))(Il2CppBase() + 0x3C7B9E4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(CODMissileCrossHair*))(Il2CppBase() + 0x3C7BB5C))(this);
	}
	template <typename T = void> T OnDoubleClick() {
		return ((T (*)(CODMissileCrossHair*))(Il2CppBase() + 0x3C7B764))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(CODMissileCrossHair*))(Il2CppBase() + 0x3C7BCD4))(this);
	}
	template <typename T = void> T AddBrandTarget() {
		return ((T (*)(CODMissileCrossHair*))(Il2CppBase() + 0x3C7CB70))(this);
	}
	template <typename T = void> T UpdateIndicators() {
		return ((T (*)(CODMissileCrossHair*))(Il2CppBase() + 0x3C7BDD4))(this);
	}
	template <typename T = void> T DrawIndicator(uintptr_t sprite, uintptr_t target) {
		return ((T (*)(CODMissileCrossHair*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3C7CF18))(this, sprite, target);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(CODMissileCrossHair*))(Il2CppBase() + 0x3C7D5A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ForceRegisterDelegates() {
		return ((T (*)(CODMissileCrossHair*))(Il2CppBase() + 0x3C7D5B0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(CODMissileCrossHair*))(Il2CppBase() + 0x3C7D5B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(CODMissileCrossHair*))(Il2CppBase() + 0x3C7D5C0))(this);
	}

};

}
