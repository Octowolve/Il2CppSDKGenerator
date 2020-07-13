#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IniterAdderUnityEngineVector2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IniterAdderUnityEngineVector2"));
	}

	template <typename T = void*> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T Init(uintptr_t luaenv, uintptr_t translator) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xF5A804))(0, luaenv, translator);
	}

};

}
