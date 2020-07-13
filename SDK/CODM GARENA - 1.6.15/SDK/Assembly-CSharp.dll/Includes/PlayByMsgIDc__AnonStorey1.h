#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayByMsgIDcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<PlayByMsgID>c__AnonStorey1"));
	}

	template <typename T = Il2CppString*> T& audioAsset() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& targetID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(PlayByMsgIDcAnonStorey1*))(Il2CppBase() + 0x31F7768))(this);
	}

};

}
