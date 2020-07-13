#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class TransformExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("usequencerRuntime.dll", "WellFired", "TransformExtensions"));
	}


	template <typename T = Il2CppString*> static T GetFullHierarchyPath(uintptr_t transform) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x485C6F8))(0, transform);
	}

};

}
