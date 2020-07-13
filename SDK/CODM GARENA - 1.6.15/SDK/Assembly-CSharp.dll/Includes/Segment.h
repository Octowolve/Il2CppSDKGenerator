#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Segment
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Segment"));
	}

	template <typename T = float> T& offsetX() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& offsetY() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& scaleX() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& scaleY() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& lnA() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& B() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Eval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = float> T Eval(float x) {
		return ((T (*)(Segment*, float))(Il2CppBase() + 0x474C09C))(this, x);
	}

};

}
