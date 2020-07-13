#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnLoadAttachmentCompletecAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnLoadAttachmentComplete>c__AnonStorey1"));
	}

	template <typename T = int32_t> T& assetID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t x) {
		return ((T (*)(OnLoadAttachmentCompletecAnonStorey1*, uintptr_t))(Il2CppBase() + 0x40F1610))(this, x);
	}

};

}
