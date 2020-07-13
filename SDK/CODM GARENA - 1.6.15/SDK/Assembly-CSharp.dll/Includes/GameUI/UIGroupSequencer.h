#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIGroupSequencer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIGroupSequencer"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& sequenceObjects() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& sequenceQueue() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& hasPlayedObjects() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& dynamicCreatedObjects() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& preLoadModels() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& bTick() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& autoInvoke() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ModelInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreLoadModels() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreparePlay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartPlay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Merge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Merge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddEventSequence() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddGeneralSequence() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddAnimationSequence() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanPlayNext() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = void> T clear() {
		return ((T (*)(UIGroupSequencer*))(Il2CppBase() + 0x3AEA6AC))(this);
	}
	template <typename T = void> T ModelInit(uintptr_t loadData) {
		return ((T (*)(UIGroupSequencer*, uintptr_t))(Il2CppBase() + 0x3AEAB00))(this, loadData);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIGroupSequencer*))(Il2CppBase() + 0x3AEAD94))(this);
	}
	template <typename T = void> T PreLoadModels() {
		return ((T (*)(UIGroupSequencer*))(Il2CppBase() + 0x3AEB264))(this);
	}
	template <typename T = void> T PreparePlay() {
		return ((T (*)(UIGroupSequencer*))(Il2CppBase() + 0x3AEAE44))(this);
	}
	template <typename T = void> T StartPlay() {
		return ((T (*)(UIGroupSequencer*))(Il2CppBase() + 0x3AEB480))(this);
	}
	template <typename T = void> T Merge(uintptr_t seq) {
		return ((T (*)(UIGroupSequencer*, uintptr_t))(Il2CppBase() + 0x3AEB52C))(this, seq);
	}
	template <typename T = void> T Merge_1(uintptr_t seqList, Il2CppString* seqType) {
		return ((T (*)(UIGroupSequencer*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x3AEB784))(this, seqList, seqType);
	}
	template <typename T = void> T AddEventSequence(uintptr_t eventAction) {
		return ((T (*)(UIGroupSequencer*, uintptr_t))(Il2CppBase() + 0x3AEB9DC))(this, eventAction);
	}
	template <typename T = void> T AddGeneralSequence(uintptr_t gameObject, float sequenceTime, float activeTime, bool bActiveAfterFinish, uintptr_t mode) {
		return ((T (*)(UIGroupSequencer*, uintptr_t, float, float, bool, uintptr_t))(Il2CppBase() + 0x3AEBB34))(this, gameObject, sequenceTime, activeTime, bActiveAfterFinish, mode);
	}
	template <typename T = void> T AddAnimationSequence(uintptr_t animator, Il2CppString* stateName, uintptr_t mode, bool bLoop) {
		return ((T (*)(UIGroupSequencer*, uintptr_t, Il2CppString*, uintptr_t, bool))(Il2CppBase() + 0x3AEBD2C))(this, animator, stateName, mode, bLoop);
	}
	template <typename T = bool> T CanPlayNext(uintptr_t next) {
		return ((T (*)(UIGroupSequencer*, uintptr_t))(Il2CppBase() + 0x3AEBF20))(this, next);
	}
	template <typename T = bool> T get_IsFinish() {
		return ((T (*)(UIGroupSequencer*))(Il2CppBase() + 0x3AEC17C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIGroupSequencer*))(Il2CppBase() + 0x3AEC358))(this);
	}

};

}
