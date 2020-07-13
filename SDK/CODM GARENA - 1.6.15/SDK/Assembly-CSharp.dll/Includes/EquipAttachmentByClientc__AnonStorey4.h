#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EquipAttachmentByClientcAnonStorey4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<EquipAttachmentByClient>c__AnonStorey4"));
	}

	template <typename T = int32_t> T& categoryType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t s) {
		return ((T (*)(EquipAttachmentByClientcAnonStorey4*, uintptr_t))(Il2CppBase() + 0x1C491B8))(this, s);
	}
	template <typename T = bool> T m__1(uintptr_t s) {
		return ((T (*)(EquipAttachmentByClientcAnonStorey4*, uintptr_t))(Il2CppBase() + 0x1C491FC))(this, s);
	}

};

}
