#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.GunFightGame {

class GFVolumeProcess
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.GunFightGame", "GFVolumeProcess"));
	}

	template <typename T = uintptr_t> T& CurBarColor() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& CurCaputurerColor() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& IsCaputuring() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& InitOccupyTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& StartTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& EndTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& ChangeColorTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& NeedChangeColor() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryChangeColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = float> T get_CurPercent() {
		return ((T (*)(GFVolumeProcess*))(Il2CppBase() + 0x401E06C))(this);
	}
	template <typename T = void> T TryChangeColor() {
		return ((T (*)(GFVolumeProcess*))(Il2CppBase() + 0x401E154))(this);
	}

};

}
