#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PostProcessAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PostProcessAttribute"));
	}

	template <typename T = uintptr_t> T& renderer() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& eventType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& menuItem() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& allowInSceneView() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& builtinEffect() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}


};

}
