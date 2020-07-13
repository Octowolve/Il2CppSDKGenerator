#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class GuideMoveGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "GuideMoveGroup"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& GuideVolumeList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& IsFromBeginToEnd() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& LerpTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& LerpDuration() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_TargetVolume() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnterGuideMoveVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVolumeIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNextVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(GuideMoveGroup*))(Il2CppBase() + 0x36F8D70))(this);
	}
	template <typename T = void> T OnEnterGuideMoveVolume(uintptr_t volume) {
		return ((T (*)(GuideMoveGroup*, uintptr_t))(Il2CppBase() + 0x36F8F8C))(this, volume);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GuideMoveGroup*))(Il2CppBase() + 0x36F9B80))(this);
	}
	template <typename T = int32_t> T GetVolumeIndex(uintptr_t volume) {
		return ((T (*)(GuideMoveGroup*, uintptr_t))(Il2CppBase() + 0x36F9374))(this, volume);
	}
	template <typename T = uintptr_t> T GetNextVolume(uintptr_t volume) {
		return ((T (*)(GuideMoveGroup*, uintptr_t))(Il2CppBase() + 0x36F9A74))(this, volume);
	}

};

}
