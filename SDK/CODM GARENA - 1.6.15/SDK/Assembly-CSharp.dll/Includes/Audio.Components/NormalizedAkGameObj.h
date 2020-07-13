#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.Components {

class NormalizedAkGameObj
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.Components", "NormalizedAkGameObj"));
	}

	template <typename T = Il2CppVector3> T& mLastForward() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = Il2CppVector3> T GetForward() {
		return ((T (*)(NormalizedAkGameObj*))(Il2CppBase() + 0x44DA0C0))(this);
	}
	template <typename T = Il2CppVector3> T GetUpward() {
		return ((T (*)(NormalizedAkGameObj*))(Il2CppBase() + 0x44DA160))(this);
	}

};

}
