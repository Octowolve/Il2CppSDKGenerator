#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class ArrayExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "ArrayExtensions"));
	}


	template <typename T = void> static T Init(Il2CppArray<uintptr_t>* array, uintptr_t defaultValue) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x1E87880))(0, array, defaultValue);
	}
	template <typename T = void> static T Init_1(Il2CppList<uintptr_t>* array, uintptr_t defaultValue) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x1E8781C))(0, array, defaultValue);
	}

};

}
