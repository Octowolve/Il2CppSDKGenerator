#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace XLua {

class LuaCallCSharpAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "XLua", "LuaCallCSharpAttribute"));
	}

	template <typename T = uintptr_t> T& flag() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T get_Flag() {
		return ((T (*)(LuaCallCSharpAttribute*))(Il2CppBase() + 0xF3C840))(this);
	}

};

}
