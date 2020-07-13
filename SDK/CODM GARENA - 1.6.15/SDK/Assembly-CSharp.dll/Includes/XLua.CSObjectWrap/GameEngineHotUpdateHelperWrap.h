#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace XLua.CSObjectWrap {

class GameEngineHotUpdateHelperWrap
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "XLua.CSObjectWrap", "GameEngineHotUpdateHelperWrap"));
	}

	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& f__mg$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& f__mg$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& f__mg$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& f__mg$cache4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> static T __Register(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xC21BBC))(0, L);
	}
	template <typename T = int32_t> static T __CreateInstance(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xC21208))(0, L);
	}
	template <typename T = int32_t> static T _m_ToUInt64_xlua_st_(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xC2130C))(0, L);
	}
	template <typename T = int32_t> static T _m_ToUInt32_xlua_st_(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xC21504))(0, L);
	}
	template <typename T = int32_t> static T _m_ToInt64_xlua_st_(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xC216F0))(0, L);
	}
	template <typename T = int32_t> static T _m_ConvertToArray_xlua_st_(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xC218E8))(0, L);
	}

};

}
