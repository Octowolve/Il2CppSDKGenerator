#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd.Career {

class CareerAchievementWestItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd.Career", "CareerAchievementWestItem"));
	}

	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& NormalName() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& SelectedState() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& NotReceive() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& removeBtn() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& m_IsShow() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& SpriteBg() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& TfItem() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& SpriteHorn() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRemoveBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBGHight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Init() {
		return ((T (*)(CareerAchievementWestItem*))(Il2CppBase() + 0x29048B4))(this);
	}
	template <typename T = void> T SetCent(bool isShow) {
		return ((T (*)(CareerAchievementWestItem*, bool))(Il2CppBase() + 0x290495C))(this, isShow);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(CareerAchievementWestItem*))(Il2CppBase() + 0x2904A04))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(CareerAchievementWestItem*))(Il2CppBase() + 0x2904B1C))(this);
	}
	template <typename T = void> T OnRemoveBtnClick() {
		return ((T (*)(CareerAchievementWestItem*))(Il2CppBase() + 0x2904C20))(this);
	}
	template <typename T = void> T SetBGHight(int32_t hight) {
		return ((T (*)(CareerAchievementWestItem*, int32_t))(Il2CppBase() + 0x2904DD0))(this, hight);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(CareerAchievementWestItem*))(Il2CppBase() + 0x2905088))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(CareerAchievementWestItem*))(Il2CppBase() + 0x2905090))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(CareerAchievementWestItem*))(Il2CppBase() + 0x2905098))(this);
	}

};

}
