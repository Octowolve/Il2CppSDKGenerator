#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Sprite
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Sprite"));
	}

	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppRect> T& outer() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppRect> T& inner() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& rotated() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& paddingLeft() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& paddingRight() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& paddingTop() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& paddingBottom() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T get_hasPadding() {
		return ((T (*)(Sprite*))(Il2CppBase() + 0x426424C))(this);
	}

};

}
