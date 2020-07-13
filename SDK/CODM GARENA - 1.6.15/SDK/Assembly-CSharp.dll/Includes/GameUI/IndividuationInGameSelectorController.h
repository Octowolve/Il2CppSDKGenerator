#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class IndividuationInGameSelectorController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "IndividuationInGameSelectorController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseIndividuation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyOpenUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSetItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMaskClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T Init() {
		return ((T (*)(IndividuationInGameSelectorController*))(Il2CppBase() + 0x2330180))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(IndividuationInGameSelectorController*))(Il2CppBase() + 0x233028C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(IndividuationInGameSelectorController*))(Il2CppBase() + 0x2330330))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(IndividuationInGameSelectorController*))(Il2CppBase() + 0x2330698))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(IndividuationInGameSelectorController*))(Il2CppBase() + 0x2330940))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(IndividuationInGameSelectorController*))(Il2CppBase() + 0x233103C))(this);
	}
	template <typename T = void> T OnCloseIndividuation(uintptr_t msg) {
		return ((T (*)(IndividuationInGameSelectorController*, uintptr_t))(Il2CppBase() + 0x2331100))(this, msg);
	}
	template <typename T = void> T NotifyOpenUI(uintptr_t msg) {
		return ((T (*)(IndividuationInGameSelectorController*, uintptr_t))(Il2CppBase() + 0x23311EC))(this, msg);
	}
	template <typename T = void> T OnSetItemClick(uint64_t guid, uint32_t id, int32_t index) {
		return ((T (*)(IndividuationInGameSelectorController*, uint64_t, uint32_t, int32_t))(Il2CppBase() + 0x2331350))(this, guid, id, index);
	}
	template <typename T = void> T OnMaskClick(uintptr_t go) {
		return ((T (*)(IndividuationInGameSelectorController*, uintptr_t))(Il2CppBase() + 0x2331940))(this, go);
	}
	template <typename T = void> T OnCloseClick() {
		return ((T (*)(IndividuationInGameSelectorController*))(Il2CppBase() + 0x2331A2C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(IndividuationInGameSelectorController*))(Il2CppBase() + 0x2331B10))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(IndividuationInGameSelectorController*))(Il2CppBase() + 0x2331B18))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(IndividuationInGameSelectorController*))(Il2CppBase() + 0x2331B20))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(IndividuationInGameSelectorController*))(Il2CppBase() + 0x2331B28))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(IndividuationInGameSelectorController*))(Il2CppBase() + 0x2331B30))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnShow() {
		return ((T (*)(IndividuationInGameSelectorController*))(Il2CppBase() + 0x2331B38))(this);
	}

};

}
