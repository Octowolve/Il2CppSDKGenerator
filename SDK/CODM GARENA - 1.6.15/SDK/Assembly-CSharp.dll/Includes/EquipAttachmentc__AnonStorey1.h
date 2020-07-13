#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EquipAttachmentcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<EquipAttachment>c__AnonStorey1"));
	}

	template <typename T = int32_t> T& attachmentID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& actorID() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
