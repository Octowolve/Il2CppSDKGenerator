#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace XLua {

class MethodWrapsCache
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "XLua", "MethodWrapsCache"));
	}

	template <typename T = uintptr_t> T& translator() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& objCheckers() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& objCasters() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& constructorCache() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppDictionary<Il2CppString*, uintptr_t>*>*> T& methodsCache() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& delegateCache() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uintptr_t> T GetConstructorWrap(uintptr_t type) {
		return ((T (*)(MethodWrapsCache*, uintptr_t))(Il2CppBase() + 0xF48B1C))(this, type);
	}
	template <typename T = uintptr_t> T GetMethodWrap(uintptr_t type, Il2CppString* methodName) {
		return ((T (*)(MethodWrapsCache*, uintptr_t, Il2CppString*))(Il2CppBase() + 0xF493AC))(this, type, methodName);
	}
	template <typename T = uintptr_t> T GetMethodWrapInCache(uintptr_t type, Il2CppString* methodName) {
		return ((T (*)(MethodWrapsCache*, uintptr_t, Il2CppString*))(Il2CppBase() + 0xF49650))(this, type, methodName);
	}
	template <typename T = uintptr_t> T GetDelegateWrap(uintptr_t type) {
		return ((T (*)(MethodWrapsCache*, uintptr_t))(Il2CppBase() + 0xF4980C))(this, type);
	}
	template <typename T = uintptr_t> T GetEventWrap(uintptr_t type, Il2CppString* eventName) {
		return ((T (*)(MethodWrapsCache*, uintptr_t, Il2CppString*))(Il2CppBase() + 0xF49AD0))(this, type, eventName);
	}
	template <typename T = uintptr_t> T _GenMethodWrap(uintptr_t type, Il2CppString* methodName, void* methodBases, bool forceCheck) {
		return ((T (*)(MethodWrapsCache*, uintptr_t, Il2CppString*, void*, bool))(Il2CppBase() + 0xF48F04))(this, type, methodName, methodBases, forceCheck);
	}
	template <typename T = bool> static T tryMakeGenericMethod(uintptr_t method) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF4AF04))(0, method);
	}

};

}
