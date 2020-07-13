#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class NetworkPlayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "NetworkPlayer"));
	}

	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(NetworkPlayer*))(Il2CppBase() + 0x4ABD158))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(NetworkPlayer*, uintptr_t))(Il2CppBase() + 0x4ABD218))(this, other);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(NetworkPlayer*))(Il2CppBase() + 0x4ABD220))(this);
	}

};

}
