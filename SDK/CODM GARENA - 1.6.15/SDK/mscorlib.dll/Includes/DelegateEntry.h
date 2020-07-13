#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DelegateEntry
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "DelegateEntry"));
	}

	template <typename T = Il2CppString*> T& type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& assembly() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& targetTypeAssembly() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& targetTypeName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& methodName() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& delegateEntry() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uintptr_t> T DeserializeDelegate(uintptr_t info) {
		return ((T (*)(DelegateEntry*, uintptr_t))(Il2CppBase() + 0x366E5A0))(this, info);
	}

};

}
