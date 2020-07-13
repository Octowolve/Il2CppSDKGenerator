#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MatineeDirector
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MatineeDirector"));
	}

	template <typename T = uintptr_t> T& currentMatineeMgr() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& allMatineeMgrs() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLevelObjectRegistered() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLevelObjectUnRegistered() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayMatinee() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SkipCurrentCutScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldHideDynamicObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCutScenePlaying() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDisableProtocol() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMatineeDisablePlayerCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentCutScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanShowCrossHair() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T OnLevelObjectRegistered(uintptr_t levelObject) {
		return ((T (*)(MatineeDirector*, uintptr_t))(Il2CppBase() + 0x41CCF9C))(this, levelObject);
	}
	template <typename T = void> T OnLevelObjectUnRegistered(uintptr_t levelObject) {
		return ((T (*)(MatineeDirector*, uintptr_t))(Il2CppBase() + 0x41CD128))(this, levelObject);
	}
	template <typename T = void> T PlayMatinee(Il2CppString* matineeName, uintptr_t finishCallback, float playbackRate, bool isReset, float resetTime, float blendInTime) {
		return ((T (*)(MatineeDirector*, Il2CppString*, uintptr_t, float, bool, float, float))(Il2CppBase() + 0x41CD2BC))(this, matineeName, finishCallback, playbackRate, isReset, resetTime, blendInTime);
	}
	template <typename T = void> T SkipCurrentCutScene(bool forceSkip) {
		return ((T (*)(MatineeDirector*, bool))(Il2CppBase() + 0x41CD4B8))(this, forceSkip);
	}
	template <typename T = bool> T ShouldHideDynamicObject() {
		return ((T (*)(MatineeDirector*))(Il2CppBase() + 0x41CD5D8))(this);
	}
	template <typename T = bool> T IsCutScenePlaying() {
		return ((T (*)(MatineeDirector*))(Il2CppBase() + 0x41CD6F8))(this);
	}
	template <typename T = bool> T IsDisableProtocol() {
		return ((T (*)(MatineeDirector*))(Il2CppBase() + 0x41CD818))(this);
	}
	template <typename T = bool> T IsMatineeDisablePlayerCamera() {
		return ((T (*)(MatineeDirector*))(Il2CppBase() + 0x41CD938))(this);
	}
	template <typename T = Il2CppString*> T GetCurrentCutScene() {
		return ((T (*)(MatineeDirector*))(Il2CppBase() + 0x41CDA58))(this);
	}
	template <typename T = bool> T CanShowCrossHair() {
		return ((T (*)(MatineeDirector*))(Il2CppBase() + 0x41CDBC4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnLevelObjectRegistered(uintptr_t P0) {
		return ((T (*)(MatineeDirector*, uintptr_t))(Il2CppBase() + 0x41CDCE0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnLevelObjectUnRegistered(uintptr_t P0) {
		return ((T (*)(MatineeDirector*, uintptr_t))(Il2CppBase() + 0x41CDCE8))(this, P0);
	}

};

}
