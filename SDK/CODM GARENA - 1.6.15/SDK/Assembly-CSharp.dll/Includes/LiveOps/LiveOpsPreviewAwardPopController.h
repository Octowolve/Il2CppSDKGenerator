#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsPreviewAwardPopController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsPreviewAwardPopController"));
	}

	template <typename T = uintptr_t> T& m_view() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& easyListController() {
		return *(T*)((uintptr_t)this + 0x4C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LiveOpsPreviewAwardPopController*))(Il2CppBase() + 0x351C714))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LiveOpsPreviewAwardPopController*))(Il2CppBase() + 0x351C7B8))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LiveOpsPreviewAwardPopController*))(Il2CppBase() + 0x351C8C4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LiveOpsPreviewAwardPopController*))(Il2CppBase() + 0x351C9F8))(this);
	}
	template <typename T = void> T SetData(Il2CppList<uintptr_t>* m_PropList) {
		return ((T (*)(LiveOpsPreviewAwardPopController*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x350C5E4))(this, m_PropList);
	}
	template <typename T = void> T CloseBtnClick() {
		return ((T (*)(LiveOpsPreviewAwardPopController*))(Il2CppBase() + 0x351D0D4))(this);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(LiveOpsPreviewAwardPopController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x351D188))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(LiveOpsPreviewAwardPopController*, uintptr_t, int32_t))(Il2CppBase() + 0x351D250))(this, list, userContext);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LiveOpsPreviewAwardPopController*))(Il2CppBase() + 0x351D304))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LiveOpsPreviewAwardPopController*))(Il2CppBase() + 0x351D30C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LiveOpsPreviewAwardPopController*))(Il2CppBase() + 0x351D314))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LiveOpsPreviewAwardPopController*))(Il2CppBase() + 0x351D31C))(this);
	}

};

}
