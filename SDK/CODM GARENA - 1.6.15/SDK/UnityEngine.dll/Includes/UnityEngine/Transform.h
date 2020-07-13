#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Transform
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Transform"));
	}


	template <typename T = Il2CppVector3> T get_position() {
		return ((T (*)(Transform*))(Il2CppBase() + 0x4D36C64))(this);
	}
	template <typename T = void> T set_position(Il2CppVector3 value) {
		return ((T (*)(Transform*, Il2CppVector3))(Il2CppBase() + 0x4D36D4C))(this, value);
	}
	template <typename T = void> T INTERNAL_get_position(uintptr_t* value) {
		return ((T (*)(Transform*, uintptr_t*))(Il2CppBase() + 0x4D36CAC))(this, value);
	}
	template <typename T = void> T INTERNAL_set_position(uintptr_t value) {
		return ((T (*)(Transform*, uintptr_t))(Il2CppBase() + 0x4D36D6C))(this, value);
	}
	template <typename T = Il2CppVector3> T get_localPosition() {
		return ((T (*)(Transform*))(Il2CppBase() + 0x4D36E0C))(this);
	}
	template <typename T = void> T set_localPosition(Il2CppVector3 value) {
		return ((T (*)(Transform*, Il2CppVector3))(Il2CppBase() + 0x4D36EF4))(this, value);
	}
	template <typename T = void> T INTERNAL_get_localPosition(uintptr_t* value) {
		return ((T (*)(Transform*, uintptr_t*))(Il2CppBase() + 0x4D36E54))(this, value);
	}
	template <typename T = void> T INTERNAL_set_localPosition(uintptr_t value) {
		return ((T (*)(Transform*, uintptr_t))(Il2CppBase() + 0x4D36F14))(this, value);
	}
	template <typename T = Il2CppVector3> T get_eulerAngles() {
		return ((T (*)(Transform*))(Il2CppBase() + 0x4D36FB4))(this);
	}
	template <typename T = void> T set_eulerAngles(Il2CppVector3 value) {
		return ((T (*)(Transform*, Il2CppVector3))(Il2CppBase() + 0x4D3704C))(this, value);
	}
	template <typename T = Il2CppVector3> T get_localEulerAngles() {
		return ((T (*)(Transform*))(Il2CppBase() + 0x4D370C8))(this);
	}
	template <typename T = void> T set_localEulerAngles(Il2CppVector3 value) {
		return ((T (*)(Transform*, Il2CppVector3))(Il2CppBase() + 0x4D37160))(this, value);
	}
	template <typename T = Il2CppVector3> T get_right() {
		return ((T (*)(Transform*))(Il2CppBase() + 0x4D371DC))(this);
	}
	template <typename T = void> T set_right(Il2CppVector3 value) {
		return ((T (*)(Transform*, Il2CppVector3))(Il2CppBase() + 0x4D37264))(this, value);
	}
	template <typename T = Il2CppVector3> T get_up() {
		return ((T (*)(Transform*))(Il2CppBase() + 0x4D372B8))(this);
	}
	template <typename T = void> T set_up(Il2CppVector3 value) {
		return ((T (*)(Transform*, Il2CppVector3))(Il2CppBase() + 0x4D3733C))(this, value);
	}
	template <typename T = Il2CppVector3> T get_forward() {
		return ((T (*)(Transform*))(Il2CppBase() + 0x4D37390))(this);
	}
	template <typename T = void> T set_forward(Il2CppVector3 value) {
		return ((T (*)(Transform*, Il2CppVector3))(Il2CppBase() + 0x4D37418))(this, value);
	}
	template <typename T = Il2CppQuaternion> T get_rotation() {
		return ((T (*)(Transform*))(Il2CppBase() + 0x4D37014))(this);
	}
	template <typename T = void> T set_rotation(Il2CppQuaternion value) {
		return ((T (*)(Transform*, Il2CppQuaternion))(Il2CppBase() + 0x4D370A4))(this, value);
	}
	template <typename T = void> T INTERNAL_get_rotation(uintptr_t* value) {
		return ((T (*)(Transform*, uintptr_t*))(Il2CppBase() + 0x4D37470))(this, value);
	}
	template <typename T = void> T INTERNAL_set_rotation(uintptr_t value) {
		return ((T (*)(Transform*, uintptr_t))(Il2CppBase() + 0x4D37510))(this, value);
	}
	template <typename T = Il2CppQuaternion> T get_localRotation() {
		return ((T (*)(Transform*))(Il2CppBase() + 0x4D37128))(this);
	}
	template <typename T = void> T set_localRotation(Il2CppQuaternion value) {
		return ((T (*)(Transform*, Il2CppQuaternion))(Il2CppBase() + 0x4D371B8))(this, value);
	}
	template <typename T = void> T INTERNAL_get_localRotation(uintptr_t* value) {
		return ((T (*)(Transform*, uintptr_t*))(Il2CppBase() + 0x4D375B0))(this, value);
	}
	template <typename T = void> T INTERNAL_set_localRotation(uintptr_t value) {
		return ((T (*)(Transform*, uintptr_t))(Il2CppBase() + 0x4D37650))(this, value);
	}
	template <typename T = Il2CppVector3> T get_localScale() {
		return ((T (*)(Transform*))(Il2CppBase() + 0x4D376F0))(this);
	}
	template <typename T = void> T set_localScale(Il2CppVector3 value) {
		return ((T (*)(Transform*, Il2CppVector3))(Il2CppBase() + 0x4D377D8))(this, value);
	}
	template <typename T = void> T INTERNAL_get_localScale(uintptr_t* value) {
		return ((T (*)(Transform*, uintptr_t*))(Il2CppBase() + 0x4D37738))(this, value);
	}
	template <typename T = void> T INTERNAL_set_localScale(uintptr_t value) {
		return ((T (*)(Transform*, uintptr_t))(Il2CppBase() + 0x4D377F8))(this, value);
	}
	template <typename T = uintptr_t> T get_parent() {
		return ((T (*)(Transform*))(Il2CppBase() + 0x4D37898))(this);
	}
	template <typename T = void> T set_parent(uintptr_t value) {
		return ((T (*)(Transform*, uintptr_t))(Il2CppBase() + 0x4D37934))(this, value);
	}
	template <typename T = uintptr_t> T get_parentInternal() {
		return ((T (*)(Transform*))(Il2CppBase() + 0x4D3789C))(this);
	}
	template <typename T = void> T set_parentInternal(uintptr_t value) {
		return ((T (*)(Transform*, uintptr_t))(Il2CppBase() + 0x4D37A38))(this, value);
	}
	template <typename T = void> T SetParent(uintptr_t parent) {
		return ((T (*)(Transform*, uintptr_t))(Il2CppBase() + 0x4D37AD8))(this, parent);
	}
	template <typename T = void> T SetParent_1(uintptr_t parent, bool worldPositionStays) {
		return ((T (*)(Transform*, uintptr_t, bool))(Il2CppBase() + 0x4D37AE0))(this, parent, worldPositionStays);
	}
	template <typename T = uintptr_t> T get_worldToLocalMatrix() {
		return ((T (*)(Transform*))(Il2CppBase() + 0x4D37B88))(this);
	}
	template <typename T = void> T INTERNAL_get_worldToLocalMatrix(uintptr_t* value) {
		return ((T (*)(Transform*, uintptr_t*))(Il2CppBase() + 0x4D37C38))(this, value);
	}
	template <typename T = uintptr_t> T get_localToWorldMatrix() {
		return ((T (*)(Transform*))(Il2CppBase() + 0x4D37CD8))(this);
	}
	template <typename T = void> T INTERNAL_get_localToWorldMatrix(uintptr_t* value) {
		return ((T (*)(Transform*, uintptr_t*))(Il2CppBase() + 0x4D37D88))(this, value);
	}
	template <typename T = void> T SetPositionAndRotation(Il2CppVector3 position, Il2CppQuaternion rotation) {
		return ((T (*)(Transform*, Il2CppVector3, Il2CppQuaternion))(Il2CppBase() + 0x4D37E28))(this, position, rotation);
	}
	template <typename T = void> static T INTERNAL_CALL_SetPositionAndRotation(uintptr_t self, uintptr_t position, uintptr_t rotation) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D37E6C))(0, self, position, rotation);
	}
	template <typename T = bool> T CheckAndSetPositionWithoutNotification(Il2CppVector3 position) {
		return ((T (*)(Transform*, Il2CppVector3))(Il2CppBase() + 0x4D37F14))(this, position);
	}
	template <typename T = bool> static T INTERNAL_CALL_CheckAndSetPositionWithoutNotification(uintptr_t self, uintptr_t position) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D37F38))(0, self, position);
	}
	template <typename T = bool> T CheckAndSetRotationWithoutNotification(Il2CppQuaternion rotation) {
		return ((T (*)(Transform*, Il2CppQuaternion))(Il2CppBase() + 0x4D37FD8))(this, rotation);
	}
	template <typename T = bool> static T INTERNAL_CALL_CheckAndSetRotationWithoutNotification(uintptr_t self, uintptr_t rotation) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D38000))(0, self, rotation);
	}
	template <typename T = void> T SendTransformChanged(int32_t mask) {
		return ((T (*)(Transform*, int32_t))(Il2CppBase() + 0x4D380A0))(this, mask);
	}
	template <typename T = void> T Translate(Il2CppVector3 translation) {
		return ((T (*)(Transform*, Il2CppVector3))(Il2CppBase() + 0x4D38140))(this, translation);
	}
	template <typename T = void> T Translate_1(Il2CppVector3 translation, uintptr_t relativeTo) {
		return ((T (*)(Transform*, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x4D38160))(this, translation, relativeTo);
	}
	template <typename T = void> T Rotate(Il2CppVector3 eulerAngles) {
		return ((T (*)(Transform*, Il2CppVector3))(Il2CppBase() + 0x4D382E4))(this, eulerAngles);
	}
	template <typename T = void> T Rotate_1(Il2CppVector3 eulerAngles, uintptr_t relativeTo) {
		return ((T (*)(Transform*, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x4D38304))(this, eulerAngles, relativeTo);
	}
	template <typename T = void> T Rotate_2(float xAngle, float yAngle, float zAngle) {
		return ((T (*)(Transform*, float, float, float))(Il2CppBase() + 0x4D38514))(this, xAngle, yAngle, zAngle);
	}
	template <typename T = void> T Rotate_3(float xAngle, float yAngle, float zAngle, uintptr_t relativeTo) {
		return ((T (*)(Transform*, float, float, float, uintptr_t))(Il2CppBase() + 0x4D38534))(this, xAngle, yAngle, zAngle, relativeTo);
	}
	template <typename T = void> T RotateAroundInternal(Il2CppVector3 axis, float angle) {
		return ((T (*)(Transform*, Il2CppVector3, float))(Il2CppBase() + 0x4D3855C))(this, axis, angle);
	}
	template <typename T = void> static T INTERNAL_CALL_RotateAroundInternal(uintptr_t self, uintptr_t axis, float angle) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x4D3858C))(0, self, axis, angle);
	}
	template <typename T = void> T Rotate_4(Il2CppVector3 axis, float angle) {
		return ((T (*)(Transform*, Il2CppVector3, float))(Il2CppBase() + 0x4D38634))(this, axis, angle);
	}
	template <typename T = void> T Rotate_5(Il2CppVector3 axis, float angle, uintptr_t relativeTo) {
		return ((T (*)(Transform*, Il2CppVector3, float, uintptr_t))(Il2CppBase() + 0x4D3865C))(this, axis, angle, relativeTo);
	}
	template <typename T = void> T RotateAround(Il2CppVector3 point, Il2CppVector3 axis, float angle) {
		return ((T (*)(Transform*, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x4D3872C))(this, point, axis, angle);
	}
	template <typename T = void> T LookAt(uintptr_t target) {
		return ((T (*)(Transform*, uintptr_t))(Il2CppBase() + 0x4D38888))(this, target);
	}
	template <typename T = void> T LookAt_1(uintptr_t target, Il2CppVector3 worldUp) {
		return ((T (*)(Transform*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x4D388B0))(this, target, worldUp);
	}
	template <typename T = void> T LookAt_2(Il2CppVector3 worldPosition, Il2CppVector3 worldUp) {
		return ((T (*)(Transform*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x4D389D0))(this, worldPosition, worldUp);
	}
	template <typename T = void> T LookAt_3(Il2CppVector3 worldPosition) {
		return ((T (*)(Transform*, Il2CppVector3))(Il2CppBase() + 0x4D38AB4))(this, worldPosition);
	}
	template <typename T = void> static T INTERNAL_CALL_LookAt(uintptr_t self, uintptr_t worldPosition, uintptr_t worldUp) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D38A0C))(0, self, worldPosition, worldUp);
	}
	template <typename T = Il2CppVector3> T TransformDirection(Il2CppVector3 direction) {
		return ((T (*)(Transform*, Il2CppVector3))(Il2CppBase() + 0x4D38290))(this, direction);
	}
	template <typename T = void> static T INTERNAL_CALL_TransformDirection(uintptr_t self, uintptr_t direction, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4D38AF4))(0, self, direction, value);
	}
	template <typename T = Il2CppVector3> T InverseTransformDirection(Il2CppVector3 direction) {
		return ((T (*)(Transform*, Il2CppVector3))(Il2CppBase() + 0x4D38B9C))(this, direction);
	}
	template <typename T = void> static T INTERNAL_CALL_InverseTransformDirection(uintptr_t self, uintptr_t direction, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4D38BF0))(0, self, direction, value);
	}
	template <typename T = Il2CppVector3> T TransformVector(Il2CppVector3 vector) {
		return ((T (*)(Transform*, Il2CppVector3))(Il2CppBase() + 0x4D38C98))(this, vector);
	}
	template <typename T = void> static T INTERNAL_CALL_TransformVector(uintptr_t self, uintptr_t vector, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4D38CEC))(0, self, vector, value);
	}
	template <typename T = Il2CppVector3> T TransformVector_1(float x, float y, float z) {
		return ((T (*)(Transform*, float, float, float))(Il2CppBase() + 0x4D38D94))(this, x, y, z);
	}
	template <typename T = Il2CppVector3> T InverseTransformVector(Il2CppVector3 vector) {
		return ((T (*)(Transform*, Il2CppVector3))(Il2CppBase() + 0x4D38E04))(this, vector);
	}
	template <typename T = void> static T INTERNAL_CALL_InverseTransformVector(uintptr_t self, uintptr_t vector, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4D38E58))(0, self, vector, value);
	}
	template <typename T = Il2CppVector3> T TransformPoint(Il2CppVector3 position) {
		return ((T (*)(Transform*, Il2CppVector3))(Il2CppBase() + 0x4D38F00))(this, position);
	}
	template <typename T = void> static T INTERNAL_CALL_TransformPoint(uintptr_t self, uintptr_t position, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4D38F54))(0, self, position, value);
	}
	template <typename T = Il2CppVector3> T TransformPoint_1(float x, float y, float z) {
		return ((T (*)(Transform*, float, float, float))(Il2CppBase() + 0x4D38FFC))(this, x, y, z);
	}
	template <typename T = Il2CppVector3> T InverseTransformPoint(Il2CppVector3 position) {
		return ((T (*)(Transform*, Il2CppVector3))(Il2CppBase() + 0x4D3906C))(this, position);
	}
	template <typename T = void> static T INTERNAL_CALL_InverseTransformPoint(uintptr_t self, uintptr_t position, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4D390C0))(0, self, position, value);
	}
	template <typename T = Il2CppVector3> T InverseTransformPoint_1(float x, float y, float z) {
		return ((T (*)(Transform*, float, float, float))(Il2CppBase() + 0x4D39168))(this, x, y, z);
	}
	template <typename T = uintptr_t> T get_root() {
		return ((T (*)(Transform*))(Il2CppBase() + 0x4D391D8))(this);
	}
	template <typename T = int32_t> T get_childCount() {
		return ((T (*)(Transform*))(Il2CppBase() + 0x4D39270))(this);
	}
	template <typename T = void> T DetachChildren() {
		return ((T (*)(Transform*))(Il2CppBase() + 0x4D39308))(this);
	}
	template <typename T = void> T SetAsFirstSibling() {
		return ((T (*)(Transform*))(Il2CppBase() + 0x4D393A0))(this);
	}
	template <typename T = void> T SetAsLastSibling() {
		return ((T (*)(Transform*))(Il2CppBase() + 0x4D39438))(this);
	}
	template <typename T = void> T SetSiblingIndex(int32_t index) {
		return ((T (*)(Transform*, int32_t))(Il2CppBase() + 0x4D394D0))(this, index);
	}
	template <typename T = uintptr_t> T Find(Il2CppString* path) {
		return ((T (*)(Transform*, Il2CppString*))(Il2CppBase() + 0x4D39570))(this, path);
	}
	template <typename T = uintptr_t> T FindWithName(Il2CppString* name, bool includeInactive) {
		return ((T (*)(Transform*, Il2CppString*, bool))(Il2CppBase() + 0x4D39610))(this, name, includeInactive);
	}
	template <typename T = Il2CppString*> static T CalculateTransformPath(uintptr_t targetTransform, uintptr_t root) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D396B8))(0, targetTransform, root);
	}
	template <typename T = Il2CppVector3> T get_lossyScale() {
		return ((T (*)(Transform*))(Il2CppBase() + 0x4D39758))(this);
	}
	template <typename T = void> T INTERNAL_get_lossyScale(uintptr_t* value) {
		return ((T (*)(Transform*, uintptr_t*))(Il2CppBase() + 0x4D397A0))(this, value);
	}
	template <typename T = bool> T IsChildOf(uintptr_t parent) {
		return ((T (*)(Transform*, uintptr_t))(Il2CppBase() + 0x4D39840))(this, parent);
	}
	template <typename T = bool> T get_hasChanged() {
		return ((T (*)(Transform*))(Il2CppBase() + 0x4D398E0))(this);
	}
	template <typename T = void> T set_hasChanged(bool value) {
		return ((T (*)(Transform*, bool))(Il2CppBase() + 0x4D39978))(this, value);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(Transform*))(Il2CppBase() + 0x4D39A18))(this);
	}
	template <typename T = uintptr_t> T GetChild(int32_t index) {
		return ((T (*)(Transform*, int32_t))(Il2CppBase() + 0x4D39AE4))(this, index);
	}
	template <typename T = int32_t> T GetChildCount() {
		return ((T (*)(Transform*))(Il2CppBase() + 0x4D39B84))(this);
	}

};

}
