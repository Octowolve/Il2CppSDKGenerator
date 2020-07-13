#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsMultitaskSingleControllerEn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsMultitaskSingleController_En"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_ListController() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> static T& ITEM_WIDTH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ITEM_HEIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& NeedSort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uint64_t>*> T& cachSendBox() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnBtnTemplateGoClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnBtnTemplateCliamClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnBtnTemplarePreviewClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClaimSubTask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClaimSubTaskReward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActivityData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZoneReconnectSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnBtnTemplarenDetailsClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = void> T Init() {
		return ((T (*)(LiveOpsMultitaskSingleControllerEn*))(Il2CppBase() + 0x350A034))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(LiveOpsMultitaskSingleControllerEn*))(Il2CppBase() + 0x350BAB8))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LiveOpsMultitaskSingleControllerEn*))(Il2CppBase() + 0x350B9D0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LiveOpsMultitaskSingleControllerEn*))(Il2CppBase() + 0x350AE60))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LiveOpsMultitaskSingleControllerEn*))(Il2CppBase() + 0x350B278))(this);
	}
	template <typename T = void> T _OnBtnTemplateGoClick() {
		return ((T (*)(LiveOpsMultitaskSingleControllerEn*))(Il2CppBase() + 0x350BB90))(this);
	}
	template <typename T = void> T _OnBtnTemplateCliamClick() {
		return ((T (*)(LiveOpsMultitaskSingleControllerEn*))(Il2CppBase() + 0x350BE90))(this);
	}
	template <typename T = void> T _OnBtnTemplarePreviewClick() {
		return ((T (*)(LiveOpsMultitaskSingleControllerEn*))(Il2CppBase() + 0x350C1CC))(this);
	}
	template <typename T = void> T OnClaimSubTask(uintptr_t msg) {
		return ((T (*)(LiveOpsMultitaskSingleControllerEn*, uintptr_t))(Il2CppBase() + 0x350C6A8))(this, msg);
	}
	template <typename T = void> T ClaimSubTaskReward(uint64_t taskId) {
		return ((T (*)(LiveOpsMultitaskSingleControllerEn*, uint64_t))(Il2CppBase() + 0x350C838))(this, taskId);
	}
	template <typename T = void> T SetActivityData(int32_t topNum, int32_t leftNum, bool bInit) {
		return ((T (*)(LiveOpsMultitaskSingleControllerEn*, int32_t, int32_t, bool))(Il2CppBase() + 0x350CAA0))(this, topNum, leftNum, bInit);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(LiveOpsMultitaskSingleControllerEn*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x350CF14))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(LiveOpsMultitaskSingleControllerEn*, uintptr_t, int32_t))(Il2CppBase() + 0x350D00C))(this, list, userContext);
	}
	template <typename T = void> T OnZoneReconnectSuccess() {
		return ((T (*)(LiveOpsMultitaskSingleControllerEn*))(Il2CppBase() + 0x350D0F0))(this);
	}
	template <typename T = void> T _OnBtnTemplarenDetailsClick() {
		return ((T (*)(LiveOpsMultitaskSingleControllerEn*))(Il2CppBase() + 0x350D200))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LiveOpsMultitaskSingleControllerEn*))(Il2CppBase() + 0x350D3A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(LiveOpsMultitaskSingleControllerEn*))(Il2CppBase() + 0x350D3B0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LiveOpsMultitaskSingleControllerEn*))(Il2CppBase() + 0x350D3B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LiveOpsMultitaskSingleControllerEn*))(Il2CppBase() + 0x350D3C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LiveOpsMultitaskSingleControllerEn*))(Il2CppBase() + 0x350D3C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetActivityData(int32_t P0, int32_t P1, bool P2) {
		return ((T (*)(LiveOpsMultitaskSingleControllerEn*, int32_t, int32_t, bool))(Il2CppBase() + 0x350D3D0))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_OnZoneReconnectSuccess() {
		return ((T (*)(LiveOpsMultitaskSingleControllerEn*))(Il2CppBase() + 0x350D3F0))(this);
	}

};

}
