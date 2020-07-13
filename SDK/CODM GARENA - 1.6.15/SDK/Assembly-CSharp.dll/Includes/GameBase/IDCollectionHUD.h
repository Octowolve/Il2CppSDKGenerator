#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class IDCollectionHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "IDCollectionHUD"));
	}

	template <typename T = uintptr_t> T& IDCollectionIcon() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& LastShowTipFrame() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& LastShowTipDeltaCount() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTipsWithCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckMsgValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T get_CollectionType() {
		return ((T (*)(IDCollectionHUD*))(Il2CppBase() + 0x1EEE0F0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(IDCollectionHUD*))(Il2CppBase() + 0x1EEE0F8))(this);
	}
	template <typename T = void> T OnSyncPlayerInfo(uint32_t playerID, uint32_t propertyID, uintptr_t msg) {
		return ((T (*)(IDCollectionHUD*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x1EEE44C))(this, playerID, propertyID, msg);
	}
	template <typename T = void> T ShowTipsWithCount(int32_t count, int32_t addCount) {
		return ((T (*)(IDCollectionHUD*, int32_t, int32_t))(Il2CppBase() + 0x1EEE6D8))(this, count, addCount);
	}
	template <typename T = bool> T CheckMsgValid(uintptr_t msg) {
		return ((T (*)(IDCollectionHUD*, uintptr_t))(Il2CppBase() + 0x1EEE8A4))(this, msg);
	}
	template <typename T = bool> static T Startm__0(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1EEEAFC))(0, it);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(IDCollectionHUD*))(Il2CppBase() + 0x1EEEBE8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncPlayerInfo(uint32_t P0, uint32_t P1, uintptr_t P2) {
		return ((T (*)(IDCollectionHUD*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x1EEEBF0))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_ShowTipsWithCount(int32_t P0, int32_t P1) {
		return ((T (*)(IDCollectionHUD*, int32_t, int32_t))(Il2CppBase() + 0x1EEEC10))(this, P0, P1);
	}
	template <typename T = bool> T xLuaBaseProxy_CheckMsgValid(uintptr_t P0) {
		return ((T (*)(IDCollectionHUD*, uintptr_t))(Il2CppBase() + 0x1EEEC18))(this, P0);
	}

};

}
