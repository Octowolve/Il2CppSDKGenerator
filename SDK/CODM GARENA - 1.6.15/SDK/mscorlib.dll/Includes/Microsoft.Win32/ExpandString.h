#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Microsoft.Win32 {

class ExpandString
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "Microsoft.Win32", "ExpandString"));
	}

	template <typename T = Il2CppString*> T& value() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ExpandString*))(Il2CppBase() + 0x3F7E198))(this);
	}
	template <typename T = Il2CppString*> T Expand() {
		return ((T (*)(ExpandString*))(Il2CppBase() + 0x3F7E1A0))(this);
	}

};

}
