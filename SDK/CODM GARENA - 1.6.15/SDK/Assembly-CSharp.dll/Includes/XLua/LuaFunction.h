#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace XLua {

class LuaFunction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "XLua", "LuaFunction"));
	}


	template <typename T = void> T Action(uintptr_t a) {
		return ((T (*)(LuaFunction*, uintptr_t))(Il2CppBase() + 0x28414D8))(this, a);
	}
	template <typename T = uintptr_t> T Func(uintptr_t a) {
		return ((T (*)(LuaFunction*, uintptr_t))(Il2CppBase() + 0x4E4CAC8))(this, a);
	}
	template <typename T = void> T Action_1(uintptr_t a1, uintptr_t a2) {
		return ((T (*)(LuaFunction*, uintptr_t, uintptr_t))(Il2CppBase() + 0x28412DC))(this, a1, a2);
	}
	template <typename T = uintptr_t> T Func_1(uintptr_t a1, uintptr_t a2) {
		return ((T (*)(LuaFunction*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E4C710))(this, a1, a2);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T Call(Il2CppArray<uintptr_t>* args, Il2CppArray<uintptr_t>* returnTypes) {
		return ((T (*)(LuaFunction*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xF46920))(this, args, returnTypes);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T Call_1(Il2CppArray<uintptr_t>* args) {
		return ((T (*)(LuaFunction*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xF46DA0))(this, args);
	}
	template <typename T = uintptr_t> T Cast() {
		return ((T (*)(LuaFunction*))(Il2CppBase() + 0x4E410B4))(this);
	}
	template <typename T = void> T SetEnv(uintptr_t env) {
		return ((T (*)(LuaFunction*, uintptr_t))(Il2CppBase() + 0xF46DA8))(this, env);
	}
	template <typename T = void> T push(uintptr_t L) {
		return ((T (*)(LuaFunction*, uintptr_t))(Il2CppBase() + 0xF46EC4))(this, L);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(LuaFunction*))(Il2CppBase() + 0xF46EFC))(this);
	}

};

}
