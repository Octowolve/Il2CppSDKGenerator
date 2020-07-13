#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class CarePackageSyncData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "CarePackageSyncData"));
	}

	template <typename T = uint32_t> T& PlayerId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& ActorId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& CarePackageType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = unsigned char> T& Camp() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector3> T& Pos() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& Orient() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& ScoreStreakId() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint16_t> T& LeftLifeTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uint16_t> T& LifeTime() {
		return *(T*)((uintptr_t)this + 0x36);
	}
	template <typename T = uint32_t> T& ItemId() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = unsigned char> T& IsDestroy() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uint32_t> T& ResetTimes() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint32_t> T& SetTrapPlayerId() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = unsigned char> T& BoxStat() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppVector3> T& Vel() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}


};

}
