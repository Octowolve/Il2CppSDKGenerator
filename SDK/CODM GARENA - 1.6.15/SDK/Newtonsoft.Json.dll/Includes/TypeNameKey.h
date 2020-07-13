#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TypeNameKey
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "", "TypeNameKey"));
	}

	template <typename T = Il2CppString*> T& AssemblyName() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& TypeName() {
		return *(T*)((uintptr_t)this + 0x4);
	}

	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(TypeNameKey*))(Il2CppBase() + 0x3987F54))(this);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(TypeNameKey*, uintptr_t))(Il2CppBase() + 0x398811C))(this, obj);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(TypeNameKey*, uintptr_t))(Il2CppBase() + 0x3988124))(this, other);
	}

};

}
