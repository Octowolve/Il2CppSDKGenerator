#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EquipAttachmentcAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<EquipAttachment>c__AnonStorey2"));
	}

	template <typename T = int32_t> T& categoryType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& f__ref$1() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t s) {
		return ((T (*)(EquipAttachmentcAnonStorey2*, uintptr_t))(Il2CppBase() + 0x1C4909C))(this, s);
	}
	template <typename T = bool> T m__1(uintptr_t _item) {
		return ((T (*)(EquipAttachmentcAnonStorey2*, uintptr_t))(Il2CppBase() + 0x1C490EC))(this, _item);
	}

};

}
