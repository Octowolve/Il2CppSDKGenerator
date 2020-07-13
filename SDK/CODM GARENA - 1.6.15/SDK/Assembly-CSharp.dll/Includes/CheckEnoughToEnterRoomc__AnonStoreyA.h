#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CheckEnoughToEnterRoomcAnonStoreyA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CheckEnoughToEnterRoom>c__AnonStoreyA"));
	}

	template <typename T = int32_t> T& playlistID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uint32_t it) {
		return ((T (*)(CheckEnoughToEnterRoomcAnonStoreyA*, uint32_t))(Il2CppBase() + 0x2D237F4))(this, it);
	}
	template <typename T = bool> T m__1(uintptr_t it) {
		return ((T (*)(CheckEnoughToEnterRoomcAnonStoreyA*, uintptr_t))(Il2CppBase() + 0x2D23810))(this, it);
	}
	template <typename T = bool> T m__2(uintptr_t it) {
		return ((T (*)(CheckEnoughToEnterRoomcAnonStoreyA*, uintptr_t))(Il2CppBase() + 0x2D23844))(this, it);
	}
	template <typename T = bool> T m__3(uintptr_t it) {
		return ((T (*)(CheckEnoughToEnterRoomcAnonStoreyA*, uintptr_t))(Il2CppBase() + 0x2D23878))(this, it);
	}
	template <typename T = bool> T m__4(uint32_t it) {
		return ((T (*)(CheckEnoughToEnterRoomcAnonStoreyA*, uint32_t))(Il2CppBase() + 0x2D238AC))(this, it);
	}
	template <typename T = bool> T m__5(uintptr_t it) {
		return ((T (*)(CheckEnoughToEnterRoomcAnonStoreyA*, uintptr_t))(Il2CppBase() + 0x2D238C8))(this, it);
	}
	template <typename T = bool> T m__6(uintptr_t it) {
		return ((T (*)(CheckEnoughToEnterRoomcAnonStoreyA*, uintptr_t))(Il2CppBase() + 0x2D238FC))(this, it);
	}

};

}
