#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace XLua.TemplateEngine {

class Parser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "XLua.TemplateEngine", "Parser"));
	}

	template <typename T = Il2CppString*> static T& RegexString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = void*> static T& f__am$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> static T& f__am$cache4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = Il2CppString*> static T get_RegexString() {
		return ((T (*)(void *))(Il2CppBase() + 0x4DC8970))(0);
	}
	template <typename T = void> static T set_RegexString(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4DC88B4))(0, value);
	}
	template <typename T = Il2CppString*> static T EscapeString(Il2CppString* input) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4DC8A20))(0, input);
	}
	template <typename T = Il2CppString*> static T GetRegexString() {
		return ((T (*)(void *))(Il2CppBase() + 0x4DC8228))(0);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T Parse(Il2CppString* snippet) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4DC72C4))(0, snippet);
	}
	template <typename T = void*> static T Parsem__0(uintptr_t p) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DC8D2C))(0, p);
	}
	template <typename T = void*> static T Parsem__1(uintptr_t p) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DC8E18))(0, p);
	}
	template <typename T = void*> static T Parsem__2(uintptr_t p) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DC8F48))(0, p);
	}
	template <typename T = int32_t> static T Parsem__3(void* p) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x4DC9034))(0, p);
	}
	template <typename T = uintptr_t> static T Parsem__4(void* m) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x4DC90CC))(0, m);
	}

};

}
