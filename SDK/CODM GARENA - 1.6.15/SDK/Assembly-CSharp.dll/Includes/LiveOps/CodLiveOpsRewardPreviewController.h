#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class CodLiveOpsRewardPreviewController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "CodLiveOpsRewardPreviewController"));
	}

	template <typename T = uintptr_t> T& m_View() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnLeftClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnRightClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Init() {
		return ((T (*)(CodLiveOpsRewardPreviewController*))(Il2CppBase() + 0x354D24C))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(CodLiveOpsRewardPreviewController*))(Il2CppBase() + 0x354D358))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(CodLiveOpsRewardPreviewController*))(Il2CppBase() + 0x354D3FC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(CodLiveOpsRewardPreviewController*))(Il2CppBase() + 0x354D59C))(this);
	}
	template <typename T = void> T UpdateView(int32_t topIndex, int32_t leftIndex) {
		return ((T (*)(CodLiveOpsRewardPreviewController*, int32_t, int32_t))(Il2CppBase() + 0x3541004))(this, topIndex, leftIndex);
	}
	template <typename T = void> T OnBtnLeftClick() {
		return ((T (*)(CodLiveOpsRewardPreviewController*))(Il2CppBase() + 0x354D9A4))(this);
	}
	template <typename T = void> T OnBtnRightClick() {
		return ((T (*)(CodLiveOpsRewardPreviewController*))(Il2CppBase() + 0x354DB0C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(CodLiveOpsRewardPreviewController*))(Il2CppBase() + 0x354DC74))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(CodLiveOpsRewardPreviewController*))(Il2CppBase() + 0x354DC7C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(CodLiveOpsRewardPreviewController*))(Il2CppBase() + 0x354DC84))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(CodLiveOpsRewardPreviewController*))(Il2CppBase() + 0x354DC8C))(this);
	}

};

}
