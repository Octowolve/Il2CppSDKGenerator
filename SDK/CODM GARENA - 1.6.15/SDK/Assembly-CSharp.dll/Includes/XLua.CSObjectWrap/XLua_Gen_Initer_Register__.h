#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace XLua.CSObjectWrap {

class XLuaGenIniterRegister
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "XLua.CSObjectWrap", "XLua_Gen_Initer_Register__"));
	}

	template <typename T = void*> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__mg$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__mg$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> static T wrapInit0(uintptr_t luaenv, uintptr_t translator) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xC24224))(0, luaenv, translator);
	}
	template <typename T = void> static T Init(uintptr_t luaenv, uintptr_t translator) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xC244E0))(0, luaenv, translator);
	}

};

}
