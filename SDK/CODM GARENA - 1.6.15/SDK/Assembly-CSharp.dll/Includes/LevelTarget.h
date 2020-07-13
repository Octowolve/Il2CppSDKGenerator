#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LevelTarget
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LevelTarget"));
	}

	template <typename T = Il2CppString*> T& ID() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Find() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> static T Find(Il2CppString* id) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x49332F8))(0, id);
	}

};

}
