#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.InteropServices {

class DllImportAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.InteropServices", "DllImportAttribute"));
	}

	template <typename T = uintptr_t> T& CallingConvention() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& CharSet() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& Dll() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& EntryPoint() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& ExactSpelling() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& PreserveSig() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = bool> T& SetLastError() {
		return *(T*)((uintptr_t)this + 0x1A);
	}
	template <typename T = bool> T& BestFitMapping() {
		return *(T*)((uintptr_t)this + 0x1B);
	}
	template <typename T = bool> T& ThrowOnUnmappableChar() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = Il2CppString*> T get_Value() {
		return ((T (*)(DllImportAttribute*))(Il2CppBase() + 0x4FDFC54))(this);
	}

};

}
