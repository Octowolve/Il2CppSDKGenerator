#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace XLua {

class ObjectCheckers
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "XLua", "ObjectCheckers"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& checkersMap() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& translator() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> static T objectCheck(uintptr_t L, int32_t idx) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0xF526B8))(0, L, idx);
	}
	template <typename T = bool> T luaTableCheck(uintptr_t L, int32_t idx) {
		return ((T (*)(ObjectCheckers*, uintptr_t, int32_t))(Il2CppBase() + 0xF526C0))(this, L, idx);
	}
	template <typename T = bool> T numberCheck(uintptr_t L, int32_t idx) {
		return ((T (*)(ObjectCheckers*, uintptr_t, int32_t))(Il2CppBase() + 0xF52800))(this, L, idx);
	}
	template <typename T = bool> T decimalCheck(uintptr_t L, int32_t idx) {
		return ((T (*)(ObjectCheckers*, uintptr_t, int32_t))(Il2CppBase() + 0xF52820))(this, L, idx);
	}
	template <typename T = bool> T strCheck(uintptr_t L, int32_t idx) {
		return ((T (*)(ObjectCheckers*, uintptr_t, int32_t))(Il2CppBase() + 0xF528CC))(this, L, idx);
	}
	template <typename T = bool> T bytesCheck(uintptr_t L, int32_t idx) {
		return ((T (*)(ObjectCheckers*, uintptr_t, int32_t))(Il2CppBase() + 0xF52910))(this, L, idx);
	}
	template <typename T = bool> T boolCheck(uintptr_t L, int32_t idx) {
		return ((T (*)(ObjectCheckers*, uintptr_t, int32_t))(Il2CppBase() + 0xF52A2C))(this, L, idx);
	}
	template <typename T = bool> T int64Check(uintptr_t L, int32_t idx) {
		return ((T (*)(ObjectCheckers*, uintptr_t, int32_t))(Il2CppBase() + 0xF52A44))(this, L, idx);
	}
	template <typename T = bool> T uint64Check(uintptr_t L, int32_t idx) {
		return ((T (*)(ObjectCheckers*, uintptr_t, int32_t))(Il2CppBase() + 0xF52A78))(this, L, idx);
	}
	template <typename T = bool> T luaFunctionCheck(uintptr_t L, int32_t idx) {
		return ((T (*)(ObjectCheckers*, uintptr_t, int32_t))(Il2CppBase() + 0xF52AAC))(this, L, idx);
	}
	template <typename T = bool> T intptrCheck(uintptr_t L, int32_t idx) {
		return ((T (*)(ObjectCheckers*, uintptr_t, int32_t))(Il2CppBase() + 0xF52BEC))(this, L, idx);
	}
	template <typename T = uintptr_t> T genChecker(uintptr_t type) {
		return ((T (*)(ObjectCheckers*, uintptr_t))(Il2CppBase() + 0xF52C0C))(this, type);
	}
	template <typename T = uintptr_t> T genNullableChecker(uintptr_t oc) {
		return ((T (*)(ObjectCheckers*, uintptr_t))(Il2CppBase() + 0xF52F44))(this, oc);
	}
	template <typename T = uintptr_t> T GetChecker(uintptr_t type) {
		return ((T (*)(ObjectCheckers*, uintptr_t))(Il2CppBase() + 0xF53030))(this, type);
	}

};

}
