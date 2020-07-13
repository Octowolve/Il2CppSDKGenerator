#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Object
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Object"));
	}

	template <typename T = uintptr_t> T& m_CachedPtr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> static T& OffsetOfInstanceIDInCPlusPlusObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T Internal_CloneSingle(uintptr_t data) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4ABD500))(0, data);
	}
	template <typename T = uintptr_t> static T Internal_CloneSingleWithParent(uintptr_t data, uintptr_t parent, bool worldPositionStays) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x4ABD598))(0, data, parent, worldPositionStays);
	}
	template <typename T = uintptr_t> static T Internal_InstantiateSingle(uintptr_t data, Il2CppVector3 pos, Il2CppQuaternion rot) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, Il2CppQuaternion))(Il2CppBase() + 0x4ABD640))(0, data, pos, rot);
	}
	template <typename T = uintptr_t> static T INTERNAL_CALL_Internal_InstantiateSingle(uintptr_t data, uintptr_t pos, uintptr_t rot) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4ABD710))(0, data, pos, rot);
	}
	template <typename T = uintptr_t> static T Internal_InstantiateSingleWithParent(uintptr_t data, uintptr_t parent, Il2CppVector3 pos, Il2CppQuaternion rot) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppVector3, Il2CppQuaternion))(Il2CppBase() + 0x4ABD7B8))(0, data, parent, pos, rot);
	}
	template <typename T = uintptr_t> static T INTERNAL_CALL_Internal_InstantiateSingleWithParent(uintptr_t data, uintptr_t parent, uintptr_t pos, uintptr_t rot) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4ABD8A0))(0, data, parent, pos, rot);
	}
	template <typename T = int32_t> static T GetOffsetOfInstanceIDInCPlusPlusObject() {
		return ((T (*)(void *))(Il2CppBase() + 0x4ABD950))(0);
	}
	template <typename T = void> T EnsureRunningOnMainThread() {
		return ((T (*)(Object*))(Il2CppBase() + 0x4ABD9E0))(this);
	}
	template <typename T = void> static T Destroy(uintptr_t obj, float t) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x4ABDA78))(0, obj, t);
	}
	template <typename T = void> static T Destroy_1(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4ABDB18))(0, obj);
	}
	template <typename T = void> static T DestroyImmediate(uintptr_t obj, bool allowDestroyingAssets) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x4ABDBBC))(0, obj, allowDestroyingAssets);
	}
	template <typename T = void> static T DestroyImmediate_1(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4ABDC5C))(0, obj);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T FindObjectsOfType(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4ABDD00))(0, type);
	}
	template <typename T = Il2CppString*> T get_name() {
		return ((T (*)(Object*))(Il2CppBase() + 0x4ABDD98))(this);
	}
	template <typename T = void> T set_name(Il2CppString* value) {
		return ((T (*)(Object*, Il2CppString*))(Il2CppBase() + 0x4ABDE30))(this, value);
	}
	template <typename T = void> static T DontDestroyOnLoad(uintptr_t target) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4ABDED0))(0, target);
	}
	template <typename T = uintptr_t> T get_hideFlags() {
		return ((T (*)(Object*))(Il2CppBase() + 0x4ABDF68))(this);
	}
	template <typename T = void> T set_hideFlags(uintptr_t value) {
		return ((T (*)(Object*, uintptr_t))(Il2CppBase() + 0x4ABA8DC))(this, value);
	}
	template <typename T = void> static T DestroyObject(uintptr_t obj, float t) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x4ABE000))(0, obj, t);
	}
	template <typename T = void> static T DestroyObject_1(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4ABE0A0))(0, obj);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T FindSceneObjectsOfType(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4ABE144))(0, type);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T FindObjectsOfTypeIncludingAssets(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4ABE1DC))(0, type);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Object*))(Il2CppBase() + 0x4ABE274))(this);
	}
	template <typename T = uintptr_t> static T InstanceIDToObject(int32_t instanceID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4ABE30C))(0, instanceID);
	}
	template <typename T = bool> static T DoesObjectWithInstanceIDExist(int32_t instanceID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4ABE3A4))(0, instanceID);
	}
	template <typename T = Il2CppString*> T get_nameWithCache() {
		return ((T (*)(Object*))(Il2CppBase() + 0x4ABE43C))(this);
	}
	template <typename T = void> T set_nameWithCache(Il2CppString* value) {
		return ((T (*)(Object*, Il2CppString*))(Il2CppBase() + 0x4ABE4D4))(this, value);
	}
	template <typename T = int32_t> T GetInstanceID() {
		return ((T (*)(Object*))(Il2CppBase() + 0x4ABE574))(this);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Object*))(Il2CppBase() + 0x4ABE74C))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(Object*, uintptr_t))(Il2CppBase() + 0x4ABE754))(this, other);
	}
	template <typename T = bool> static T op_Implicit(uintptr_t exists) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4ABE9D0))(0, exists);
	}
	template <typename T = bool> static T CompareBaseObjects(uintptr_t lhs, uintptr_t rhs) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4ABE8B8))(0, lhs, rhs);
	}
	template <typename T = bool> static T IsNativeObjectAlive(uintptr_t o) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4ABEA78))(0, o);
	}
	template <typename T = uintptr_t> T GetCachedPtr() {
		return ((T (*)(Object*))(Il2CppBase() + 0x4ABEB20))(this);
	}
	template <typename T = uintptr_t> static T Instantiate(uintptr_t original, Il2CppVector3 position, Il2CppQuaternion rotation) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, Il2CppQuaternion))(Il2CppBase() + 0x4ABEB28))(0, original, position, rotation);
	}
	template <typename T = uintptr_t> static T Instantiate_1(uintptr_t original, Il2CppVector3 position, Il2CppQuaternion rotation, uintptr_t parent) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, Il2CppQuaternion, uintptr_t))(Il2CppBase() + 0x4ABED8C))(0, original, position, rotation, parent);
	}
	template <typename T = uintptr_t> static T Instantiate_2(uintptr_t original) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4ABEF38))(0, original);
	}
	template <typename T = uintptr_t> static T Instantiate_3(uintptr_t original, uintptr_t parent) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4ABEFFC))(0, original, parent);
	}
	template <typename T = uintptr_t> static T Instantiate_4(uintptr_t original, uintptr_t parent, bool instantiateInWorldSpace) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x4ABF0B0))(0, original, parent, instantiateInWorldSpace);
	}
	template <typename T = uintptr_t> static T Instantiate_5(uintptr_t original) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3394EF8))(0, original);
	}
	template <typename T = uintptr_t> static T Instantiate_6(uintptr_t original, Il2CppVector3 position, Il2CppQuaternion rotation) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, Il2CppQuaternion))(Il2CppBase() + 0x33951A4))(0, original, position, rotation);
	}
	template <typename T = uintptr_t> static T Instantiate_7(uintptr_t original, Il2CppVector3 position, Il2CppQuaternion rotation, uintptr_t parent) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, Il2CppQuaternion, uintptr_t))(Il2CppBase() + 0x33952B8))(0, original, position, rotation, parent);
	}
	template <typename T = uintptr_t> static T Instantiate_8(uintptr_t original, uintptr_t parent) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3394FF0))(0, original, parent);
	}
	template <typename T = uintptr_t> static T Instantiate_9(uintptr_t original, uintptr_t parent, bool worldPositionStays) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x33950BC))(0, original, parent, worldPositionStays);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T FindObjectsOfType_1() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E43E5C))(0);
	}
	template <typename T = uintptr_t> static T FindObjectOfType() {
		return ((T (*)(void *))(Il2CppBase() + 0x3394DE0))(0);
	}
	template <typename T = void> static T CheckNullArgument(uintptr_t arg, Il2CppString* message) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4ABECE4))(0, arg, message);
	}
	template <typename T = uintptr_t> static T FindObjectOfType_1(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4ABF208))(0, type);
	}
	template <typename T = bool> static T op_Equality(uintptr_t x, uintptr_t y) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4AB0A9C))(0, x, y);
	}
	template <typename T = bool> static T op_Inequality(uintptr_t x, uintptr_t y) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4ABF2D0))(0, x, y);
	}

};

}
