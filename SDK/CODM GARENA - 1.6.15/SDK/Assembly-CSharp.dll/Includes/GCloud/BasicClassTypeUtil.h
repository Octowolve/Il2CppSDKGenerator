#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class BasicClassTypeUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "BasicClassTypeUtil"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CreateObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateListItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> static T CreateObject() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E74254))(0);
	}
	template <typename T = uintptr_t> static T CreateObject_1(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x451F1EC))(0, type);
	}
	template <typename T = uintptr_t> static T CreateListItem(uintptr_t typeList) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x451F428))(0, typeList);
	}

};

}
