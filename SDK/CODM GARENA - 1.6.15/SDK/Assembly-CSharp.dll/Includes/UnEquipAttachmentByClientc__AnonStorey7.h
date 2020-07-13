#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UnEquipAttachmentByClientcAnonStorey7
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<UnEquipAttachmentByClient>c__AnonStorey7"));
	}

	template <typename T = int32_t> T& attachmentID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
