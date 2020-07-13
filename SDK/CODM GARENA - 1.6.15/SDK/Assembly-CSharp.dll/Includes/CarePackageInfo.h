#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CarePackageInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CarePackageInfo"));
	}

	template <typename T = uint32_t> T& PlayerID() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uint32_t> T& ActorID() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& CarePackageType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = unsigned char> T& Camp() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& DstPos() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& Orient() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& ScoreStreakID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint16_t> T& LeftLifeTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint16_t> T& LifeTime() {
		return *(T*)((uintptr_t)this + 0x2E);
	}
	template <typename T = uint32_t> T& ItemID() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = unsigned char> T& IsDestroy() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uint32_t> T& ResetTimes() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& SetTrapPlayerID() {
		return *(T*)((uintptr_t)this + 0x3C);
	}


};

}
