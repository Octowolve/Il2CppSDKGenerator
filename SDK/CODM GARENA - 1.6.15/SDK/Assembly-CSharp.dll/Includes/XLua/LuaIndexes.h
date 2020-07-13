#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace XLua {

class LuaIndexes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "XLua", "LuaIndexes"));
	}


	template <typename T = int32_t> static T get_LUA_REGISTRYINDEX() {
		return ((T (*)(void *))(Il2CppBase() + 0xF3E0F8))(0);
	}
	template <typename T = void> static T set_LUA_REGISTRYINDEX(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0xF4281C))(0, value);
	}

};

}
