#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class SafeBoxThumbnailController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "SafeBoxThumbnailController"));
	}

	template <typename T = uintptr_t> T& m_data() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_view() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& willPlayCmds() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& gradualTimer() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& fGrowStep() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetExternalView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisplaySFX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSafeBoxOverlayWinowOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSafeBoxViewForceRefresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSafeBoxOverlayWinowClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStateFull() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStateUnlocked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStateEmpty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStateLocked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStateSoldOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PushPlayCmd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessPlayCmds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PushIncrementAni() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateViewState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLastState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnIncrementAniFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetIncrementState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GradualGrowFillValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSetState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnterMainView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateSettlement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}

	template <typename T = void> T Init() {
		return ((T (*)(SafeBoxThumbnailController*))(Il2CppBase() + 0x446BB74))(this);
	}
	template <typename T = bool> T get_HasResUpate() {
		return ((T (*)(SafeBoxThumbnailController*))(Il2CppBase() + 0x447116C))(this);
	}
	template <typename T = void> T SetExternalView(uintptr_t view) {
		return ((T (*)(SafeBoxThumbnailController*, uintptr_t))(Il2CppBase() + 0x4470488))(this, view);
	}
	template <typename T = void> T InitView() {
		return ((T (*)(SafeBoxThumbnailController*))(Il2CppBase() + 0x4470C50))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SafeBoxThumbnailController*))(Il2CppBase() + 0x446C040))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SafeBoxThumbnailController*))(Il2CppBase() + 0x446C3FC))(this);
	}
	template <typename T = void> T DisplaySFX(bool bDisplay) {
		return ((T (*)(SafeBoxThumbnailController*, bool))(Il2CppBase() + 0x4470B28))(this, bDisplay);
	}
	template <typename T = void> T OnSafeBoxOverlayWinowOpen(uintptr_t msg) {
		return ((T (*)(SafeBoxThumbnailController*, uintptr_t))(Il2CppBase() + 0x4471174))(this, msg);
	}
	template <typename T = void> T OnSafeBoxViewForceRefresh(uintptr_t msg) {
		return ((T (*)(SafeBoxThumbnailController*, uintptr_t))(Il2CppBase() + 0x4471230))(this, msg);
	}
	template <typename T = void> T OnSafeBoxOverlayWinowClose(uintptr_t msg) {
		return ((T (*)(SafeBoxThumbnailController*, uintptr_t))(Il2CppBase() + 0x44712EC))(this, msg);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SafeBoxThumbnailController*))(Il2CppBase() + 0x446F85C))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(SafeBoxThumbnailController*))(Il2CppBase() + 0x44713A8))(this);
	}
	template <typename T = void> T WillClose() {
		return ((T (*)(SafeBoxThumbnailController*))(Il2CppBase() + 0x446C66C))(this);
	}
	template <typename T = void> T OnStateFull() {
		return ((T (*)(SafeBoxThumbnailController*))(Il2CppBase() + 0x446D210))(this);
	}
	template <typename T = void> T OnStateUnlocked() {
		return ((T (*)(SafeBoxThumbnailController*))(Il2CppBase() + 0x446D65C))(this);
	}
	template <typename T = void> T OnStateEmpty() {
		return ((T (*)(SafeBoxThumbnailController*))(Il2CppBase() + 0x446DD24))(this);
	}
	template <typename T = void> T OnStateLocked() {
		return ((T (*)(SafeBoxThumbnailController*))(Il2CppBase() + 0x446DAB4))(this);
	}
	template <typename T = void> T OnStateSoldOut() {
		return ((T (*)(SafeBoxThumbnailController*))(Il2CppBase() + 0x446DF38))(this);
	}
	template <typename T = void> T PushPlayCmd(uintptr_t eCmd) {
		return ((T (*)(SafeBoxThumbnailController*, uintptr_t))(Il2CppBase() + 0x44715F8))(this, eCmd);
	}
	template <typename T = void> T ProcessPlayCmds() {
		return ((T (*)(SafeBoxThumbnailController*))(Il2CppBase() + 0x447176C))(this);
	}
	template <typename T = void> T PushIncrementAni() {
		return ((T (*)(SafeBoxThumbnailController*))(Il2CppBase() + 0x44721F8))(this);
	}
	template <typename T = void> T UpdateViewState(bool bPlayAni) {
		return ((T (*)(SafeBoxThumbnailController*, bool))(Il2CppBase() + 0x44723F4))(this, bPlayAni);
	}
	template <typename T = void> T SetLastState() {
		return ((T (*)(SafeBoxThumbnailController*))(Il2CppBase() + 0x4471C70))(this);
	}
	template <typename T = void> T OnIncrementAniFinish() {
		return ((T (*)(SafeBoxThumbnailController*))(Il2CppBase() + 0x4472700))(this);
	}
	template <typename T = void> T SetIncrementState() {
		return ((T (*)(SafeBoxThumbnailController*))(Il2CppBase() + 0x44727B8))(this);
	}
	template <typename T = void> T GradualGrowFillValue() {
		return ((T (*)(SafeBoxThumbnailController*))(Il2CppBase() + 0x4472BB8))(this);
	}
	template <typename T = void> T SetCurrentState() {
		return ((T (*)(SafeBoxThumbnailController*))(Il2CppBase() + 0x4471F4C))(this);
	}
	template <typename T = void> T OnSetState(uintptr_t state) {
		return ((T (*)(SafeBoxThumbnailController*, uintptr_t))(Il2CppBase() + 0x44725D8))(this, state);
	}
	template <typename T = void> T RefreshView(bool bPlayAni) {
		return ((T (*)(SafeBoxThumbnailController*, bool))(Il2CppBase() + 0x446CB08))(this, bPlayAni);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(SafeBoxThumbnailController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x4472F24))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T EnterMainView() {
		return ((T (*)(SafeBoxThumbnailController*))(Il2CppBase() + 0x4473050))(this);
	}
	template <typename T = void> T SimulateSettlement() {
		return ((T (*)(SafeBoxThumbnailController*))(Il2CppBase() + 0x44731B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SafeBoxThumbnailController*))(Il2CppBase() + 0x447332C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SafeBoxThumbnailController*))(Il2CppBase() + 0x4473334))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SafeBoxThumbnailController*))(Il2CppBase() + 0x447333C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SafeBoxThumbnailController*))(Il2CppBase() + 0x4473344))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(SafeBoxThumbnailController*))(Il2CppBase() + 0x447334C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillClose() {
		return ((T (*)(SafeBoxThumbnailController*))(Il2CppBase() + 0x4473354))(this);
	}

};

}
