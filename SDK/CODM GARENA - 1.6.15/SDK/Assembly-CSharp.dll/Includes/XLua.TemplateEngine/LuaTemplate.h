#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace XLua.TemplateEngine {

class LuaTemplate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "XLua.TemplateEngine", "LuaTemplate"));
	}

	template <typename T = uintptr_t> static T& templateCompileFunction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& templateExecuteFunction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& f__mg$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = Il2CppString*> static T ComposeCode(Il2CppList<uintptr_t>* chunks) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4DC6D94))(0, chunks);
	}
	template <typename T = uintptr_t> static T Compile(uintptr_t luaenv, Il2CppString* snippet) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4DC718C))(0, luaenv, snippet);
	}
	template <typename T = Il2CppString*> static T Execute(uintptr_t compiledTemplate, uintptr_t parameters) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DC7C6C))(0, compiledTemplate, parameters);
	}
	template <typename T = Il2CppString*> static T Execute_1(uintptr_t compiledTemplate) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DC7D70))(0, compiledTemplate);
	}
	template <typename T = int32_t> static T Compile_1(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DC6994))(0, L);
	}
	template <typename T = int32_t> static T Execute_2(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DC6C80))(0, L);
	}
	template <typename T = void> static T OpenLib(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DC7E60))(0, L);
	}

};

}
