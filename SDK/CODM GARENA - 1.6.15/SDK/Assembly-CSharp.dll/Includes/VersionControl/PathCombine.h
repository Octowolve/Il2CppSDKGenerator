#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace VersionControl {

class PathCombine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "VersionControl", "PathCombine"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_RawCombine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PureCombine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppString*> static T RawCombine(Il2CppArray<uintptr_t>* subPath) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x488B290))(0, subPath);
	}
	template <typename T = Il2CppString*> static T PureCombine(Il2CppArray<uintptr_t>* subPath) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x488A500))(0, subPath);
	}

};

}
