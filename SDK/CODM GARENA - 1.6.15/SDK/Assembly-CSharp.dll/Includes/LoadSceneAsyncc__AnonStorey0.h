#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadSceneAsynccAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<LoadSceneAsync>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& sceneLOD() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0(Il2CppString* scenePath) {
		return ((T (*)(LoadSceneAsynccAnonStorey0*, Il2CppString*))(Il2CppBase() + 0x465FF38))(this, scenePath);
	}

};

}
