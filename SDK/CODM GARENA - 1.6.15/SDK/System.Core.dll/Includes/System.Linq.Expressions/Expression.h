#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Linq.Expressions {

class Expression
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "System.Linq.Expressions", "Expression"));
	}

	template <typename T = uintptr_t> T& node_type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_NodeType() {
		return ((T (*)(Expression*))(Il2CppBase() + 0x4EC3504))(this);
	}
	template <typename T = uintptr_t> T get_Type() {
		return ((T (*)(Expression*))(Il2CppBase() + 0x4EC350C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Expression*))(Il2CppBase() + 0x4EC3514))(this);
	}

};

}
