#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class BossSantaRadioObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "BossSantaRadioObject"));
	}

	template <typename T = uintptr_t> T& SoundComp() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BossSantaRadioObject*))(Il2CppBase() + 0x45FC2B4))(this);
	}
	template <typename T = void> T PlaySound(bool bPlay) {
		return ((T (*)(BossSantaRadioObject*, bool))(Il2CppBase() + 0x45FC48C))(this, bPlay);
	}

};

}
