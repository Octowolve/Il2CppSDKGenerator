#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StreamingTextureGroupObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StreamingTextureGroupObject"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& Settings() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyTextureGroups() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T ApplyTextureGroups(int32_t index) {
		return ((T (*)(StreamingTextureGroupObject*, int32_t))(Il2CppBase() + 0x3F25F94))(this, index);
	}

};

}
