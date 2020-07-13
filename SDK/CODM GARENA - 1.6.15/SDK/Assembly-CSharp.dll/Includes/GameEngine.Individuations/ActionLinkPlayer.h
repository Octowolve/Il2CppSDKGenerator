#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine.Individuations {

class ActionLinkPlayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine.Individuations", "ActionLinkPlayer"));
	}

	template <typename T = uintptr_t> T& mLink() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T init(uintptr_t inLink) {
		return ((T (*)(ActionLinkPlayer*, uintptr_t))(Il2CppBase() + 0x3704434))(this, inLink);
	}
	template <typename T = void> T shutdown() {
		return ((T (*)(ActionLinkPlayer*))(Il2CppBase() + 0x37044DC))(this);
	}
	template <typename T = void> T tick(float delta) {
		return ((T (*)(ActionLinkPlayer*, float))(Il2CppBase() + 0x3704574))(this, delta);
	}

};

}
