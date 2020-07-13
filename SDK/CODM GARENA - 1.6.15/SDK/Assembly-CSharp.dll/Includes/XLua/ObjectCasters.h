#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace XLua {

class ObjectCasters
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "XLua", "ObjectCasters"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& castersMap() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& translator() {
		return *(T*)((uintptr_t)this + 0xC);
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
	template <typename T = uintptr_t> static T& f__mg$cache5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& f__mg$cache6() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& f__mg$cache7() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& f__mg$cache9() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = uintptr_t> static T charCaster(uintptr_t L, int32_t idx, uintptr_t target) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0xF4D794))(0, L, idx, target);
	}
	template <typename T = uintptr_t> static T sbyteCaster(uintptr_t L, int32_t idx, uintptr_t target) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0xF4D834))(0, L, idx, target);
	}
	template <typename T = uintptr_t> static T byteCaster(uintptr_t L, int32_t idx, uintptr_t target) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0xF4D8D4))(0, L, idx, target);
	}
	template <typename T = uintptr_t> static T shortCaster(uintptr_t L, int32_t idx, uintptr_t target) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0xF4D974))(0, L, idx, target);
	}
	template <typename T = uintptr_t> static T ushortCaster(uintptr_t L, int32_t idx, uintptr_t target) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0xF4DA14))(0, L, idx, target);
	}
	template <typename T = uintptr_t> static T intCaster(uintptr_t L, int32_t idx, uintptr_t target) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0xF4DAB4))(0, L, idx, target);
	}
	template <typename T = uintptr_t> static T uintCaster(uintptr_t L, int32_t idx, uintptr_t target) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0xF4DB54))(0, L, idx, target);
	}
	template <typename T = uintptr_t> static T longCaster(uintptr_t L, int32_t idx, uintptr_t target) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0xF4DBF4))(0, L, idx, target);
	}
	template <typename T = uintptr_t> static T ulongCaster(uintptr_t L, int32_t idx, uintptr_t target) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0xF4DC94))(0, L, idx, target);
	}
	template <typename T = uintptr_t> static T getDouble(uintptr_t L, int32_t idx, uintptr_t target) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0xF4DD34))(0, L, idx, target);
	}
	template <typename T = uintptr_t> static T floatCaster(uintptr_t L, int32_t idx, uintptr_t target) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0xF4DDD4))(0, L, idx, target);
	}
	template <typename T = uintptr_t> T decimalCaster(uintptr_t L, int32_t idx, uintptr_t target) {
		return ((T (*)(ObjectCasters*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0xF4DE7C))(this, L, idx, target);
	}
	template <typename T = uintptr_t> static T getBoolean(uintptr_t L, int32_t idx, uintptr_t target) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0xF4DF4C))(0, L, idx, target);
	}
	template <typename T = uintptr_t> static T getString(uintptr_t L, int32_t idx, uintptr_t target) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0xF4DFEC))(0, L, idx, target);
	}
	template <typename T = uintptr_t> T getBytes(uintptr_t L, int32_t idx, uintptr_t target) {
		return ((T (*)(ObjectCasters*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0xF4DFF0))(this, L, idx, target);
	}
	template <typename T = uintptr_t> T getIntptr(uintptr_t L, int32_t idx, uintptr_t target) {
		return ((T (*)(ObjectCasters*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0xF4E118))(this, L, idx, target);
	}
	template <typename T = uintptr_t> T getObject(uintptr_t L, int32_t idx, uintptr_t target) {
		return ((T (*)(ObjectCasters*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0xF4E1B8))(this, L, idx, target);
	}
	template <typename T = uintptr_t> T getLuaTable(uintptr_t L, int32_t idx, uintptr_t target) {
		return ((T (*)(ObjectCasters*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0xF4E560))(this, L, idx, target);
	}
	template <typename T = uintptr_t> T getLuaFunction(uintptr_t L, int32_t idx, uintptr_t target) {
		return ((T (*)(ObjectCasters*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0xF4E6F0))(this, L, idx, target);
	}
	template <typename T = void> T AddCaster(uintptr_t type, uintptr_t oc) {
		return ((T (*)(ObjectCasters*, uintptr_t, uintptr_t))(Il2CppBase() + 0xF4E880))(this, type, oc);
	}
	template <typename T = uintptr_t> T genCaster(uintptr_t type) {
		return ((T (*)(ObjectCasters*, uintptr_t))(Il2CppBase() + 0xF4E928))(this, type);
	}
	template <typename T = uintptr_t> T genNullableCaster(uintptr_t oc) {
		return ((T (*)(ObjectCasters*, uintptr_t))(Il2CppBase() + 0xF4F140))(this, oc);
	}
	template <typename T = uintptr_t> T GetCaster(uintptr_t type) {
		return ((T (*)(ObjectCasters*, uintptr_t))(Il2CppBase() + 0xF4EFCC))(this, type);
	}

};

}
