#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class SparrowStickInfoItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "SparrowStickInfoItem"));
	}

	template <typename T = uint32_t> T& UltID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& SkillIdx() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& ProjectileID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& AttachActorTransform() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector3> T& InitRelativePos() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& Pos() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& ScanRange() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& ContinuousTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppList<uint32_t>*> T& ScanPawnIDList() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& BRMapCircleSlot() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppVector3> T& CurrentPos() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Init() {
		return ((T (*)(SparrowStickInfoItem*))(Il2CppBase() + 0x33F7494))(this);
	}
	template <typename T = void> T Tick() {
		return ((T (*)(SparrowStickInfoItem*))(Il2CppBase() + 0x33F7538))(this);
	}

};

}
