#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdatePlayerDownloadMapStatecAnonStorey9
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<UpdatePlayerDownloadMapState>c__AnonStorey9"));
	}

	template <typename T = uint64_t> T& playerId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uint64_t x) {
		return ((T (*)(UpdatePlayerDownloadMapStatecAnonStorey9*, uint64_t))(Il2CppBase() + 0x20CAB30))(this, x);
	}

};

}
