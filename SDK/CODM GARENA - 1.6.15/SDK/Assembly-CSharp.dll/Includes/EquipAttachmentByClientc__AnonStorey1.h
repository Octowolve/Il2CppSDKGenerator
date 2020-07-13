#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EquipAttachmentByClientcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<EquipAttachmentByClient>c__AnonStorey1"));
	}

	template <typename T = int32_t> T& weaponActorId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t s) {
		return ((T (*)(EquipAttachmentByClientcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x1B0BAC4))(this, s);
	}

};

}
