#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Linq.Expressions {

class BinaryExpression
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "System.Linq.Expressions", "BinaryExpression"));
	}

	template <typename T = uintptr_t> T& left() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& right() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& conversion() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T get_Left() {
		return ((T (*)(BinaryExpression*))(Il2CppBase() + 0x4EC33EC))(this);
	}
	template <typename T = uintptr_t> T get_Right() {
		return ((T (*)(BinaryExpression*))(Il2CppBase() + 0x4EC33F4))(this);
	}
	template <typename T = uintptr_t> T get_Conversion() {
		return ((T (*)(BinaryExpression*))(Il2CppBase() + 0x4EC33FC))(this);
	}

};

}
