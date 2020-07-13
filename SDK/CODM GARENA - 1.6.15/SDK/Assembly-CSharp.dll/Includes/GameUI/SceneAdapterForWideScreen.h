#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class SceneAdapterForWideScreen
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "SceneAdapterForWideScreen"));
	}

	template <typename T = bool> T& calculateSelf() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& mCacheScale() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MakeBigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Start() {
		return ((T (*)(SceneAdapterForWideScreen*))(Il2CppBase() + 0x447358C))(this);
	}
	template <typename T = void> T MakeBigger() {
		return ((T (*)(SceneAdapterForWideScreen*))(Il2CppBase() + 0x4473674))(this);
	}

};

}
