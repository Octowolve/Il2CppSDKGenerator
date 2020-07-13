#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Linq.Expressions {

class ElementInit
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "System.Linq.Expressions", "ElementInit"));
	}

	template <typename T = uintptr_t> T& add_method() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& arguments() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_AddMethod() {
		return ((T (*)(ElementInit*))(Il2CppBase() + 0x4EC3424))(this);
	}
	template <typename T = void*> T get_Arguments() {
		return ((T (*)(ElementInit*))(Il2CppBase() + 0x4EC342C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ElementInit*))(Il2CppBase() + 0x4EC3434))(this);
	}

};

}
