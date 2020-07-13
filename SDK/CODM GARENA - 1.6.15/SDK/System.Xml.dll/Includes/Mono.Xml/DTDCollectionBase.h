#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml {

class DTDCollectionBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml", "DTDCollectionBase"));
	}

	template <typename T = uintptr_t> T& root() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uintptr_t> T get_Root() {
		return ((T (*)(DTDCollectionBase*))(Il2CppBase() + 0x4E105D8))(this);
	}
	template <typename T = void> T BaseAdd(Il2CppString* name, uintptr_t value) {
		return ((T (*)(DTDCollectionBase*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4E105E0))(this, name, value);
	}
	template <typename T = bool> T Contains(Il2CppString* key) {
		return ((T (*)(DTDCollectionBase*, Il2CppString*))(Il2CppBase() + 0x4E116DC))(this, key);
	}
	template <typename T = uintptr_t> T BaseGet(Il2CppString* name) {
		return ((T (*)(DTDCollectionBase*, Il2CppString*))(Il2CppBase() + 0x4E0FF4C))(this, name);
	}

};

}
