#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Story {

class RushTargetVolumeManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Story", "RushTargetVolumeManager"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& RouteInfoList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& VolumeEffectOffset() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_SelectedRouteInfo() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_TargetEffect() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& m_LastIndex() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_TargetSignboard() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_RushGameInfo() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetVolumeActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Start() {
		return ((T (*)(RushTargetVolumeManager*))(Il2CppBase() + 0x395C054))(this);
	}
	template <typename T = void> T TriggerVolume(uintptr_t volume) {
		return ((T (*)(RushTargetVolumeManager*, uintptr_t))(Il2CppBase() + 0x395BC94))(this, volume);
	}
	template <typename T = void> T SetVolumeActive(int32_t index) {
		return ((T (*)(RushTargetVolumeManager*, int32_t))(Il2CppBase() + 0x395C574))(this, index);
	}
	template <typename T = int32_t> T GetIndex(uintptr_t volume) {
		return ((T (*)(RushTargetVolumeManager*, uintptr_t))(Il2CppBase() + 0x395CC74))(this, volume);
	}

};

}
