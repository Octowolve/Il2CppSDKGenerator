#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RootMotion {

class Hierarchy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "RootMotion", "Hierarchy"));
	}


	template <typename T = bool> static T HierarchyIsValid(Il2CppArray<uintptr_t>* bones) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4F7CA3C))(0, bones);
	}
	template <typename T = uintptr_t> static T ContainsDuplicate(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4F7CCF4))(0, objects);
	}
	template <typename T = bool> static T IsAncestor(uintptr_t transform, uintptr_t ancestor) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4F7CACC))(0, transform, ancestor);
	}
	template <typename T = bool> static T ContainsChild(uintptr_t transform, uintptr_t child) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4F7CE5C))(0, transform, child);
	}
	template <typename T = void> static T AddAncestors(uintptr_t transform, uintptr_t blocker, Il2CppArray<uintptr_t>* array) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4F7CFEC))(0, transform, blocker, array);
	}
	template <typename T = uintptr_t> static T GetAncestor(uintptr_t transform, int32_t minChildCount) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4F7D2E0))(0, transform, minChildCount);
	}
	template <typename T = uintptr_t> static T GetFirstCommonAncestor(uintptr_t t1, uintptr_t t2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4F7D474))(0, t1, t2);
	}
	template <typename T = uintptr_t> static T GetFirstCommonAncestor_1(Il2CppArray<uintptr_t>* transforms) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4F7D6CC))(0, transforms);
	}
	template <typename T = uintptr_t> static T GetFirstCommonAncestorRecursive(uintptr_t transform, Il2CppArray<uintptr_t>* transforms) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4F7DC10))(0, transform, transforms);
	}
	template <typename T = bool> static T IsCommonAncestor(uintptr_t transform, Il2CppArray<uintptr_t>* transforms) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4F7D8E0))(0, transform, transforms);
	}

};

}
