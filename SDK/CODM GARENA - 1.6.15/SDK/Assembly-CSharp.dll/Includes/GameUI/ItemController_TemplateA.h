#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ItemControllerTemplateA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ItemController_TemplateA"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEasyListData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_SetRewarded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetReddotActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Init() {
		return ((T (*)(ItemControllerTemplateA*))(Il2CppBase() + 0x2335F44))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ItemControllerTemplateA*))(Il2CppBase() + 0x2336050))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ItemControllerTemplateA*))(Il2CppBase() + 0x23360F4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ItemControllerTemplateA*))(Il2CppBase() + 0x233619C))(this);
	}
	template <typename T = bool> T SetEasyListData(uintptr_t list, int32_t index, uintptr_t dataObj) {
		return ((T (*)(ItemControllerTemplateA*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x2336244))(this, list, index, dataObj);
	}
	template <typename T = void> T T_SetRewarded(bool bShow) {
		return ((T (*)(ItemControllerTemplateA*, bool))(Il2CppBase() + 0x2336388))(this, bShow);
	}
	template <typename T = void> T SetReddotActive(bool active) {
		return ((T (*)(ItemControllerTemplateA*, bool))(Il2CppBase() + 0x2336540))(this, active);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ItemControllerTemplateA*))(Il2CppBase() + 0x233664C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ItemControllerTemplateA*))(Il2CppBase() + 0x2336654))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ItemControllerTemplateA*))(Il2CppBase() + 0x233665C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ItemControllerTemplateA*))(Il2CppBase() + 0x2336664))(this);
	}

};

}
