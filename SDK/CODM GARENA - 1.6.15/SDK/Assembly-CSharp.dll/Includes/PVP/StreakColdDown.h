#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class StreakColdDown
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "StreakColdDown"));
	}

	template <typename T = uintptr_t> T& MaskObj() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& MaskLabel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& mCacheTargetTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& mCacheTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& bShowing() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = bool> T get_Showing() {
		return ((T (*)(StreakColdDown*))(Il2CppBase() + 0x2B210E4))(this);
	}
	template <typename T = void> T Show(bool bShow, float time) {
		return ((T (*)(StreakColdDown*, bool, float))(Il2CppBase() + 0x2B210EC))(this, bShow, time);
	}
	template <typename T = void> T Update() {
		return ((T (*)(StreakColdDown*))(Il2CppBase() + 0x2B2120C))(this);
	}

};

}
