#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class DirectDSLoginOptionItemController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "DirectDSLoginOptionItemController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_List() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& m_Index() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_Wrapper() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetReuseListData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetReuseListItemHide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetReuseListItemContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendReuseListItemAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(DirectDSLoginOptionItemController*))(Il2CppBase() + 0x46EC524))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(DirectDSLoginOptionItemController*))(Il2CppBase() + 0x46EC5C8))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(DirectDSLoginOptionItemController*))(Il2CppBase() + 0x46EC6D4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(DirectDSLoginOptionItemController*))(Il2CppBase() + 0x46EC77C))(this);
	}
	template <typename T = bool> T SetReuseListData(uintptr_t list, int32_t index, uintptr_t data, int32_t width, int32_t height, bool selected) {
		return ((T (*)(DirectDSLoginOptionItemController*, uintptr_t, int32_t, uintptr_t, int32_t, int32_t, bool))(Il2CppBase() + 0x46EC824))(this, list, index, data, width, height, selected);
	}
	template <typename T = bool> T SetReuseListItemHide(uintptr_t list, int32_t index, uintptr_t data) {
		return ((T (*)(DirectDSLoginOptionItemController*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x46ECADC))(this, list, index, data);
	}
	template <typename T = uintptr_t> T GetReuseListItemContent() {
		return ((T (*)(DirectDSLoginOptionItemController*))(Il2CppBase() + 0x46ECD3C))(this);
	}
	template <typename T = bool> T SendReuseListItemAction(int32_t action, uintptr_t data) {
		return ((T (*)(DirectDSLoginOptionItemController*, int32_t, uintptr_t))(Il2CppBase() + 0x46ECED4))(this, action, data);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(DirectDSLoginOptionItemController*))(Il2CppBase() + 0x46ED02C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(DirectDSLoginOptionItemController*))(Il2CppBase() + 0x46ED034))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(DirectDSLoginOptionItemController*))(Il2CppBase() + 0x46ED03C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(DirectDSLoginOptionItemController*))(Il2CppBase() + 0x46ED044))(this);
	}

};

}
