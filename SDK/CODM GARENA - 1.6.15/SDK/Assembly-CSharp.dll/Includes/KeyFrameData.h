#pragma once
#include <Il2Cpp/Il2Cpp.h>

class KeyFrameData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KeyFrameData"));
	}

	template <typename T = float> T& time() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& value() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& inTangent() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& outTangent() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& tangentMode() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
