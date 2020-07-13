#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class SoundVisibleSprite
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "SoundVisibleSprite"));
	}

	template <typename T = uintptr_t> T& InnerSprite() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& OuterSprite() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& InnerTweenScale() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& OuterTweenScale() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& InnerTweenAlpha() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& OuterTweenAlpha() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetForwardInitState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetReverseInitState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAnimationForwad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAnimationBackWard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T SetForwardInitState() {
		return ((T (*)(SoundVisibleSprite*))(Il2CppBase() + 0x29986D0))(this);
	}
	template <typename T = void> T SetReverseInitState() {
		return ((T (*)(SoundVisibleSprite*))(Il2CppBase() + 0x2998850))(this);
	}
	template <typename T = void> T PlayAnimationForwad() {
		return ((T (*)(SoundVisibleSprite*))(Il2CppBase() + 0x29989D8))(this);
	}
	template <typename T = void> T PlayAnimationBackWard() {
		return ((T (*)(SoundVisibleSprite*))(Il2CppBase() + 0x2998AD8))(this);
	}

};

}
