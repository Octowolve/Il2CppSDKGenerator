#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Home {

class IndividuationSetItemController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Home", "IndividuationSetItemController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint32_t> T& m_CurrentItemId() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uint64_t> T& m_CurrentItemGuid() {
		return *(T*)((uintptr_t)this + 0x50);
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
	template <typename T = uintptr_t> static T& __Hotfix0_IfBlurWhenOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentSelectItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshSetItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSetItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMaskClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T Init() {
		return ((T (*)(IndividuationSetItemController*))(Il2CppBase() + 0x2327A20))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(IndividuationSetItemController*))(Il2CppBase() + 0x2327B2C))(this);
	}
	template <typename T = bool> T IfBlurWhenOpen() {
		return ((T (*)(IndividuationSetItemController*))(Il2CppBase() + 0x2327BD0))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(IndividuationSetItemController*))(Il2CppBase() + 0x2327C70))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(IndividuationSetItemController*))(Il2CppBase() + 0x23285F8))(this);
	}
	template <typename T = void> T SetCurrentSelectItem(uintptr_t itemData) {
		return ((T (*)(IndividuationSetItemController*, uintptr_t))(Il2CppBase() + 0x22E5464))(this, itemData);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(IndividuationSetItemController*))(Il2CppBase() + 0x23286BC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(IndividuationSetItemController*))(Il2CppBase() + 0x2328B2C))(this);
	}
	template <typename T = void> T RefreshSetItems(uintptr_t msg) {
		return ((T (*)(IndividuationSetItemController*, uintptr_t))(Il2CppBase() + 0x2328F28))(this, msg);
	}
	template <typename T = void> T OnSetItemClick(uint64_t guid, uint32_t id, int32_t index) {
		return ((T (*)(IndividuationSetItemController*, uint64_t, uint32_t, int32_t))(Il2CppBase() + 0x2328FE8))(this, guid, id, index);
	}
	template <typename T = void> T OnMaskClick(uintptr_t go) {
		return ((T (*)(IndividuationSetItemController*, uintptr_t))(Il2CppBase() + 0x2329130))(this, go);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(IndividuationSetItemController*))(Il2CppBase() + 0x23291FC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(IndividuationSetItemController*))(Il2CppBase() + 0x2329204))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IfBlurWhenOpen() {
		return ((T (*)(IndividuationSetItemController*))(Il2CppBase() + 0x232920C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(IndividuationSetItemController*))(Il2CppBase() + 0x2329214))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnShow() {
		return ((T (*)(IndividuationSetItemController*))(Il2CppBase() + 0x232921C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(IndividuationSetItemController*))(Il2CppBase() + 0x2329224))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(IndividuationSetItemController*))(Il2CppBase() + 0x232922C))(this);
	}

};

}
