#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class LuaTool
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "LuaTool"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_IsNull() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToArray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSimpleType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTransformPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTransformLocalPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTransformLocalRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTransformLocalEularAngel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SafeSetActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StringContains() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMethod() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BitOp_LeftShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BitOp_RightShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = bool> static T IsNull(uintptr_t o) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4A99998))(0, o);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T ToArray(uintptr_t table) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E428B8))(0, table);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T ToList(uintptr_t table) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x21D2BA8))(0, table);
	}
	template <typename T = bool> static T IsSimpleType(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4A99A80))(0, type);
	}
	template <typename T = void> static T SetTransformPosition(uintptr_t transform, Il2CppVector3 position) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x4A99B58))(0, transform, position);
	}
	template <typename T = void> static T SetTransformLocalPosition(uintptr_t transform, float x, float y, float z) {
		return ((T (*)(void *, uintptr_t, float, float, float))(Il2CppBase() + 0x4A99C48))(0, transform, x, y, z);
	}
	template <typename T = void> static T SetTransformLocalRotation(uintptr_t transform, float x, float y, float z, float w) {
		return ((T (*)(void *, uintptr_t, float, float, float, float))(Il2CppBase() + 0x4A99D5C))(0, transform, x, y, z, w);
	}
	template <typename T = void> static T SetTransformLocalEularAngel(uintptr_t transform, float x, float y, float z) {
		return ((T (*)(void *, uintptr_t, float, float, float))(Il2CppBase() + 0x4A99E7C))(0, transform, x, y, z);
	}
	template <typename T = void> static T SafeSetActive(uintptr_t obj, bool enable) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x4A99F90))(0, obj, enable);
	}
	template <typename T = bool> static T StringContains(Il2CppString* s, Il2CppString* p) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4A9A0AC))(0, s, p);
	}
	template <typename T = uintptr_t> static T GetMethod(uintptr_t t, Il2CppString* methodName, Il2CppArray<uintptr_t>* argumentList) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4A9A174))(0, t, methodName, argumentList);
	}
	template <typename T = int32_t> static T BitOp_LeftShift(int32_t v, int32_t digits) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x4A9A258))(0, v, digits);
	}
	template <typename T = int32_t> static T BitOp_RightShift(int32_t v, int32_t digits) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x4A9A304))(0, v, digits);
	}

};

}
