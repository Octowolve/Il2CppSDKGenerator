#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine.Animations {

class CUIDMgr1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine.Animations", "CUIDMgr`1"));
	}

	template <typename T = int32_t> T& increment() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& users() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& userPool() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& userList() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uint16_t> T& userPoolIndex() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Contains() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAtIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAtIndexEx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__ResetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFreeID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_insert() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getFirst() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getFirstID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_removeAt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_traversingArray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_traversingArrayEx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uint16_t> T get_maxUsers() {
		return ((T (*)(CUIDMgr1*))(Il2CppBase() + 0x48D3D34))(this);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(CUIDMgr1*))(Il2CppBase() + 0x48D3D3C))(this);
	}
	template <typename T = bool> T Contains(int32_t inID) {
		return ((T (*)(CUIDMgr1*, int32_t))(Il2CppBase() + 0x48D3D44))(this, inID);
	}
	template <typename T = uintptr_t> T GetAtIndex(int32_t inIndex) {
		return ((T (*)(CUIDMgr1*, int32_t))(Il2CppBase() + 0x48D3F74))(this, inIndex);
	}
	template <typename T = uintptr_t> T GetAtIndexEx(int32_t inIndex) {
		return ((T (*)(CUIDMgr1*, int32_t))(Il2CppBase() + 0x48D410C))(this, inIndex);
	}
	template <typename T = int32_t> T add(uintptr_t inObj, bool insertFirst) {
		return ((T (*)(CUIDMgr1*, uintptr_t, bool))(Il2CppBase() + 0x48D4270))(this, inObj, insertFirst);
	}
	template <typename T = void> T _ResetData(int32_t inCount) {
		return ((T (*)(CUIDMgr1*, int32_t))(Il2CppBase() + 0x48D44F8))(this, inCount);
	}
	template <typename T = int32_t> T GetFreeID() {
		return ((T (*)(CUIDMgr1*))(Il2CppBase() + 0x48D4748))(this);
	}
	template <typename T = bool> T insert(int32_t inID, uintptr_t inObj, bool inForce) {
		return ((T (*)(CUIDMgr1*, int32_t, uintptr_t, bool))(Il2CppBase() + 0x48D486C))(this, inID, inObj, inForce);
	}
	template <typename T = uintptr_t> T getFirst() {
		return ((T (*)(CUIDMgr1*))(Il2CppBase() + 0x48D4C2C))(this);
	}
	template <typename T = int32_t> T getFirstID() {
		return ((T (*)(CUIDMgr1*))(Il2CppBase() + 0x48D4D10))(this);
	}
	template <typename T = uintptr_t> T get_Item(int32_t ID) {
		return ((T (*)(CUIDMgr1*, int32_t))(Il2CppBase() + 0x48D4E5C))(this, ID);
	}
	template <typename T = void> T set_Item(int32_t ID, uintptr_t value) {
		return ((T (*)(CUIDMgr1*, int32_t, uintptr_t))(Il2CppBase() + 0x48D4F70))(this, ID, value);
	}
	template <typename T = void> T remove(int32_t ID, bool isDelete) {
		return ((T (*)(CUIDMgr1*, int32_t, bool))(Il2CppBase() + 0x48D4FC8))(this, ID, isDelete);
	}
	template <typename T = void> T removeAt(int32_t inIndex, bool isDelete) {
		return ((T (*)(CUIDMgr1*, int32_t, bool))(Il2CppBase() + 0x48D5180))(this, inIndex, isDelete);
	}
	template <typename T = void> T clear() {
		return ((T (*)(CUIDMgr1*))(Il2CppBase() + 0x48D53E4))(this);
	}
	template <typename T = void> T traversingArray(void* inCallback, uintptr_t inOP) {
		return ((T (*)(CUIDMgr1*, void*, uintptr_t))(Il2CppBase() + 0x48D55C0))(this, inCallback, inOP);
	}
	template <typename T = void> T traversingArrayEx(void* inCallback, float delta, uintptr_t inOP, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(CUIDMgr1*, void*, float, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x48D57C8))(this, inCallback, delta, inOP, args);
	}

};

}
