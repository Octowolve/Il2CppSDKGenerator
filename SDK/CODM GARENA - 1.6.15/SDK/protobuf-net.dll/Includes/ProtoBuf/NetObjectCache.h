#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoBuf {

class NetObjectCache
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("protobuf-net.dll", "ProtoBuf", "NetObjectCache"));
	}

	template <typename T = uintptr_t> T& underlyingList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& rootObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& trapStartIndex() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> T& stringKeys() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& objectKeys() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T get_List() {
		return ((T (*)(NetObjectCache*))(Il2CppBase() + 0x5069194))(this);
	}
	template <typename T = void> T SetKeyedObject(int32_t key, uintptr_t value) {
		return ((T (*)(NetObjectCache*, int32_t, uintptr_t))(Il2CppBase() + 0x5069230))(this, key, value);
	}
	template <typename T = void> T RegisterTrappedObject(uintptr_t value) {
		return ((T (*)(NetObjectCache*, uintptr_t))(Il2CppBase() + 0x5069424))(this, value);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(NetObjectCache*))(Il2CppBase() + 0x50694B8))(this);
	}

};

}
