#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class GameObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "GameObject"));
	}


	template <typename T = uintptr_t> static T CreatePrimitive(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x476E8A8))(0, type);
	}
	template <typename T = uintptr_t> T GetComponent(uintptr_t type) {
		return ((T (*)(GameObject*, uintptr_t))(Il2CppBase() + 0x476E940))(this, type);
	}
	template <typename T = void> T GetComponentFastPath(uintptr_t type, uintptr_t oneFurtherThanResultValue) {
		return ((T (*)(GameObject*, uintptr_t, uintptr_t))(Il2CppBase() + 0x476E9E0))(this, type, oneFurtherThanResultValue);
	}
	template <typename T = uintptr_t> T GetComponent_1() {
		return ((T (*)(GameObject*))(Il2CppBase() + 0x3355854))(this);
	}
	template <typename T = uintptr_t> T GetComponentByName(Il2CppString* type) {
		return ((T (*)(GameObject*, Il2CppString*))(Il2CppBase() + 0x476EA88))(this, type);
	}
	template <typename T = uintptr_t> T GetComponent_2(Il2CppString* type) {
		return ((T (*)(GameObject*, Il2CppString*))(Il2CppBase() + 0x476EB28))(this, type);
	}
	template <typename T = uintptr_t> T GetComponentInChildren(uintptr_t type, bool includeInactive) {
		return ((T (*)(GameObject*, uintptr_t, bool))(Il2CppBase() + 0x476EB2C))(this, type, includeInactive);
	}
	template <typename T = uintptr_t> T GetComponentInChildren_1() {
		return ((T (*)(GameObject*))(Il2CppBase() + 0x33948F0))(this);
	}
	template <typename T = uintptr_t> T GetComponentInChildren_2(bool includeInactive) {
		return ((T (*)(GameObject*, bool))(Il2CppBase() + 0x3394924))(this, includeInactive);
	}
	template <typename T = uintptr_t> T GetComponentInParent(uintptr_t type) {
		return ((T (*)(GameObject*, uintptr_t))(Il2CppBase() + 0x476EBD4))(this, type);
	}
	template <typename T = uintptr_t> T GetComponentInParent_1() {
		return ((T (*)(GameObject*))(Il2CppBase() + 0x3394A20))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetComponents(uintptr_t type) {
		return ((T (*)(GameObject*, uintptr_t))(Il2CppBase() + 0x476EC74))(this, type);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetComponents_1() {
		return ((T (*)(GameObject*))(Il2CppBase() + 0x4E43394))(this);
	}
	template <typename T = void> T GetComponents_2(uintptr_t type, Il2CppList<uintptr_t>* results) {
		return ((T (*)(GameObject*, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x476EEFC))(this, type, results);
	}
	template <typename T = void> T GetComponents_3(Il2CppList<uintptr_t>* results) {
		return ((T (*)(GameObject*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x282F4D8))(this, results);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetComponentsInChildren(uintptr_t type) {
		return ((T (*)(GameObject*, uintptr_t))(Il2CppBase() + 0x476EF2C))(this, type);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetComponentsInChildren_1(uintptr_t type, bool includeInactive) {
		return ((T (*)(GameObject*, uintptr_t, bool))(Il2CppBase() + 0x476EF34))(this, type, includeInactive);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetComponentsInChildren_2(bool includeInactive) {
		return ((T (*)(GameObject*, bool))(Il2CppBase() + 0x4E434DC))(this, includeInactive);
	}
	template <typename T = void> T GetComponentsInChildren_3(bool includeInactive, Il2CppList<uintptr_t>* results) {
		return ((T (*)(GameObject*, bool, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x282F5CC))(this, includeInactive, results);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetComponentsInChildren_4() {
		return ((T (*)(GameObject*))(Il2CppBase() + 0x4E434A8))(this);
	}
	template <typename T = void> T GetComponentsInChildren_5(Il2CppList<uintptr_t>* results) {
		return ((T (*)(GameObject*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x282F6C4))(this, results);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetComponentsInParent(uintptr_t type, bool includeInactive) {
		return ((T (*)(GameObject*, uintptr_t, bool))(Il2CppBase() + 0x476F0E8))(this, type, includeInactive);
	}
	template <typename T = void> T GetComponentsInParent_1(bool includeInactive, Il2CppList<uintptr_t>* results) {
		return ((T (*)(GameObject*, bool, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x282F700))(this, includeInactive, results);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetComponentsInParent_2(bool includeInactive) {
		return ((T (*)(GameObject*, bool))(Il2CppBase() + 0x4E43628))(this, includeInactive);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetComponentsInParent_3() {
		return ((T (*)(GameObject*))(Il2CppBase() + 0x4E435F4))(this);
	}
	template <typename T = uintptr_t> T GetComponentsInternal(uintptr_t type, bool useSearchTypeAsArrayReturnType, bool recursive, bool includeInactive, bool reverse, uintptr_t resultList) {
		return ((T (*)(GameObject*, uintptr_t, bool, bool, bool, bool, uintptr_t))(Il2CppBase() + 0x476EE28))(this, type, useSearchTypeAsArrayReturnType, recursive, includeInactive, reverse, resultList);
	}
	template <typename T = uintptr_t> T get_transform() {
		return ((T (*)(GameObject*))(Il2CppBase() + 0x476F2A0))(this);
	}
	template <typename T = int32_t> T get_layer() {
		return ((T (*)(GameObject*))(Il2CppBase() + 0x476F338))(this);
	}
	template <typename T = void> T set_layer(int32_t value) {
		return ((T (*)(GameObject*, int32_t))(Il2CppBase() + 0x476F3D0))(this, value);
	}
	template <typename T = void> T SetActive(bool value) {
		return ((T (*)(GameObject*, bool))(Il2CppBase() + 0x476F470))(this, value);
	}
	template <typename T = bool> T get_activeSelf() {
		return ((T (*)(GameObject*))(Il2CppBase() + 0x476F510))(this);
	}
	template <typename T = bool> T get_activeInHierarchy() {
		return ((T (*)(GameObject*))(Il2CppBase() + 0x476F5A8))(this);
	}
	template <typename T = bool> T get_isStatic() {
		return ((T (*)(GameObject*))(Il2CppBase() + 0x476F640))(this);
	}
	template <typename T = void> T set_isStatic(bool value) {
		return ((T (*)(GameObject*, bool))(Il2CppBase() + 0x476F6D8))(this, value);
	}
	template <typename T = Il2CppString*> T get_tag() {
		return ((T (*)(GameObject*))(Il2CppBase() + 0x476F778))(this);
	}
	template <typename T = void> T set_tag(Il2CppString* value) {
		return ((T (*)(GameObject*, Il2CppString*))(Il2CppBase() + 0x476F810))(this, value);
	}
	template <typename T = bool> T CompareTag(Il2CppString* tag) {
		return ((T (*)(GameObject*, Il2CppString*))(Il2CppBase() + 0x476F8B0))(this, tag);
	}
	template <typename T = uintptr_t> static T FindGameObjectWithTag(Il2CppString* tag) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x476F950))(0, tag);
	}
	template <typename T = uintptr_t> static T FindWithTag(Il2CppString* tag) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x476F9E8))(0, tag);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T FindGameObjectsWithTag(Il2CppString* tag) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x476F9EC))(0, tag);
	}
	template <typename T = void> T SendMessageUpwards(Il2CppString* methodName, uintptr_t value, uintptr_t options) {
		return ((T (*)(GameObject*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x476FA84))(this, methodName, value, options);
	}
	template <typename T = void> T SendMessage(Il2CppString* methodName, uintptr_t value, uintptr_t options) {
		return ((T (*)(GameObject*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x476FB34))(this, methodName, value, options);
	}
	template <typename T = void> T SendMessage_1(Il2CppString* methodName, uintptr_t value) {
		return ((T (*)(GameObject*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x476FBE4))(this, methodName, value);
	}
	template <typename T = void> T SendMessage_2(Il2CppString* methodName) {
		return ((T (*)(GameObject*, Il2CppString*))(Il2CppBase() + 0x476FC00))(this, methodName);
	}
	template <typename T = void> T SendMessage_3(Il2CppString* methodName, uintptr_t options) {
		return ((T (*)(GameObject*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x476FC20))(this, methodName, options);
	}
	template <typename T = void> T BroadcastMessage(Il2CppString* methodName, uintptr_t parameter, uintptr_t options) {
		return ((T (*)(GameObject*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x476FC40))(this, methodName, parameter, options);
	}
	template <typename T = void> T BroadcastMessage_1(Il2CppString* methodName) {
		return ((T (*)(GameObject*, Il2CppString*))(Il2CppBase() + 0x476FCF0))(this, methodName);
	}
	template <typename T = uintptr_t> T Internal_AddComponentWithType(uintptr_t componentType) {
		return ((T (*)(GameObject*, uintptr_t))(Il2CppBase() + 0x476FD10))(this, componentType);
	}
	template <typename T = uintptr_t> T Internal_AddComponentWithTypeUnchecked(uintptr_t componentType) {
		return ((T (*)(GameObject*, uintptr_t))(Il2CppBase() + 0x476FDB0))(this, componentType);
	}
	template <typename T = uintptr_t> T AddComponentUnchecked(uintptr_t componentType) {
		return ((T (*)(GameObject*, uintptr_t))(Il2CppBase() + 0x476FE50))(this, componentType);
	}
	template <typename T = uintptr_t> T AddComponent(uintptr_t componentType) {
		return ((T (*)(GameObject*, uintptr_t))(Il2CppBase() + 0x476E8A4))(this, componentType);
	}
	template <typename T = uintptr_t> T AddComponent_1() {
		return ((T (*)(GameObject*))(Il2CppBase() + 0x33947DC))(this);
	}
	template <typename T = void> static T Internal_CreateGameObject(uintptr_t mono, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x476E64C))(0, mono, name);
	}
	template <typename T = uintptr_t> static T Find(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x476FE54))(0, name);
	}
	template <typename T = uintptr_t> T get_scene() {
		return ((T (*)(GameObject*))(Il2CppBase() + 0x476FEEC))(this);
	}
	template <typename T = void> T INTERNAL_get_scene(uintptr_t* value) {
		return ((T (*)(GameObject*, uintptr_t*))(Il2CppBase() + 0x476FF14))(this, value);
	}
	template <typename T = uintptr_t> T get_gameObject() {
		return ((T (*)(GameObject*))(Il2CppBase() + 0x476FFB4))(this);
	}

};

}
