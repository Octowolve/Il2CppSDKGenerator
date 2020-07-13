#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection.Emit {

class UnmanagedMarshal
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection.Emit", "UnmanagedMarshal"));
	}

	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& t() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& tbase() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& guid() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& mcookie() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& marshaltype() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& marshaltyperef() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& param_num() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& has_size() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = uintptr_t> T ToMarshalAsAttribute() {
		return ((T (*)(UnmanagedMarshal*))(Il2CppBase() + 0x457E1C4))(this);
	}

};

}
