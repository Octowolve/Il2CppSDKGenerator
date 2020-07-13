#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Emoji {

class EmoticonSelectController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Emoji", "EmoticonSelectController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& easyListController() {
		return *(T*)((uintptr_t)this + 0x40);
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
	template <typename T = uintptr_t> static T& __Hotfix0_InitEmoticonView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustUIPanelDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(EmoticonSelectController*))(Il2CppBase() + 0x4BCB4C8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(EmoticonSelectController*))(Il2CppBase() + 0x4BCB56C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(EmoticonSelectController*))(Il2CppBase() + 0x4BCB828))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(EmoticonSelectController*))(Il2CppBase() + 0x4BCB970))(this);
	}
	template <typename T = void> T InitEmoticonView() {
		return ((T (*)(EmoticonSelectController*))(Il2CppBase() + 0x4BCB680))(this);
	}
	template <typename T = void> T OnCloseClick(uintptr_t obj) {
		return ((T (*)(EmoticonSelectController*, uintptr_t))(Il2CppBase() + 0x4BCBA80))(this, obj);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(EmoticonSelectController*))(Il2CppBase() + 0x4BCBB54))(this);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(EmoticonSelectController*, uintptr_t, int32_t))(Il2CppBase() + 0x4BCBC94))(this, list, userContext);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(EmoticonSelectController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x4BCBD48))(this, list, controller, index);
	}
	template <typename T = void> T AdjustUIPanelDepth(int32_t depth) {
		return ((T (*)(EmoticonSelectController*, int32_t))(Il2CppBase() + 0x4BCBE10))(this, depth);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(EmoticonSelectController*))(Il2CppBase() + 0x4BCBF98))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(EmoticonSelectController*))(Il2CppBase() + 0x4BCBFA0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(EmoticonSelectController*))(Il2CppBase() + 0x4BCBFA8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(EmoticonSelectController*))(Il2CppBase() + 0x4BCBFB0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(EmoticonSelectController*))(Il2CppBase() + 0x4BCBFB8))(this);
	}

};

}
