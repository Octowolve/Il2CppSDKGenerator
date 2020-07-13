#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class SequenceObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "SequenceObject"));
	}

	template <typename T = uintptr_t> T& ePlayMode() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& loop() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& playOnEnable() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAssetsLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = bool> T get_bFinish() {
		return ((T (*)(SequenceObject*))(Il2CppBase() + 0x44893E0))(this);
	}
	template <typename T = void> T Play() {
		return ((T (*)(SequenceObject*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Stop() {
		return ((T (*)(SequenceObject*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(SequenceObject*))(Il2CppBase() + 0x44893E8))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(SequenceObject*))(Il2CppBase() + 0x4489498))(this);
	}
	template <typename T = void> T OnAssetsLoaded() {
		return ((T (*)(SequenceObject*))(Il2CppBase() + 0x4489554))(this);
	}

};

}
