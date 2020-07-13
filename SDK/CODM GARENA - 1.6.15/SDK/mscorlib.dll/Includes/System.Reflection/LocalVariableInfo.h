#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection {

class LocalVariableInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection", "LocalVariableInfo"));
	}

	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& is_pinned() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint16_t> T& position() {
		return *(T*)((uintptr_t)this + 0xE);
	}

	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(LocalVariableInfo*))(Il2CppBase() + 0x4FD0CF4))(this);
	}

};

}
