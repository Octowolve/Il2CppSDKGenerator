#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetRoomInfocAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetRoomInfo>c__AnonStorey0"));
	}

	template <typename T = int32_t> T& brPlaylistId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& mapID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& spvpPlaylistId() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(GetRoomInfocAnonStorey0*, uintptr_t))(Il2CppBase() + 0x1D54248))(this, it);
	}
	template <typename T = bool> T m__1(uintptr_t it) {
		return ((T (*)(GetRoomInfocAnonStorey0*, uintptr_t))(Il2CppBase() + 0x1D5429C))(this, it);
	}
	template <typename T = bool> T m__2(uintptr_t it) {
		return ((T (*)(GetRoomInfocAnonStorey0*, uintptr_t))(Il2CppBase() + 0x1D542F0))(this, it);
	}
	template <typename T = bool> T m__3(uintptr_t it) {
		return ((T (*)(GetRoomInfocAnonStorey0*, uintptr_t))(Il2CppBase() + 0x1D54344))(this, it);
	}
	template <typename T = bool> T m__4(uintptr_t it) {
		return ((T (*)(GetRoomInfocAnonStorey0*, uintptr_t))(Il2CppBase() + 0x1D54378))(this, it);
	}

};

}
