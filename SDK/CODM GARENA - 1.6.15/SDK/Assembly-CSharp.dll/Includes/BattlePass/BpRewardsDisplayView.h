#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BpRewardsDisplayView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BpRewardsDisplayView"));
	}

	template <typename T = uintptr_t> T& CheckRewardTitle() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& NormalGrid() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& NormalScrollView() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& PlusGrid() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& PlusScrollView() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& NormalItemView() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& PlusItemView() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& LoadoutItemDetail() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& CompareWeaponBtn() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& CompareWeaponQualitySprite() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& CompareWeaponIconSprite() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& NotWeaponShowObj() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& NotWeaponSprite() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRewardTitleInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BpRewardsDisplayView*))(Il2CppBase() + 0x2C4C5D4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BpRewardsDisplayView*))(Il2CppBase() + 0x2C4C67C))(this);
	}
	template <typename T = void> T SetRewardTitleInfo() {
		return ((T (*)(BpRewardsDisplayView*))(Il2CppBase() + 0x2C4C72C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(BpRewardsDisplayView*))(Il2CppBase() + 0x2C4C90C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(BpRewardsDisplayView*))(Il2CppBase() + 0x2C4C914))(this);
	}

};

}
