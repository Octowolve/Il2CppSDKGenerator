#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EquipAttachmentByClientcAnonStorey5
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<EquipAttachmentByClient>c__AnonStorey5"));
	}

	template <typename T = uintptr_t> T& weaponPart() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& f__ref$4() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(EquipAttachmentByClientcAnonStorey5*))(Il2CppBase() + 0x1C49240))(this);
	}

};

}
