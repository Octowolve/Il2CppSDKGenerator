#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class SettlementPlayAgainPopWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "SettlementPlayAgainPopWindowController"));
	}

	template <typename T = uintptr_t> T& view() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppVector2> T& offsetPos1() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindUIEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnIgnoreClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnJoinClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowPlayAgain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPopRootPosFromWorldPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayAgainOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClosePlayAgain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnScreenCapture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCanShowPlayAgainWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SettlementPlayAgainPopWindowController*))(Il2CppBase() + 0x296C348))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SettlementPlayAgainPopWindowController*))(Il2CppBase() + 0x296C3EC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SettlementPlayAgainPopWindowController*))(Il2CppBase() + 0x296C690))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SettlementPlayAgainPopWindowController*))(Il2CppBase() + 0x296C848))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(SettlementPlayAgainPopWindowController*))(Il2CppBase() + 0x296C92C))(this);
	}
	template <typename T = void> T BindUIEvent() {
		return ((T (*)(SettlementPlayAgainPopWindowController*))(Il2CppBase() + 0x296C500))(this);
	}
	template <typename T = void> T OnIgnoreClick() {
		return ((T (*)(SettlementPlayAgainPopWindowController*))(Il2CppBase() + 0x296C9C4))(this);
	}
	template <typename T = void> T OnJoinClick() {
		return ((T (*)(SettlementPlayAgainPopWindowController*))(Il2CppBase() + 0x296D194))(this);
	}
	template <typename T = void> T OnShowPlayAgain(uintptr_t msgs) {
		return ((T (*)(SettlementPlayAgainPopWindowController*, uintptr_t))(Il2CppBase() + 0x296D358))(this, msgs);
	}
	template <typename T = void> T SetPopRootPosFromWorldPos(uintptr_t msgs) {
		return ((T (*)(SettlementPlayAgainPopWindowController*, uintptr_t))(Il2CppBase() + 0x296D818))(this, msgs);
	}
	template <typename T = void> T SetPlayAgainOffset(Il2CppVector3 pos) {
		return ((T (*)(SettlementPlayAgainPopWindowController*, Il2CppVector3))(Il2CppBase() + 0x296DBB0))(this, pos);
	}
	template <typename T = void> T OnClosePlayAgain(uintptr_t msgs) {
		return ((T (*)(SettlementPlayAgainPopWindowController*, uintptr_t))(Il2CppBase() + 0x296DEA4))(this, msgs);
	}
	template <typename T = void> T OnScreenCapture(uintptr_t msg) {
		return ((T (*)(SettlementPlayAgainPopWindowController*, uintptr_t))(Il2CppBase() + 0x296DFC4))(this, msg);
	}
	template <typename T = bool> T CheckCanShowPlayAgainWindow() {
		return ((T (*)(SettlementPlayAgainPopWindowController*))(Il2CppBase() + 0x296D4FC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SettlementPlayAgainPopWindowController*))(Il2CppBase() + 0x296E204))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SettlementPlayAgainPopWindowController*))(Il2CppBase() + 0x296E20C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SettlementPlayAgainPopWindowController*))(Il2CppBase() + 0x296E214))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SettlementPlayAgainPopWindowController*))(Il2CppBase() + 0x296E21C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(SettlementPlayAgainPopWindowController*))(Il2CppBase() + 0x296E224))(this);
	}

};

}
