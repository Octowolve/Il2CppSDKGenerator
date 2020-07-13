#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Tutorial {

class TutorialNavData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Tutorial", "TutorialNavData"));
	}

	template <typename T = bool> T& bShowFinger() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& bShowMan() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = bool> T& bShowLeftMan() {
		return *(T*)((uintptr_t)this + 0xA);
	}
	template <typename T = bool> T& bShowMask() {
		return *(T*)((uintptr_t)this + 0xB);
	}
	template <typename T = bool> T& bShowEffect() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& bShowMask2() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = bool> T& bShowFingerArrow() {
		return *(T*)((uintptr_t)this + 0xE);
	}
	template <typename T = bool> T& bShowNewContent() {
		return *(T*)((uintptr_t)this + 0xF);
	}
	template <typename T = bool> T& bShowNewContentLeft() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& NewContentWidth() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& extraTrans() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
