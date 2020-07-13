#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NotifyDataStoreUpdatedcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<NotifyDataStoreUpdated>c__AnonStorey1"));
	}

	template <typename T = uintptr_t> T& data() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& f__ref$0() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(NotifyDataStoreUpdatedcAnonStorey1*))(Il2CppBase() + 0x387C518))(this);
	}

};

}
