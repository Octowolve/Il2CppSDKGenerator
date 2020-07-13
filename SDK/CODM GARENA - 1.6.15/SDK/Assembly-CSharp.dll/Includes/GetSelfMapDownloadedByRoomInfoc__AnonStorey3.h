#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetSelfMapDownloadedByRoomInfocAnonStorey3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetSelfMapDownloadedByRoomInfo>c__AnonStorey3"));
	}

	template <typename T = uintptr_t> T& LocalPlayerDS() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& octMapId() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t x) {
		return ((T (*)(GetSelfMapDownloadedByRoomInfocAnonStorey3*, uintptr_t))(Il2CppBase() + 0x2D23CFC))(this, x);
	}
	template <typename T = bool> T m__1(uintptr_t x) {
		return ((T (*)(GetSelfMapDownloadedByRoomInfocAnonStorey3*, uintptr_t))(Il2CppBase() + 0x2D23D60))(this, x);
	}
	template <typename T = bool> T m__2(uintptr_t x) {
		return ((T (*)(GetSelfMapDownloadedByRoomInfocAnonStorey3*, uintptr_t))(Il2CppBase() + 0x2D23DC4))(this, x);
	}
	template <typename T = bool> T m__3(uint32_t it) {
		return ((T (*)(GetSelfMapDownloadedByRoomInfocAnonStorey3*, uint32_t))(Il2CppBase() + 0x2D23E28))(this, it);
	}

};

}
