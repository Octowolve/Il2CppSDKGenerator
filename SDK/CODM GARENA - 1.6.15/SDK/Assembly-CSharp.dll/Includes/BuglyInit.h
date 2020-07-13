#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BuglyInit
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuglyInit"));
	}

	template <typename T = Il2CppString*> static T& BuglyAppID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BuglyInit*))(Il2CppBase() + 0x5303F48))(this);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> static T MyLogCallbackExtrasHandler() {
		return ((T (*)(void *))(Il2CppBase() + 0x5304198))(0);
	}

};

}
