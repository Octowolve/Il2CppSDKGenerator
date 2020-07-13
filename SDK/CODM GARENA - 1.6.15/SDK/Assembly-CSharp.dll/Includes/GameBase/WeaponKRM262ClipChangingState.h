#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponKRM262ClipChangingState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponKRM262ClipChangingState"));
	}

	template <typename T = bool> T& m_WaitSyncFirstLoop() {
		return *(T*)((uintptr_t)this + 0x3E);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetChangeClipTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeClipPhase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSyncFirstLoopAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = float> T GetChangeClipTime() {
		return ((T (*)(WeaponKRM262ClipChangingState*))(Il2CppBase() + 0x3A55C0C))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponKRM262ClipChangingState*, float))(Il2CppBase() + 0x3A55D44))(this, DeltaTime);
	}
	template <typename T = void> T ChangeClipPhase(uintptr_t state) {
		return ((T (*)(WeaponKRM262ClipChangingState*, uintptr_t))(Il2CppBase() + 0x3A561CC))(this, state);
	}
	template <typename T = void> T CheckSyncFirstLoopAnim() {
		return ((T (*)(WeaponKRM262ClipChangingState*))(Il2CppBase() + 0x3A56074))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetChangeClipTime() {
		return ((T (*)(WeaponKRM262ClipChangingState*))(Il2CppBase() + 0x3A56758))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponKRM262ClipChangingState*, float))(Il2CppBase() + 0x3A56890))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ChangeClipPhase(uintptr_t P0) {
		return ((T (*)(WeaponKRM262ClipChangingState*, uintptr_t))(Il2CppBase() + 0x3A56B60))(this, P0);
	}

};

}
