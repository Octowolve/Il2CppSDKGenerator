#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DscIPGroupHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DscIPGroupHelper"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_ToDebugString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> static T ToDebugString(Il2CppList<uintptr_t>* list, Il2CppString* prefix) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x417B7E4))(0, list, prefix);
	}

};

}
