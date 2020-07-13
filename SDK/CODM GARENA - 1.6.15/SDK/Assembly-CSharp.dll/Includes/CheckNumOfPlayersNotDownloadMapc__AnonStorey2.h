#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CheckNumOfPlayersNotDownloadMapcAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CheckNumOfPlayersNotDownloadMap>c__AnonStorey2"));
	}

	template <typename T = uint32_t> T& octMapId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uint32_t it) {
		return ((T (*)(CheckNumOfPlayersNotDownloadMapcAnonStorey2*, uint32_t))(Il2CppBase() + 0x2D23930))(this, it);
	}
	template <typename T = bool> T m__1(uint32_t it) {
		return ((T (*)(CheckNumOfPlayersNotDownloadMapcAnonStorey2*, uint32_t))(Il2CppBase() + 0x2D23944))(this, it);
	}
	template <typename T = bool> T m__2(uint32_t it) {
		return ((T (*)(CheckNumOfPlayersNotDownloadMapcAnonStorey2*, uint32_t))(Il2CppBase() + 0x2D23958))(this, it);
	}

};

}
