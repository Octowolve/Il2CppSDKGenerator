#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class DataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "DataStore"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& SubscriberNotifies() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UserLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeDataStore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterSubscriber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterSubscriber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshSubscribers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_RefreshSubscribers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(DataStore*))(Il2CppBase() + 0x41AE280))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(DataStore*))(Il2CppBase() + 0x41AE318))(this);
	}
	template <typename T = void> T ReLogin() {
		return ((T (*)(DataStore*))(Il2CppBase() + 0x41AE3B0))(this);
	}
	template <typename T = void> T UserLogin(uint64_t playerId) {
		return ((T (*)(DataStore*, uint64_t))(Il2CppBase() + 0x41AE448))(this, playerId);
	}
	template <typename T = void> T InitializeDataStore() {
		return ((T (*)(DataStore*))(Il2CppBase() + 0x41AE4FC))(this);
	}
	template <typename T = void> T RegisterSubscriber(uintptr_t Subscriber) {
		return ((T (*)(DataStore*, uintptr_t))(Il2CppBase() + 0x41AE594))(this, Subscriber);
	}
	template <typename T = void> T UnRegisterSubscriber(uintptr_t Subscriber) {
		return ((T (*)(DataStore*, uintptr_t))(Il2CppBase() + 0x41AE6AC))(this, Subscriber);
	}
	template <typename T = void> T RefreshSubscribers(Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(DataStore*, Il2CppString*, int32_t))(Il2CppBase() + 0x41AE78C))(this, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T RefreshSubscribers_1() {
		return ((T (*)(DataStore*))(Il2CppBase() + 0x41AE968))(this);
	}

};

}
