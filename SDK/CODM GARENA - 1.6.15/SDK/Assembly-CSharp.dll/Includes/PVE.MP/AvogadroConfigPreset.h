#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class AvogadroConfigPreset
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "AvogadroConfigPreset"));
	}

	template <typename T = float> T& spawnAnimStartTime() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& spawnAnim() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& prepMoveAnim() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = float> T& movePrepDuration() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = float> T& moveFinishDuration() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& finishMoveAnim() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = float> T& attackRange() {
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
	template <typename T = uintptr_t> T& electricBallPreset() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& tracingBallPreset() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& beHitConfig() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& beHitWeakPointConfig() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = int32_t> T& dodgeTakeDamageCount() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPreloadAssets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = float> T get_spawnAnimLength() {
		return ((T (*)(AvogadroConfigPreset*))(Il2CppBase() + 0x49C4924))(this);
	}
	template <typename T = float> T get_spawnAnimDuration() {
		return ((T (*)(AvogadroConfigPreset*))(Il2CppBase() + 0x49C4934))(this);
	}
	template <typename T = float> T get_prepAnimDuration() {
		return ((T (*)(AvogadroConfigPreset*))(Il2CppBase() + 0x49C4964))(this);
	}
	template <typename T = float> T get_finishAnimDuration() {
		return ((T (*)(AvogadroConfigPreset*))(Il2CppBase() + 0x49C4974))(this);
	}
	template <typename T = float> T get_attackAnimLength() {
		return ((T (*)(AvogadroConfigPreset*))(Il2CppBase() + 0x49C4984))(this);
	}
	template <typename T = void> T GetPreloadAssets(uintptr_t assetsList) {
		return ((T (*)(AvogadroConfigPreset*, uintptr_t))(Il2CppBase() + 0x49C4994))(this, assetsList);
	}
	template <typename T = void> T xLuaBaseProxy_GetPreloadAssets(uintptr_t P0) {
		return ((T (*)(AvogadroConfigPreset*, uintptr_t))(Il2CppBase() + 0x49C4B3C))(this, P0);
	}

};

}
