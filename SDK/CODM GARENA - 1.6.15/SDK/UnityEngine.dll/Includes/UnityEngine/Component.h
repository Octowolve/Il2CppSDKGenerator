#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Component
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Component"));
	}


	template <typename T = uintptr_t> T get_transform() {
		return ((T (*)(Component*))(Il2CppBase() + 0x4D9EA08))(this);
	}
	template <typename T = uintptr_t> T get_gameObject() {
		return ((T (*)(Component*))(Il2CppBase() + 0x4D9EB74))(this);
	}
	template <typename T = uintptr_t> T GetComponent(uintptr_t type) {
		return ((T (*)(Component*, uintptr_t))(Il2CppBase() + 0x4DA1018))(this, type);
	}
	template <typename T = void> T GetComponentFastPath(uintptr_t type, uintptr_t oneFurtherThanResultValue) {
		return ((T (*)(Component*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DA104C))(this, type, oneFurtherThanResultValue);
	}
	template <typename T = uintptr_t> T GetComponent_1() {
		return ((T (*)(Component*))(Il2CppBase() + 0x33940D8))(this);
	}
	template <typename T = uintptr_t> T GetComponent_2(Il2CppString* type) {
		return ((T (*)(Component*, Il2CppString*))(Il2CppBase() + 0x4DA10F4))(this, type);
	}
	template <typename T = uintptr_t> T GetComponentInChildren(uintptr_t t, bool includeInactive) {
		return ((T (*)(Component*, uintptr_t, bool))(Il2CppBase() + 0x4DA1194))(this, t, includeInactive);
	}
	template <typename T = uintptr_t> T GetComponentInChildren_1(uintptr_t t) {
		return ((T (*)(Component*, uintptr_t))(Il2CppBase() + 0x4DA11D0))(this, t);
	}
	template <typename T = uintptr_t> T GetComponentInChildren_2() {
		return ((T (*)(Component*))(Il2CppBase() + 0x339422C))(this);
	}
	template <typename T = uintptr_t> T GetComponentInChildren_3(bool includeInactive) {
		return ((T (*)(Component*, bool))(Il2CppBase() + 0x3394260))(this, includeInactive);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetComponentsInChildren(uintptr_t t) {
		return ((T (*)(Component*, uintptr_t))(Il2CppBase() + 0x4DA11D8))(this, t);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetComponentsInChildren_1(uintptr_t t, bool includeInactive) {
		return ((T (*)(Component*, uintptr_t, bool))(Il2CppBase() + 0x4DA11E0))(this, t, includeInactive);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetComponentsInChildren_2(bool includeInactive) {
		return ((T (*)(Component*, bool))(Il2CppBase() + 0x4E432C8))(this, includeInactive);
	}
	template <typename T = void> T GetComponentsInChildren_3(bool includeInactive, Il2CppList<uintptr_t>* result) {
		return ((T (*)(Component*, bool, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x282DD1C))(this, includeInactive, result);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetComponentsInChildren_4() {
		return ((T (*)(Component*))(Il2CppBase() + 0x4E43294))(this);
	}
	template <typename T = void> T GetComponentsInChildren_5(Il2CppList<uintptr_t>* results) {
		return ((T (*)(Component*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x282DD70))(this, results);
	}
	template <typename T = uintptr_t> T GetComponentInParent(uintptr_t t) {
		return ((T (*)(Component*, uintptr_t))(Il2CppBase() + 0x4DA121C))(this, t);
	}
	template <typename T = uintptr_t> T GetComponentInParent_1() {
		return ((T (*)(Component*))(Il2CppBase() + 0x339435C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetComponentsInParent(uintptr_t t) {
		return ((T (*)(Component*, uintptr_t))(Il2CppBase() + 0x4DA1250))(this, t);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetComponentsInParent_1(uintptr_t t, bool includeInactive) {
		return ((T (*)(Component*, uintptr_t, bool))(Il2CppBase() + 0x4DA1258))(this, t, includeInactive);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetComponentsInParent_2(bool includeInactive) {
		return ((T (*)(Component*, bool))(Il2CppBase() + 0x4E43348))(this, includeInactive);
	}
	template <typename T = void> T GetComponentsInParent_3(bool includeInactive, Il2CppList<uintptr_t>* results) {
		return ((T (*)(Component*, bool, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x282DDAC))(this, includeInactive, results);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetComponentsInParent_4() {
		return ((T (*)(Component*))(Il2CppBase() + 0x4E43314))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetComponents(uintptr_t type) {
		return ((T (*)(Component*, uintptr_t))(Il2CppBase() + 0x4DA1294))(this, type);
	}
	template <typename T = void> T GetComponentsForListInternal(uintptr_t searchType, uintptr_t resultList) {
		return ((T (*)(Component*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DA12C8))(this, searchType, resultList);
	}
	template <typename T = void> T GetComponents_1(uintptr_t type, Il2CppList<uintptr_t>* results) {
		return ((T (*)(Component*, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4DA1370))(this, type, results);
	}
	template <typename T = void> T GetComponents_2(Il2CppList<uintptr_t>* results) {
		return ((T (*)(Component*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x282DC40))(this, results);
	}
	template <typename T = Il2CppString*> T get_tag() {
		return ((T (*)(Component*))(Il2CppBase() + 0x4DA1374))(this);
	}
	template <typename T = void> T set_tag(Il2CppString* value) {
		return ((T (*)(Component*, Il2CppString*))(Il2CppBase() + 0x4DA13A0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetComponents_3() {
		return ((T (*)(Component*))(Il2CppBase() + 0x4E43250))(this);
	}
	template <typename T = bool> T CompareTag(Il2CppString* tag) {
		return ((T (*)(Component*, Il2CppString*))(Il2CppBase() + 0x4DA13D4))(this, tag);
	}
	template <typename T = void> T SendMessageUpwards(Il2CppString* methodName, uintptr_t value, uintptr_t options) {
		return ((T (*)(Component*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DA1474))(this, methodName, value, options);
	}
	template <typename T = void> T SendMessageUpwards_1(Il2CppString* methodName, uintptr_t value) {
		return ((T (*)(Component*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4DA1524))(this, methodName, value);
	}
	template <typename T = void> T SendMessageUpwards_2(Il2CppString* methodName) {
		return ((T (*)(Component*, Il2CppString*))(Il2CppBase() + 0x4DA1540))(this, methodName);
	}
	template <typename T = void> T SendMessageUpwards_3(Il2CppString* methodName, uintptr_t options) {
		return ((T (*)(Component*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4DA1560))(this, methodName, options);
	}
	template <typename T = void> T SendMessage(Il2CppString* methodName, uintptr_t value, uintptr_t options) {
		return ((T (*)(Component*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DA1580))(this, methodName, value, options);
	}
	template <typename T = void> T SendMessage_1(Il2CppString* methodName, uintptr_t value) {
		return ((T (*)(Component*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4DA1630))(this, methodName, value);
	}
	template <typename T = void> T SendMessage_2(Il2CppString* methodName) {
		return ((T (*)(Component*, Il2CppString*))(Il2CppBase() + 0x4DA164C))(this, methodName);
	}
	template <typename T = void> T SendMessage_3(Il2CppString* methodName, uintptr_t options) {
		return ((T (*)(Component*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4DA166C))(this, methodName, options);
	}
	template <typename T = void> T BroadcastMessage(Il2CppString* methodName, uintptr_t parameter, uintptr_t options) {
		return ((T (*)(Component*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DA168C))(this, methodName, parameter, options);
	}
	template <typename T = void> T BroadcastMessage_1(Il2CppString* methodName, uintptr_t parameter) {
		return ((T (*)(Component*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4DA173C))(this, methodName, parameter);
	}
	template <typename T = void> T BroadcastMessage_2(Il2CppString* methodName) {
		return ((T (*)(Component*, Il2CppString*))(Il2CppBase() + 0x4DA1758))(this, methodName);
	}
	template <typename T = void> T BroadcastMessage_3(Il2CppString* methodName, uintptr_t options) {
		return ((T (*)(Component*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4DA1778))(this, methodName, options);
	}

};

}
