#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace TimiAudio.AudioLogic {

class DOMGameAudioLogic
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "TimiAudio.AudioLogic", "DOMGameAudioLogic"));
	}

	template <typename T = bool> T& mIsRoundStart() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mIsDoming() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mOwnerCamp() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mDomingCamp() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mDomingState() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mDomingSound() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mLosingNeutralSound() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mLosingOwnSound() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mOwnedSound() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mEnemyOwnedSound() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mEnemyOwnedSound2() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& mRoundStartSound() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterEventHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnregisterEventHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnRoundStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnRoundEnded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncDomArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDomAreaChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T RegisterEventHandler() {
		return ((T (*)(DOMGameAudioLogic*))(Il2CppBase() + 0x466A5E4))(this);
	}
	template <typename T = void> T UnregisterEventHandler() {
		return ((T (*)(DOMGameAudioLogic*))(Il2CppBase() + 0x466AB64))(this);
	}
	template <typename T = void> T _OnRoundStart() {
		return ((T (*)(DOMGameAudioLogic*))(Il2CppBase() + 0x466AD80))(this);
	}
	template <typename T = void> T _OnRoundEnded(uintptr_t result) {
		return ((T (*)(DOMGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x466AEB8))(this, result);
	}
	template <typename T = void> T OnSyncDomArea(uintptr_t pMsg) {
		return ((T (*)(DOMGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x466AF64))(this, pMsg);
	}
	template <typename T = void> T OnDomAreaChanged(uintptr_t pMsg) {
		return ((T (*)(DOMGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x466B4E0))(this, pMsg);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterEventHandler() {
		return ((T (*)(DOMGameAudioLogic*))(Il2CppBase() + 0x466BA78))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnregisterEventHandler() {
		return ((T (*)(DOMGameAudioLogic*))(Il2CppBase() + 0x466BA7C))(this);
	}
	template <typename T = void> T xLuaBaseProxy__OnRoundStart() {
		return ((T (*)(DOMGameAudioLogic*))(Il2CppBase() + 0x466BA80))(this);
	}
	template <typename T = void> T xLuaBaseProxy__OnRoundEnded(uintptr_t P0) {
		return ((T (*)(DOMGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x466BA84))(this, P0);
	}

};

}
