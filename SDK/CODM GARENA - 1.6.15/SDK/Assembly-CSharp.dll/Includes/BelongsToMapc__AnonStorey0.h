#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BelongsToMapcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<BelongsToMap>c__AnonStorey0"));
	}

	template <typename T = Il2CppString*> T& scenePath() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(Il2CppString* e) {
		return ((T (*)(BelongsToMapcAnonStorey0*, Il2CppString*))(Il2CppBase() + 0x4AA7CB0))(this, e);
	}

};

}
