#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkBank
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkBank"));
	}

	template <typename T = Il2CppString*> T& bankName() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& decodeBank() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& loadAsynchronous() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = bool> T& saveDecodedBank() {
		return *(T*)((uintptr_t)this + 0x22);
	}
	template <typename T = Il2CppList<int32_t>*> T& unloadTriggerList() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& cachedUnLoadTriggerList() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(AkBank*))(Il2CppBase() + 0x4A29C6C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(AkBank*))(Il2CppBase() + 0x4A29E44))(this);
	}
	template <typename T = void> T HandleEvent(uintptr_t in_gameObject) {
		return ((T (*)(AkBank*, uintptr_t))(Il2CppBase() + 0x4A29F00))(this, in_gameObject);
	}
	template <typename T = void> T UnloadBank(uintptr_t in_gameObject) {
		return ((T (*)(AkBank*, uintptr_t))(Il2CppBase() + 0x4A29DA0))(this, in_gameObject);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(AkBank*))(Il2CppBase() + 0x4A2A020))(this);
	}

};

}
