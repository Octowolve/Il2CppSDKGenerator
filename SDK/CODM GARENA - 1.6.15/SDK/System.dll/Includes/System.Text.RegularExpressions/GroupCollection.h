#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text.RegularExpressions {

class GroupCollection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Text.RegularExpressions", "GroupCollection"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& list() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& gap() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T get_Count() {
		return ((T (*)(GroupCollection*))(Il2CppBase() + 0x4AD3CD4))(this);
	}
	template <typename T = bool> T get_IsSynchronized() {
		return ((T (*)(GroupCollection*))(Il2CppBase() + 0x4AD3CF8))(this);
	}
	template <typename T = uintptr_t> T get_Item(int32_t i) {
		return ((T (*)(GroupCollection*, int32_t))(Il2CppBase() + 0x4AD3D00))(this, i);
	}
	template <typename T = void> T SetValue(uintptr_t g, int32_t i) {
		return ((T (*)(GroupCollection*, uintptr_t, int32_t))(Il2CppBase() + 0x4AD4024))(this, g, i);
	}
	template <typename T = uintptr_t> T get_Item_1(Il2CppString* groupName) {
		return ((T (*)(GroupCollection*, Il2CppString*))(Il2CppBase() + 0x4AD4094))(this, groupName);
	}
	template <typename T = uintptr_t> T get_SyncRoot() {
		return ((T (*)(GroupCollection*))(Il2CppBase() + 0x4AD43D0))(this);
	}
	template <typename T = void> T CopyTo(uintptr_t array, int32_t index) {
		return ((T (*)(GroupCollection*, uintptr_t, int32_t))(Il2CppBase() + 0x4AD43D8))(this, array, index);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(GroupCollection*))(Il2CppBase() + 0x4AD4404))(this);
	}

};

}
