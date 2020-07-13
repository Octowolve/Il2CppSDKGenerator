#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EditorOnlyObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EditorOnlyObject"));
	}


	template <typename T = void> T Awake() {
		return ((T (*)(EditorOnlyObject*))(Il2CppBase() + 0x4BBFF64))(this);
	}

};

}
