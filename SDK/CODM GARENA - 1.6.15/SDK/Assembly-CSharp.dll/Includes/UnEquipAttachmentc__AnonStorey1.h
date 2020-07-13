#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UnEquipAttachmentcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<UnEquipAttachment>c__AnonStorey1"));
	}

	template <typename T = int32_t> T& actorID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t s) {
		return ((T (*)(UnEquipAttachmentcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x2EB2DD0))(this, s);
	}

};

}
