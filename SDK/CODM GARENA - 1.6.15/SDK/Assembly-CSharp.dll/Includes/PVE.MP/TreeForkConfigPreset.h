#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class TreeForkConfigPreset
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "TreeForkConfigPreset"));
	}

	template <typename T = float> T& minAttackDistance() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> T& maxAttackDistance() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& minHeight() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = float> T& maxHeight() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = int32_t> T& attackCount() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = float> T& attackRange() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& spawnAnim() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& attackAnim() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = float> T& attackTime() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = Il2CppVector3> T& fireOffset() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = float> T& attackCD() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = float> T& lifeSpan() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = float> T& spawnEffectDuration() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = int32_t> T& trriggerAssetID() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = Il2CppVector3> T& boxHalfExtent() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& buffIDList() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = float> T get_spawnAnimDuration() {
		return ((T (*)(TreeForkConfigPreset*))(Il2CppBase() + 0x435DC10))(this);
	}
	template <typename T = float> T get_attackAnimLength() {
		return ((T (*)(TreeForkConfigPreset*))(Il2CppBase() + 0x435DC20))(this);
	}

};

}
