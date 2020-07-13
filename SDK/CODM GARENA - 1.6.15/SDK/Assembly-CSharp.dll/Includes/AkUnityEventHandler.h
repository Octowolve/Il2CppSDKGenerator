#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkUnityEventHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkUnityEventHandler"));
	}

	template <typename T = int32_t> static T& AWAKE_TRIGGER_ID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& START_TRIGGER_ID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& DESTROY_TRIGGER_ID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MAX_NB_TRIGGERS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> static T& triggerTypes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& didDestroy() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<int32_t>*> T& triggerList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& cachedSpecialTriggerList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& useOtherObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& OnlyTriggerWithPawn() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = bool> T& OnlyTriggerWithLocalPlayer() {
		return *(T*)((uintptr_t)this + 0x1A);
	}

	template <typename T = void> T HandleEvent(uintptr_t in_gameObject) {
		return ((T (*)(AkUnityEventHandler*, uintptr_t))(Il2CppBase() + 0x0))(this, in_gameObject);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(AkUnityEventHandler*))(Il2CppBase() + 0x22B1AFC))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(AkUnityEventHandler*))(Il2CppBase() + 0x22B1C38))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(AkUnityEventHandler*))(Il2CppBase() + 0x22B1CF8))(this);
	}
	template <typename T = Il2CppString*> T GetTriggerNames() {
		return ((T (*)(AkUnityEventHandler*))(Il2CppBase() + 0x22B1E48))(this);
	}
	template <typename T = void> T DoDestroy() {
		return ((T (*)(AkUnityEventHandler*))(Il2CppBase() + 0x22B1D08))(this);
	}
	template <typename T = bool> static T ContainsTrigger(Il2CppList<uint32_t>* in_triggerList, Il2CppString* sTriggerType) {
		return ((T (*)(void *, Il2CppList<uint32_t>*, Il2CppString*))(Il2CppBase() + 0x22B2064))(0, in_triggerList, sTriggerType);
	}
	template <typename T = bool> static T ContainsTrigger_1(Il2CppList<int32_t>* in_triggerList, Il2CppString* sTriggerType) {
		return ((T (*)(void *, Il2CppList<int32_t>*, Il2CppString*))(Il2CppBase() + 0x22B2340))(0, in_triggerList, sTriggerType);
	}
	template <typename T = void> T AddTriggerComponents(Il2CppList<int32_t>* in_triggerList) {
		return ((T (*)(AkUnityEventHandler*, Il2CppList<int32_t>*))(Il2CppBase() + 0x22B261C))(this, in_triggerList);
	}
	template <typename T = void> T RegisterTriggers(Il2CppList<int32_t>* in_triggerList, uintptr_t pCachedTriggers, uintptr_t in_delegate) {
		return ((T (*)(AkUnityEventHandler*, Il2CppList<int32_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x22B28A8))(this, in_triggerList, pCachedTriggers, in_delegate);
	}
	template <typename T = void> T UnregisterTriggers(uintptr_t pTriggers, uintptr_t in_delegate, bool DestroyCompWhenNoDelegate) {
		return ((T (*)(AkUnityEventHandler*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x22B2F0C))(this, pTriggers, in_delegate, DestroyCompWhenNoDelegate);
	}

};

}
