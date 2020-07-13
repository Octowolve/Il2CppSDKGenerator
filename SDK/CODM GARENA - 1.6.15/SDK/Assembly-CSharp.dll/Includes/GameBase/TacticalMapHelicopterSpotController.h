#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalMapHelicopterSpotController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalMapHelicopterSpotController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& ItemID() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSafeActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(TacticalMapHelicopterSpotController*))(Il2CppBase() + 0x277E9A0))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(TacticalMapHelicopterSpotController*))(Il2CppBase() + 0x277EA44))(this);
	}
	template <typename T = void> T OnShowView(uintptr_t inMsg) {
		return ((T (*)(TacticalMapHelicopterSpotController*, uintptr_t))(Il2CppBase() + 0x277EB44))(this, inMsg);
	}
	template <typename T = void> T ChangeEffect(bool showEffect, uintptr_t itemType, Il2CppString* tipsText, uintptr_t fadeAction) {
		return ((T (*)(TacticalMapHelicopterSpotController*, bool, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x277EE80))(this, showEffect, itemType, tipsText, fadeAction);
	}
	template <typename T = bool> T IsSafeActive(uintptr_t itemType) {
		return ((T (*)(TacticalMapHelicopterSpotController*, uintptr_t))(Il2CppBase() + 0x277EF40))(this, itemType);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(TacticalMapHelicopterSpotController*))(Il2CppBase() + 0x277F22C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TacticalMapHelicopterSpotController*))(Il2CppBase() + 0x277F230))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnShowView(uintptr_t P0) {
		return ((T (*)(TacticalMapHelicopterSpotController*, uintptr_t))(Il2CppBase() + 0x277F234))(this, P0);
	}

};

}
