#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UnEquipAttachmentcAnonStorey6
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<UnEquipAttachment>c__AnonStorey6"));
	}

	template <typename T = int32_t> T& attachmentID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& actorID() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t s) {
		return ((T (*)(UnEquipAttachmentcAnonStorey6*, uintptr_t))(Il2CppBase() + 0x1C492A0))(this, s);
	}
	template <typename T = bool> T m__1(uintptr_t s) {
		return ((T (*)(UnEquipAttachmentcAnonStorey6*, uintptr_t))(Il2CppBase() + 0x1C492E4))(this, s);
	}
	template <typename T = bool> T m__2(uintptr_t s) {
		return ((T (*)(UnEquipAttachmentcAnonStorey6*, uintptr_t))(Il2CppBase() + 0x1C49328))(this, s);
	}

};

}
