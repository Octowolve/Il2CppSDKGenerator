#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.Components {

class VolumeClientDetectorContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.Components", "VolumeClientDetectorContainer"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& AllVolumes() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _msInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Term() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddDetector() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveDetector() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshContainers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x44DB038))(0);
	}
	template <typename T = void> static T set_Instance(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44DF018))(0, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T get_Volumes() {
		return ((T (*)(void *))(Il2CppBase() + 0x44DF0CC))(0);
	}
	template <typename T = void> T Init() {
		return ((T (*)(VolumeClientDetectorContainer*))(Il2CppBase() + 0x44DF1DC))(this);
	}
	template <typename T = void> T Term() {
		return ((T (*)(VolumeClientDetectorContainer*))(Il2CppBase() + 0x44DF2F4))(this);
	}
	template <typename T = void> T AddDetector(uintptr_t pChildDetector) {
		return ((T (*)(VolumeClientDetectorContainer*, uintptr_t))(Il2CppBase() + 0x44DB0E8))(this, pChildDetector);
	}
	template <typename T = void> T RemoveDetector(uintptr_t pChildDetector) {
		return ((T (*)(VolumeClientDetectorContainer*, uintptr_t))(Il2CppBase() + 0x44DB3AC))(this, pChildDetector);
	}
	template <typename T = void> T RefreshContainers() {
		return ((T (*)(VolumeClientDetectorContainer*))(Il2CppBase() + 0x44DF440))(this);
	}

};

}
