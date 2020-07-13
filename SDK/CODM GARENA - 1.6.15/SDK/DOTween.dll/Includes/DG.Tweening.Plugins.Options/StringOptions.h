#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening.Plugins.Options {

class StringOptions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening.Plugins.Options", "StringOptions"));
	}

	template <typename T = bool> T& richTextEnabled() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& scrambleMode() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& scrambledChars() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& startValueStrippedLength() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& changeValueStrippedLength() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(StringOptions*))(Il2CppBase() + 0x44B5F74))(this);
	}

};

}
