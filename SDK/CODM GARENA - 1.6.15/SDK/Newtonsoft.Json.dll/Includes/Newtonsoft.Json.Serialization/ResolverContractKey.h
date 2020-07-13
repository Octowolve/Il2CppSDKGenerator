#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Serialization {

class ResolverContractKey
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Serialization", "ResolverContractKey"));
	}

	template <typename T = uintptr_t> T& _resolverType() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _contractType() {
		return *(T*)((uintptr_t)this + 0x4);
	}

	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ResolverContractKey*))(Il2CppBase() + 0x39A5CD8))(this);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(ResolverContractKey*, uintptr_t))(Il2CppBase() + 0x39A5DA8))(this, obj);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ResolverContractKey*, uintptr_t))(Il2CppBase() + 0x39A5DB0))(this, other);
	}

};

}
