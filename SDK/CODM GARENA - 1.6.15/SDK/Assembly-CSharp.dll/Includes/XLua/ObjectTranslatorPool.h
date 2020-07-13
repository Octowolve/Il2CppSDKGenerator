#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace XLua {

class ObjectTranslatorPool
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "XLua", "ObjectTranslatorPool"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& translators() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& lastPtr() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& lastTranslator() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0xC22064))(0);
	}
	template <typename T = void> T Add(uintptr_t L, uintptr_t translator) {
		return ((T (*)(ObjectTranslatorPool*, uintptr_t, uintptr_t))(Il2CppBase() + 0xF43C94))(this, L, translator);
	}
	template <typename T = uintptr_t> T Find(uintptr_t L) {
		return ((T (*)(ObjectTranslatorPool*, uintptr_t))(Il2CppBase() + 0xC2211C))(this, L);
	}
	template <typename T = void> T Remove(uintptr_t L) {
		return ((T (*)(ObjectTranslatorPool*, uintptr_t))(Il2CppBase() + 0xF45E3C))(this, L);
	}

};

}
