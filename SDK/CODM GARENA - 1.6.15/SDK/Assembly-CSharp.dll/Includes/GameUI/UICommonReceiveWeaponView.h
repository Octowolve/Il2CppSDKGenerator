#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UICommonReceiveWeaponView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UICommonReceiveWeaponView"));
	}

	template <typename T = uintptr_t> T& FullScreenBlackMask() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& FullScreenBlackMaskTweener() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& HideObjList() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& line1() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& line2() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& line3() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& line4() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& line5() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& SkillRoot() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& SkillGrid() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& SkillTemplate() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& SkillList() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mWeaponDetailList() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGeneralInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPropertyProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UICommonReceiveWeaponView*))(Il2CppBase() + 0x29E21F4))(this);
	}
	template <typename T = void> T SetGeneralInfo(uintptr_t item) {
		return ((T (*)(UICommonReceiveWeaponView*, uintptr_t))(Il2CppBase() + 0x29E24C0))(this, item);
	}
	template <typename T = void> T SetPropertyProgress(uint32_t weaponId) {
		return ((T (*)(UICommonReceiveWeaponView*, uint32_t))(Il2CppBase() + 0x29E2FF0))(this, weaponId);
	}
	template <typename T = void> T SetSkill() {
		return ((T (*)(UICommonReceiveWeaponView*))(Il2CppBase() + 0x29E27CC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(UICommonReceiveWeaponView*))(Il2CppBase() + 0x29E377C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetGeneralInfo(uintptr_t P0) {
		return ((T (*)(UICommonReceiveWeaponView*, uintptr_t))(Il2CppBase() + 0x29E3784))(this, P0);
	}

};

}
