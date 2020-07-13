#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetDatacAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetData>c__AnonStorey0"));
	}

	template <typename T = Il2CppString*> T& videoPath() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& soundBegin() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& soundEnd() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& loop() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(SetDatacAnonStorey0*))(Il2CppBase() + 0x3AD2274))(this);
	}
	template <typename T = void> T m__1() {
		return ((T (*)(SetDatacAnonStorey0*))(Il2CppBase() + 0x3AD24C0))(this);
	}

};

}
